#include "serial.h"

//串口通信核心
void Serial::USART(QString port, QString baud, QString data,QString stop,QString check) {

    QSerialPort::BaudRate Baud;     //波特率
    QSerialPort::DataBits Data;     //数据位
    QSerialPort::StopBits Stop;     //停止位
    QSerialPort::Parity Check;      //校验位

    if (baud == "4800")  Baud = QSerialPort::Baud4800;
    else if (baud == "9600") Baud = QSerialPort::Baud9600;
    else if (baud == "19200")  Baud = QSerialPort::Baud19200;
    else if (baud == "19200")  Baud = QSerialPort::Baud115200;

    if (data == "8") Data = QSerialPort::Data8;

    if (stop == "1") Stop = QSerialPort::OneStop;
    else if (stop == "1.5")Stop = QSerialPort::OneAndHalfStop;
    else if (stop == "2") Stop = QSerialPort::TwoStop;

    if (check ==  "无") Check = QSerialPort::NoParity;
    else if (check ==  "奇校验") Check = QSerialPort::OddParity;
    else if (check ==  "偶校验") Check = QSerialPort::EvenParity;

    serialPort = new QSerialPort(this);
    //为串口设置配置
    serialPort->setBaudRate(Baud);
    serialPort->setPortName(port);
    serialPort->setDataBits(Data);
    serialPort->setParity(Check);
    serialPort->setStopBits(Stop);
    //打开串口
    if (serialPort->open(QSerialPort::ReadWrite)) {
        //配置信号槽,一旦收到数据则开始读取
        QObject::connect(serialPort, &QSerialPort::readyRead, [&]() {
            auto data = serialPort->readAll();
            if (receiveMode->currentText() == "HEX") {      //字节模式
                QString hex = data.toHex(' ');
                receiveAera->appendPlainText(hex);
            }
            else {                                          //文本模式
                QString str = QString(data);
                receiveAera->appendPlainText(str);
            }
        });
    }else {
        QMessageBox::critical(this, "串口打开失败", "请确认串口是否正确连接");
    }
}

//刷新可用串口
void Serial::RefreshPort(void) {
    QVector<QString>temp;
    //获取当前可用串口号+表述信息
    for (const QSerialPortInfo& info : QSerialPortInfo::availablePorts()) {
        temp.push_back(info.portName());
    }
    //排序现有的串口号,用于比较和原有的差距
    std::sort(temp.begin(), temp.end());
    if (temp != this->ports) {  //如果可用串口号有变化
        this->portNumber->clear();  //清除原有列表
        this->ports = temp;         //更新串口列表
        for (auto& a : ports) {     //更新新串口
            this->portNumber->addItem(a);
        }
    }
}

//接收区初始化
void Serial::ReceiveAeraInit(QWidget* parent) {

    //接收区界面初始化
    receiveAera = new QPlainTextEdit(parent);
    receiveAera->setFixedSize(800,400);
    receiveAera->move(30,20);
    receiveAera->setReadOnly(true);     //接收区改为只读

    //清空接收区按钮设置
    QPushButton* clearReceive = new QPushButton("清空接收区",parent);
    clearReceive->setFixedSize(150,50);
    clearReceive->move(680,430);

    //为清空接收区设置信号槽
    QObject::connect(clearReceive, &QPushButton::clicked, [&]() {
        receiveAera->clear();
    });
}

//发送区初始化
void Serial::SendAeraInit(QWidget* parent) {

    //发送区界面初始化
    sendAera = new QPlainTextEdit(parent);
    sendAera->setFixedSize(800,100);
    sendAera->move(30,500);

    //清空发送区按钮设置
    QPushButton* clearSend = new QPushButton("清空发送区", parent);
    clearSend->setFixedSize(150, 50);
    clearSend->move(680, 630);

    //为清空发送区设置信号槽
    QObject::connect(clearSend, &QPushButton::clicked, [&]() {
        sendAera->clear();
    });

    //发送按钮设置
    sendButton = new QPushButton("发送", parent);
    sendButton->setFixedSize(150, 50);
    sendButton->move(500, 630);
    sendButton->setDisabled(true);

    //为发送设置信号槽
    QObject::connect(sendButton, &QPushButton::clicked, [&]() {
        QString data = sendAera->toPlainText();

        //数据发送格式HEX or 文本
        if (sendMode->currentText() == "HEX") {
            QByteArray arr;
            for (int i = 0; i < data.size(); i++){
                if (data[i] == ' ') continue;
                int num = data.mid(i, 2).toUInt(nullptr, 16);       //将数据转为16进制
                i++;
                arr.append(num);
            }
            serialPort->write(arr);
        }else {
            serialPort->write(data.toLocal8Bit().data());           //转为utf-8格式字符串写入
        }

    });
}

