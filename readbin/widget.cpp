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



void Widget::on_iapBt_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,
        tr("Open File"),//控件的objectName
         ".",           //对话框显示时默认打开的目录，"." 代表程序运行目录
        tr("Bin Files(*.bin)"));   //对话框的后缀名过滤器，将txt文件改为bin文件。
    qDebug("path = %s",qPrintable(path));
    qDebug("path = " + path.toLatin1());

    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::warning(this, tr("Read File"),
                tr("Cannot open file:\n%1").arg(path));
            return;
        }

        QString buf;
        QFileInfo info(file);

        buf = QString(info.absolutePath());
        buf.append("/");
        buf.append(info.baseName());    //直接获得文件名
        buf.append(".bin");
        qDebug("%s",qPrintable(buf));   //与上面的path变量相同，可直接使用path变量
        qDebug() << info.filePath();

        ui->iappathEdit->setText(buf);
        ui->iapoffsizeEdit->setText(tr("0x00000000"));  //默认偏移量
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}


void Widget::on_appBt_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,
        tr("Open File"),//控件的objectName
         ".",           //对话框显示时默认打开的目录，"." 代表程序运行目录
        tr("Text Files(*.bin)"));   //对话框的后缀名过滤器，将txt文件改为bin文件。
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::warning(this, tr("Read File"),
                tr("Cannot open file:\n%1").arg(path));
            return;
        }

        QString buf;
        QFileInfo info(file);

        buf = QString(info.absolutePath());
        buf.append("/");
        buf.append(info.baseName());    //直接获得文件名
        buf.append(".bin");
        qDebug("%s",qPrintable(buf));

        ui->apppathEdit->setText(buf);
        ui->appoffsizeEdit->setText(tr("0x00005000"));  //默认偏移量
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}


void Widget::on_paraBt_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,
        tr("Open File"),//控件的objectName
         ".",           //对话框显示时默认打开的目录，"." 代表程序运行目录
        tr("Text Files(*.bin)"));   //对话框的后缀名过滤器，将txt文件改为bin文件。
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::warning(this, tr("Read File"),
                tr("Cannot open file:\n%1").arg(path));
            return;
        }

        QString buf;
        QFileInfo info(file);

        buf = QString(info.absolutePath());
        buf.append("/");
        buf.append(info.baseName());    //直接获得文件名
        buf.append(".bin");
        qDebug("%s",qPrintable(buf));

        ui->parapathEdit->setText(buf);
        ui->paraoffsizeEdit->setText(tr("0x0001F800")); //默认偏移量
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}

void Widget::on_generateBt_clicked()
{
//    QString path = QFileDialog::getExistingDirectory(this, tr("选择文件夹"),"/");
    QString path = QFileDialog::getSaveFileName(this,
        tr("Open File"),
        ".",
        tr("Bin Files(*.bin)"));
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::warning(this, tr("Write File"),
                tr("Cannot open file:\n%1").arg(path));
            return;
        }

        QFile readfile(ui->iappathEdit->text());    //要读取的bin文件
        QFileInfo read_file_info(readfile);         //要读取的bin文件的信息
        if (!readfile.open(QIODevice::ReadOnly)) {  //只读方式打开bin文件
            QMessageBox::warning(this, tr("Read File"),
                tr("Cannot open file:\n%1").arg(ui->iappathEdit->text()));
            return;
        }
        QDataStream BinFileData(&readfile);  //将刚刚创建的 file 对象的指针传递给一个QDataStream实例 BinFileData
        char *pBuff = new char[read_file_info.size()];  //要读取bin文件的大小
        BinFileData.readRawData(pBuff,static_cast<int>(read_file_info.size()));
        qDebug() << static_cast<int>(read_file_info.size());
        QByteArray DataAllArray;
        DataAllArray = QByteArray(pBuff,static_cast<int>(read_file_info.size()));

        file.write(DataAllArray);
        readfile.close();
         file.close();
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }

    QMessageBox::information(this,"提示","成功");
}
