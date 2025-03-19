#include "widget.h"
#include "./ui_widget.h"

#include <QStack>
#include <QVector>
//#include <iostream>
#include <QPainter>
#include <QStyleOption>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setMaximumSize(250,350);
    this->setMinimumSize(250,350);

    this->setWindowTitle("计算器");

    QFont f("仿宋",14);
    ui->mainLineEdit->setFont(f);

    //按钮插入图片
    // QIcon icon(FILEPATH);
    // ui->delButton->setIcon(icon);

    //设置按钮颜色
    ui->equalButton->setStyleSheet("background:blue;color:white");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_oneButton_clicked()
{
    expression += "1";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_twoButton_clicked()
{
    expression += "2";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_threeButton_clicked()
{
    expression += "3";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_fourButton_clicked()
{
    expression += "4";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_fiveButton_clicked()
{
    expression += "5";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_sixButton_clicked()
{
    expression += "6";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_sevenButton_clicked()
{
    expression += "7";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_eitherButton_clicked()
{
    expression += "8";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_nineButton_clicked()
{
    expression += "9";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_zeroButton_clicked()
{
    expression += "0";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_addButton_clicked()
{
    expression += "+";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_subButton_clicked()
{
    expression += "-";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_mulButton_clicked()
{
    expression += "*";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_divButton_clicked()
{
    expression += "/";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_leftButton_clicked()
{
    expression += "(";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_rightButton_clicked()
{
    expression += ")";
    ui->mainLineEdit->setText(expression);
}


void Widget::on_clearButton_clicked()
{
    expression.clear();
    ui->mainLineEdit->clear();
}


void Widget::on_delButton_clicked()
{
    expression.chop(1);
    ui->mainLineEdit->setText(expression);
}







using namespace std;
struct up{
    double a;
    char b;
    int sign;
};

//特殊符号栈处理
//如果直接入栈则输出0，若要去除栈内符号则输出1。特殊如果进栈右括号则为2
int cmpSymbol(char str1,char str2){
    switch(str1){
    case '+':
        if (str2==')') return 2;
        else if(str2=='+'||str2=='-') return 1;
        else return 0;
    case '-':
        if (str2==')') return 2;
        else if(str2=='+'||str2=='-') return 1;
        else return 0;
    case '*':
        if (str2=='(') return 0;
        else if (str2==')') return 2;
        else return 1;
    case '/':
        if (str2=='(') return 0;
        else if (str2==')') return 2;
        else return 1;
    case '(':return 0;
    default :return 3;
    };
}


//字符转换
std::vector<up> strconversion(QString expressionchu) {
    std::string expression;
    for (int a=0;a<expressionchu.size();a++){
        expression+=expressionchu[a].toLatin1();
    }
    int init=0;
    QStack<char> stack_t;
    vector<up> end;
    for (int n=0;n<expression.size();n++){
        if (init==0) {
            if (expression[n]>='0'&&expression[n]<='9') {
                int chun=n;
                double p=0;
                int signs[2]={0};
                int uu=0;
                int temp[10]={0},num_float[10]={0},z=0,x=0;
                while((expression[n]>='0'&&expression[n]<='9')||expression[n]=='.') {
                    signs[0]++;
                    if (expression[n] == '.') {
                        signs[1] = signs[0];
                        uu = 1;
                        n++;
                    }
                    if (uu == 0) {
                        temp[z] = expression[n]-'0';
                        z++;
                    } else {
                        num_float[x] = expression[n]-'0';
                        x++;
                    }
                    n++;
                }
                for (int a=0;a<z;a++){
                    p+=pow(10,z-a-1)*temp[a];
                }
                for (int a=0;a<x;a++){
                    p+=pow(0.1,a+1)*num_float[a];
                }
                n--;
                end.push_back({p,0,0});
            }
            else {
                init = 1;
                stack_t.push(expression[n]);
            }
        }else {
            if (expression[n]>='0'&&expression[n]<='9') {
                int chun=n;
                double p=0;
                int signs[2]={0};
                int uu=0;
                int temp[10]={0},num_float[10]={0},z=0,x=0;
                while((expression[n]>='0'&&expression[n]<='9')||expression[n]=='.') {
                    signs[0]++;
                    if (expression[n] == '.') {
                        signs[1] = signs[0];
                        uu = 1;
                        n++;
                    }
                    if (uu == 0) {
                        temp[z] = expression[n]-'0';
                        z++;
                    } else {
                        num_float[x] = expression[n]-'0';
                        x++;
                    }
                    n++;
                }
                for (int a=0;a<z;a++){
                    p+=pow(10,z-a-1)*temp[a];
                }
                for (int a=0;a<x;a++){
                    p+=pow(0.1,a+1)*num_float[a];
                }
                n--;
                end.push_back({p,0,0});
            }
            else {
                if (cmpSymbol(stack_t.top(), expression[n]) == 0) {
                    stack_t.push(expression[n]);
                } else if (cmpSymbol(stack_t.top(), expression[n]) == 1) {
                    while (cmpSymbol(stack_t.top(), expression[n]) == 1) {
                        end.push_back({0,stack_t.top(),1});
                        stack_t.pop();
                        if (stack_t.size()==0) {
                            init=0;
                            break;
                        }
                    }
                    stack_t.push(expression[n]);
                } else if (cmpSymbol(stack_t.top(), expression[n]) == 2) {
                    while (stack_t.top() != '(') {
                        end.push_back({0,stack_t.top(),1});
                        stack_t.pop();
                    }
                    stack_t.pop();
                    if (stack_t.size()==0) init=0;
                }
            }
        }
    }
    while(stack_t.size()!=0){
        end.push_back({0,stack_t.top(),1});
        stack_t.pop();
    }
    return end;
}


//计算操作，后缀
double computation(vector<up> suffixexpression){
    char fu;
    vector<struct up> temp;
    for (int n=0;n<suffixexpression.size();n++){
        if (suffixexpression[n].sign==1){
            temp.push_back({0,suffixexpression[n].b,1});
        }else {
            temp.push_back({suffixexpression[n].a,0,0});
        }
    }
    while(temp.size()>1) {
        for (int n = 0; n < temp.size(); n ++) {
            if (temp[n].sign==1) {
                fu = temp[n].b;
                switch (fu) {
                case '+':
                    temp[n-2].a+=temp[n-1].a;
                    break;
                case '-':
                    temp[n-2].a-=temp[n-1].a;
                    break;
                case '*':
                    temp[n-2].a*=temp[n-1].a;
                    break;
                case '/':
                    temp[n-2].a/=temp[n-1].a;
                    break;
                default:
                    break;
                }
                temp.erase(temp.begin() + n - 1);
                temp.erase(temp.begin() + n-1);
                break;
            }
        }
    }
    return temp[0].a;
}


//等号输出
void Widget::on_equalButton_clicked()
{

    QString nums;
    vector<up> chu=strconversion(expression);
    expression+="=";
    double result=computation(chu);
    nums+=to_string(result);
    int n=nums.size()-1;
    while(nums[n]=='0'){
        nums.erase(nums.begin()+n);
        n--;
    }
    if (nums[n]=='.') nums.erase(nums.begin()+n);
    expression+=nums;
    ui->mainLineEdit->setText(expression);

}