//定时事件
void Serial::timerEvent(QTimerEvent* e) {
    RefreshPort();      //更新端口
}

//串口设置初始化
void Serial::SetupInit(QWidget* parent) {

    //创建右侧ComboBox下拉框对象
    this->portNumber = new QComboBox(parent);
    this->baudRate = new QComboBox(parent);
    this->dataSize = new QComboBox(parent);
    this->stopSize = new QComboBox(parent);
    this->check = new QComboBox(parent);
    this->receiveMode = new QComboBox(parent);
    this->sendMode = new QComboBox(parent);

    //下拉选项设置
    this->baudRate->addItem("4800");
    this->baudRate->addItem("9600");
    this->baudRate->addItem("19200");
    this->baudRate->addItem("115200");
    this->dataSize->addItem("8");
    this->stopSize->addItem("1");
    this->stopSize->addItem("1.5");
    this->stopSize->addItem("2");
    this->check->addItem("无");
    this->check->addItem("奇校验");
    this->check->addItem("偶校验");
    this->receiveMode->addItem("HEX");
    this->receiveMode->addItem("文本");
    this->sendMode->addItem("HEX");
    this->sendMode->addItem("文本");

    //创建右侧Label标签对象
    QLabel* portLabel = new QLabel("串口号", parent);
    QLabel* baudLabel = new QLabel("波特率",parent);
    QLabel* dataLabel = new QLabel("数据位",parent);
    QLabel* stopLabel = new QLabel("停止位",parent);
    QLabel* checkLabel = new QLabel("校验位",parent);
    QLabel* receiveModeLabel = new QLabel("接收格式",parent);
    QLabel* sendModeLabel = new QLabel("发送格式",parent);

    //构建ComboBox容器
    QVector<QComboBox*>setups;
    setups.push_back(portNumber);
    setups.push_back(baudRate);
    setups.push_back(dataSize);
    setups.push_back(stopSize);
    setups.push_back(check);
    setups.push_back(receiveMode);
    setups.push_back(sendMode);

    //构建Label容器
    QVector<QLabel*>labels;
    labels.push_back(portLabel);
    labels.push_back(baudLabel);
    labels.push_back(dataLabel);
    labels.push_back(stopLabel);
    labels.push_back(checkLabel);
    labels.push_back(receiveModeLabel);
    labels.push_back(sendModeLabel);

    //设置标签显示位置
    for (int i = 0; i < setups.size(); ++i) {
        setups[i]->setFixedSize(200, 50);
        setups[i]->move(850, 20 + i * 80);
        labels[i]->move(1080,25+i*80);
    }

}

//串口连接
void Serial::BeginUSART(QWidget* parent) {

    //串口连接和断开连接按钮对象
    startUSART = new QPushButton("串口连接",parent);
    endUSART = new QPushButton("断开连接",parent);

    //位置
    endUSART->setFixedSize(150, 50);
    endUSART->move(1000, 600);
    startUSART->setFixedSize(150, 50);
    startUSART->move(850,600);

    endUSART->setDisabled(true);        //一开始没有连接串口,因此关闭按钮初始化为无效

    //为关闭连接按钮配置信号槽
    QObject::connect(endUSART, &QPushButton::clicked, [&]() {
        endUSART->setDisabled(true);        //使关闭连接按钮失效
        startUSART->setDisabled(false);     //使连接按钮生效
        sendButton->setDisabled(true);      //使发送按钮失效
        serialPort->close();                //断开串口连接
    });

    //为连接按钮配置信号槽
    QObject::connect(startUSART, &QPushButton::clicked, [&]() {
        QString port = portNumber->currentText();
        QString baud = baudRate->currentText();
        QString data = dataSize->currentText();
        QString stop = stopSize->currentText();
        QString ch = check->currentText();
        QString receive = receiveMode->currentText();
        QString send = sendMode->currentText();
        if (port != "") {       //当串口号不为空,即有效时
            endUSART->setDisabled(false);   //使关闭连接按钮生效
            sendButton->setDisabled(false); //使发送按钮生效
            startUSART->setDisabled(true);  //使连接按钮失效
            USART(port,baud,data,stop,ch);  //连接串口
        }
    });
}


//主界面设置
Serial::Serial(QWidget *parent): QMainWindow(parent){
    this->setFixedSize(1200,750);          //大小
    this->setWindowTitle("串口助手");    //名称
    ReceiveAeraInit(this);          //接收区初始化
    SendAeraInit(this);             //发送区初始化
    SetupInit(this);                //串口设置初始化
    BeginUSART(this);               //串口连接
    this->startTimer(1000);         //开个1秒的定时器用来扫描可用串口
}

Serial::~Serial(){

}
