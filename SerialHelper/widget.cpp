#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    keyFlag = false;

    port = NULL;
    Baud = QSerialPort::Baud9600;  //波特率
    Data = QSerialPort::Data8;     //数据位
    Stop = QSerialPort::OneStop;   //停止位
    Check = QSerialPort::NoParity; //校验位

    serial = new QSerialPort(this);

    RefreshTimeId = this->startTimer(500);

    refreshUsartPort();
    readUsartConfig();
    RX_Usart_info();
    TX_Usart_info();
    RXDataRead();

    //连接信号与槽 谁发出信号 发出什么信号 谁处理信号 怎么处理
    connect(serial,&QSerialPort::readyRead,this,&Widget::RXDataRead);
}

Widget::~Widget()
{
    delete ui;
}


//开关切换
void Widget::on_KeyButton_clicked()
{
    qDebug()<< "进入开关";
    if(keyFlag == false)    //开启条件
    {
        qDebug()<< "开关";
        keyFlag = true;
        ui->KeyButton->setText("关闭串口");

        port = ui->SerialcomboBox->currentText();

        serial->setBaudRate(Baud);
        serial->setPortName(port);
        serial->setDataBits(Data);
        serial->setParity(Check);
        serial->setStopBits(Stop);

    }else if(keyFlag == true)   //关闭
    {
        keyFlag = false;
        ui->KeyButton->setText("打开串口");
    }else{
        QMessageBox::warning(this,"警告","请确定有可用串口");
    }
}


//串口配置读取
void Widget::readUsartConfig(){

    QString port = NULL;
    QSerialPort::BaudRate Baud;     //波特率
    QSerialPort::DataBits Data;     //数据位
    QSerialPort::StopBits Stop;     //停止位
    QSerialPort::Parity Check;      //校验位

    switch (ui->BuardcomboBox->currentIndex()) {
    case 0: Baud=QSerialPort::Baud1200; break;
    case 1: Baud=QSerialPort::Baud2400; break;
    case 2: Baud=QSerialPort::Baud4800; break;
    case 3: Baud=QSerialPort::Baud9600; break;
    case 4: Baud=QSerialPort::Baud19200; break;
    case 5: Baud=QSerialPort::Baud115200; break;
    default:break;
    }

    switch (ui->StopBitcomboBox->currentIndex()) {
    case 0: Stop=QSerialPort::OneStop; break;
    case 1: Stop=QSerialPort::OneAndHalfStop; break;
    case 2: Stop=QSerialPort::TwoStop; break;
    default:break;
    }

    switch (ui->DataBitcomboBox->currentIndex()) {
    case 0: Data=QSerialPort::Data8; break;
    case 1: Data=QSerialPort::Data7; break;
    case 2: Data=QSerialPort::Data6; break;
    case 3: Data=QSerialPort::Data5; break;
    default:break;
    }

    switch (ui->CheckcomboBox->currentIndex()) {
    case 0: Check=QSerialPort::NoParity; break;
    case 1: Check=QSerialPort::OddParity; break;
    case 2: Check=QSerialPort::EvenParity; break;
    default:break;
    }

    // qDebug()<< port;
    // qDebug()<< Baud;
    // qDebug()<< Data;
    // qDebug()<< Stop;
    // qDebug()<< Check;
}


//刷新串口
void Widget::refreshUsartPort(){

    QVector<QString>temp;
    //获取当前可用串口号
    for (const QSerialPortInfo& info : QSerialPortInfo::availablePorts()) {
        // temp.push_back(info.portName() +"(" +  info.description() + ")");
        temp.push_back(info.portName());
    }
    //排序现有的串口号,用于比较和原有的差距
    std::sort(temp.begin(), temp.end());

    if (temp != this->ports) {  //如果可用串口号有变化
        ui->SerialcomboBox->clear();  //清除原有列表
        this->ports = temp;         //更新串口列表
        for (auto& a : ports) {     //更新新串口
            ui->SerialcomboBox->addItem(a);
        }
    }
}



//定时器处理函数
void Widget::timeEvent(QTimerEvent *timex){
    if(timex->timerId() == RefreshTimeId)
    {
        this->refreshUsartPort();
        readUsartConfig();
    }
}



//接收区域
void Widget::RX_Usart_info(){

    ui->RXtextEdit->setReadOnly(true);       //接收区改为只读

    connect(ui->ClearRXButton,&QPushButton::clicked,[&](){
        ui->RXtextEdit->clear();
    });
}


//发送区域+发送数据
void Widget::TX_Usart_info(){

    connect(ui->ClearTXButton,&QPushButton::clicked,[&](){
        ui->TXtextEdit->clear();
    });

    connect(ui->SendButton,&QPushButton::clicked,[&](){

        QString data = ui->TXtextEdit->toPlainText();

        //数据发送格式HEX or 文本
        if (ui->HexSendBox->isChecked() == true)
        {
            QByteArray arr;

            for (int i = 0; i < data.size(); i++){
                if (data[i] == ' ') continue;
                int num = data.mid(i, 2).toUInt(nullptr, 16);       //将数据转为16进制
                i++;
                arr.append(num);
            }
            //serialPort->write(arr);
            qDebug()<<arr;

        }else {
            //serialPort->write(data.toLocal8Bit().data());           //转为utf-8格式字符串写入
            qDebug()<<data;
        }
    });
}


void Widget::RXDataRead(){

    qDebug()<< "进入读取";
    if (serial->open(QSerialPort::ReadWrite)) {
        //配置信号槽,一旦收到数据则开始读取
        qDebug()<< "读取";
        connect(serial, &QSerialPort::readyRead, [&]() {
            auto data = serial->readAll();
            if (ui->HexRxBox->isChecked() == true) {      //HEX模式
                QString hex = data.toHex(' ');
                ui->RXtextEdit->appendPlainText(hex);
            }
            else {                                          //文本模式
                QString str = QString(data);
                ui->RXtextEdit->appendPlainText(str);
            }
        });
    }
}

void Widget::on_SendButton_clicked()
{

}

