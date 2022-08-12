#include "widget.h"
#include "ui_widget.h"
#include <QString.h>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
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

    src_id = ui->srcEdit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    dst_id = ui->dstEdit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    cmd = ui->cmd1Edit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    index = ui->index1Edit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    ext_id = (src_id << 22) + (dst_id << 16) + (cmd << 8) + index;
    qDebug("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x, ext_id = 0x%x\n", src_id, dst_id, cmd, index, ext_id);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_ext_id = QString("%1").arg(ext_id, 8, 16, QLatin1Char('0'));
    str_ext_id = str_ext_id.toUpper();
    ui->extEdit->setText(str_ext_id);
}

void Widget::on_convertBt_5_clicked()
{
    int src_id;    //源ID
    int dst_id;   //目的ID
    int cmd;   //命令字
    int index;   //索引
    int ext_id;   //扩展帧ID
    bool status;

    src_id = ui->extEdit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    dst_id = ui->dstEdit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    cmd = ui->cmd1Edit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    index = ui->index1Edit->text().toInt(&status,16); // 表示以16进制方式读取字符串
    ext_id = (src_id << 22) + (dst_id << 16) + (cmd << 8) + index;
    qDebug("src id = 0x%x, dst id = 0x%x, cmd = 0x%x, index = 0x%x, ext_id = 0x%x\n", src_id, dst_id, cmd, index, ext_id);

    QString buf;

    //ui->appsizeEdit->setText(QString::number(info.size(),16));
    QString str_ext_id = QString("%1").arg(ext_id, 8, 16, QLatin1Char('0'));
    str_ext_id = str_ext_id.toUpper();
    ui->extEdit->setText(str_ext_id);
}
