#include "widget.h"
#include "ui_widget.h"
#include <QString.h>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("CAN扩展帧ID解析");

    this->setFixedSize(width(),height()); //固定窗口大小
    //this->setFixedSize(910, 530);

    //设置文本的颜色，背景文本的颜色也会修改
    //QPalette palette;
    //palette.setColor(QPalette::Text, QColor(196, 196, 196));  //灰色
    //palette.setColor(QPalette::Text, QColor(255, 0, 0));  //红色
    //ui->srcEdit_in->setPalette(palette);
    //ui->srcEdit_in->setStyleSheet("QLineEdit{color:rgb(33, 33, 33);}");   //无效，需确认
    //ui->srcEdit_in->setStyleSheet("QLineEdit{color: 0x999999;}");   //无效，需确认

    //设置背景文字，也可在属性栏直接设置
    //ui->srcEdit_in->setPlaceholderText("输入");

    //ui->extEdit_out->setStyleSheet("background-color:rgba(0,196,196,196)");
    ui->extEdit_out->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->extEdit_out_2->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->extEdit_out_3->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->srcEdit_out->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->srcEdit_out_2->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->srcEdit_out_3->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->dstEdit_out->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->dstEdit_out_2->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->dstEdit_out_3->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->cmdEdit_out->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->cmdEdit_out_2->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->cmdEdit_out_3->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->indexEdit_out->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->indexEdit_out_2->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->indexEdit_out_3->setStyleSheet("background:lightGray");   //设置背景为浅灰色
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_convertBt_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    src_id = ui->srcEdit_in->text().toInt(&status,16); // 表示以16进制方式读取字符串
    dst_id = ui->dstEdit_in->text().toInt(&status,16); // 表示以16进制方式读取字符串
    cmd = ui->cmdEdit_in->text().toInt(&status,16); // 表示以16进制方式读取字符串
    index = ui->indexEdit_in->text().toInt(&status,16); // 表示以16进制方式读取字符串
    ext_id = (src_id << 22) + (dst_id << 16) + (cmd << 8) + index;
    qDebug("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x --> ext_id = 0x%x", src_id, dst_id, cmd, index, ext_id);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_ext_id = QString("%1").arg(ext_id, 8, 16, QLatin1Char('0'));
    str_ext_id = str_ext_id.toUpper();
    ui->extEdit_out->setText(str_ext_id);

    buf = QString().sprintf("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x --> ext_id = 0x%x", src_id, dst_id, cmd, index, ext_id);
    ui->historyEdit->appendPlainText(buf);
}

void Widget::on_convertBt_5_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    ext_id = ui->extEdit_in->text().toInt(&status,16); // 表示以16进制方式读取字符串
    src_id = (ext_id >> 22) & 0x3F;
    dst_id = (ext_id >> 16) & 0x3F;
    cmd = (ext_id >> 8) & 0xFF;
    index = ext_id & 0xFF;
    qDebug("ext_id = 0x%x --> src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x", ext_id, src_id, dst_id, cmd, index);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_src_id = QString("%1").arg(src_id, 2, 16, QLatin1Char('0'));
    str_src_id = str_src_id.toUpper();
    ui->srcEdit_out->setText(str_src_id);

    QString str_dst_id = QString("%1").arg(dst_id, 2, 16, QLatin1Char('0'));
    str_dst_id = str_dst_id.toUpper();
    ui->dstEdit_out->setText(str_dst_id);

    QString str_cmd = QString("%1").arg(cmd, 2, 16, QLatin1Char('0'));
    str_cmd = str_cmd.toUpper();
    ui->cmdEdit_out->setText(str_cmd);

    QString str_index = QString("%1").arg(index, 2, 16, QLatin1Char('0'));
    str_index = str_index.toUpper();
    ui->indexEdit_out->setText(str_index);

    buf = QString().sprintf("ext_id = 0x%x --> src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x", ext_id, src_id, dst_id, cmd, index);
    ui->historyEdit->appendPlainText(buf);
}

void Widget::on_convertBt_2_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    src_id = ui->srcEdit_in_2->text().toInt(&status,16); // 表示以16进制方式读取字符串
    dst_id = ui->dstEdit_in_2->text().toInt(&status,16); // 表示以16进制方式读取字符串
    cmd = ui->cmdEdit_in_2->text().toInt(&status,16); // 表示以16进制方式读取字符串
    index = ui->indexEdit_in_2->text().toInt(&status,16); // 表示以16进制方式读取字符串
    ext_id = (src_id << 22) + (dst_id << 16) + (cmd << 8) + index;
    qDebug("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x --> ext_id = 0x%x", src_id, dst_id, cmd, index, ext_id);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_ext_id = QString("%1").arg(ext_id, 8, 16, QLatin1Char('0'));
    str_ext_id = str_ext_id.toUpper();
    ui->extEdit_out_2->setText(str_ext_id);
    buf = QString().sprintf("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x --> ext_id = 0x%x", src_id, dst_id, cmd, index, ext_id);
    ui->historyEdit->appendPlainText(buf);
}

