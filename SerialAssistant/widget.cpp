#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);

    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortReadyRead_Slot()));

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serialNamePort<<info.portName();
    }
    ui->serialCb->addItems(serialNamePort);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::serialPortReadyRead_Slot()
{
    QString buf;
    buf = QString(serialPort->readAll());
    ui->recvEdit->appendPlainText(buf);
}

void Widget::on_openBt_clicked()
{
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;

    if(ui->baundrateCb->currentText() == "9600") {
        baudRate = QSerialPort::Baud9600;
    }else if(ui->baundrateCb->currentText() == "115200") {
        baudRate = QSerialPort::Baud115200;
    }

    if(ui->dateCb->currentText() == "8") {
        dataBits = QSerialPort::Data8;
    }

    if(ui->stopCb->currentText() == "1") {
        stopBits = QSerialPort::OneStop;
    }

    if(ui->checkCb->currentText() == "NONE") {
        checkBits = QSerialPort::NoParity;
    }

    serialPort->setPortName(ui->serialCb->currentText());
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);

    if(serialPort->open(QIODevice::ReadWrite) == true) {
        QMessageBox::information(this,"提示","成功");
    }else {
        QMessageBox::critical(this,"提示","失败");
    }
}

void Widget::on_closeBt_clicked()
{
    serialPort->close();
}

void Widget::on_sendBt_clicked()
{
    //serialPort->write(ui->sendEdit->text().toLocal8Bit().data());
    serialPort->write(QByteArray::fromHex(ui->sendEdit->text().toLatin1().data()));
    qDebug() << QByteArray::fromHex(ui->sendEdit->text().toLatin1().data());
}

void Widget::on_clearBt_clicked()
{
    ui->recvEdit->clear();
}