void Widget::on_convertBt_3_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    src_id = ui->srcEdit_in_3->text().toInt(&status,16); // 表示以16进制方式读取字符串
    dst_id = ui->dstEdit_in_3->text().toInt(&status,16); // 表示以16进制方式读取字符串
    cmd = ui->cmdEdit_in_3->text().toInt(&status,16); // 表示以16进制方式读取字符串
    index = ui->indexEdit_in_3->text().toInt(&status,16); // 表示以16进制方式读取字符串
    ext_id = (src_id << 22) + (dst_id << 16) + (cmd << 8) + index;
    qDebug("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x --> ext_id = 0x%x", src_id, dst_id, cmd, index, ext_id);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_ext_id = QString("%1").arg(ext_id, 8, 16, QLatin1Char('0'));
    str_ext_id = str_ext_id.toUpper();
    ui->extEdit_out_3->setText(str_ext_id);
    buf = QString().sprintf("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x --> ext_id = 0x%x", src_id, dst_id, cmd, index, ext_id);
    ui->historyEdit->appendPlainText(buf);
}

void Widget::on_convertBt_4_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    ext_id = ui->extEdit_in_2->text().toInt(&status,16); // 表示以16进制方式读取字符串
    src_id = (ext_id >> 22) & 0x3F;
    dst_id = (ext_id >> 16) & 0x3F;
    cmd = (ext_id >> 8) & 0xFF;
    index = ext_id & 0xFF;
    qDebug("ext_id = 0x%x --> src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x", ext_id, src_id, dst_id, cmd, index);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_src_id = QString("%1").arg(src_id, 2, 16, QLatin1Char('0'));
    str_src_id = str_src_id.toUpper();
    ui->srcEdit_out_2->setText(str_src_id);

    QString str_dst_id = QString("%1").arg(dst_id, 2, 16, QLatin1Char('0'));
    str_dst_id = str_dst_id.toUpper();
    ui->dstEdit_out_2->setText(str_dst_id);

    QString str_cmd = QString("%1").arg(cmd, 2, 16, QLatin1Char('0'));
    str_cmd = str_cmd.toUpper();
    ui->cmdEdit_out_2->setText(str_cmd);

    QString str_index = QString("%1").arg(index, 2, 16, QLatin1Char('0'));
    str_index = str_index.toUpper();
    ui->indexEdit_out_2->setText(str_index);

    buf = QString().sprintf("ext_id = 0x%x --> src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x", ext_id, src_id, dst_id, cmd, index);
    ui->historyEdit->appendPlainText(buf);
}

void Widget::on_convertBt_6_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    ext_id = ui->extEdit_in_3->text().toInt(&status,16); // 表示以16进制方式读取字符串
    src_id = (ext_id >> 22) & 0x3F;
    dst_id = (ext_id >> 16) & 0x3F;
    cmd = (ext_id >> 8) & 0xFF;
    index = ext_id & 0xFF;
    qDebug("ext_id = 0x%x --> src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x", ext_id, src_id, dst_id, cmd, index);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_src_id = QString("%1").arg(src_id, 2, 16, QLatin1Char('0'));
    str_src_id = str_src_id.toUpper();
    ui->srcEdit_out_3->setText(str_src_id);

    QString str_dst_id = QString("%1").arg(dst_id, 2, 16, QLatin1Char('0'));
    str_dst_id = str_dst_id.toUpper();
    ui->dstEdit_out_3->setText(str_dst_id);

    QString str_cmd = QString("%1").arg(cmd, 2, 16, QLatin1Char('0'));
    str_cmd = str_cmd.toUpper();
    ui->cmdEdit_out_3->setText(str_cmd);

    QString str_index = QString("%1").arg(index, 2, 16, QLatin1Char('0'));
    str_index = str_index.toUpper();
    ui->indexEdit_out_3->setText(str_index);

    buf = QString().sprintf("ext_id = 0x%x --> src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x", ext_id, src_id, dst_id, cmd, index);
    ui->historyEdit->appendPlainText(buf);
}
