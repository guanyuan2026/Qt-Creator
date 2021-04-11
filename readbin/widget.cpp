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
        ui->appoffsizeEdit->setText(tr("0x00003000"));  //默认偏移量
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
        ui->paraoffsizeEdit->setText(tr("0x0001E800")); //默认偏移量
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
        char *pBuff = new char[120*1024];    //修改为120K大小，以便读取APP.bin时复用。修改为动态分配？
        BinFileData.readRawData(pBuff,static_cast<int>(read_file_info.size()));//要读取bin文件的大小
        qDebug() << "IAP.bin size is " << static_cast<int>(read_file_info.size());    //打印文件长度
        QByteArray DataAllArray;
        DataAllArray = QByteArray(pBuff,static_cast<int>(read_file_info.size()));
        file.write(DataAllArray);
        readfile.close();

        int offsize;    //获取偏移量
        int fillsize;   //填充数据的长度
        bool status;
        offsize = ui->appoffsizeEdit->text().toInt(&status,16); // 表示以16进制方式读取字符串
        fillsize = offsize - read_file_info.size();
        qDebug("app offsize = %d", offsize);
        char *pnouseBuff = new char[100*1024];    //和上面一样，直接分配一个大的定长缓存，以便两次填充无用数据时复用。
        memset(pnouseBuff, 0, fillsize);
                //注意此处不能使用sizeof（pnouseBuff）,pnouseBuff是一个指针，sizeof为4
        qDebug() << "the size of iap end to app start is " << fillsize;
        DataAllArray = QByteArray(pnouseBuff, fillsize);
        file.write(DataAllArray);

        readfile.setFileName(ui->apppathEdit->text());  //设置文件名
        read_file_info.setFile(readfile);   //注意这里，虽然变量名称一样，但仍要重新设置才能更新文件信息
        if (!readfile.open(QIODevice::ReadOnly)) {  //只读方式打开bin文件
            QMessageBox::warning(this, tr("Read File"),
                tr("Cannot open file:\n%1").arg(ui->iappathEdit->text()));
            return;
        }
        BinFileData.readRawData(pBuff,static_cast<int>(read_file_info.size()));
        qDebug() << "APP.bin size is " << static_cast<int>(read_file_info.size());    //打印文件长度
        DataAllArray = QByteArray(pBuff,static_cast<int>(read_file_info.size()));
        file.write(DataAllArray);
        readfile.close();

        offsize = ui->paraoffsizeEdit->text().toInt(&status,16); // 表示以16进制方式读取字符串
        qDebug("para offsize = %d", offsize);
        fillsize = offsize - ui->appoffsizeEdit->text().toInt(&status,16) - read_file_info.size();
        memset(pnouseBuff, 0xFF, fillsize);
                //注意此处不能使用sizeof（pnouseBuff）,pnouseBuff是一个指针，sizeof为4
        qDebug() << "the size of app end to para start is " << fillsize;
        DataAllArray = QByteArray(pnouseBuff, fillsize);
        file.write(DataAllArray);

        readfile.setFileName(ui->parapathEdit->text()); //设置文件名
        read_file_info.setFile(readfile);   //注意这里，虽然变量名称一样，但仍要重新设置才能更新文件信息
        if (!readfile.open(QIODevice::ReadOnly)) {  //只读方式打开bin文件
            QMessageBox::warning(this, tr("Read File"),
                tr("Cannot open file:\n%1").arg(ui->parapathEdit->text()));
            return;
        }
        BinFileData.readRawData(pBuff,static_cast<int>(read_file_info.size()));
        qDebug() << "PARA.bin size is " << static_cast<int>(read_file_info.size());    //打印文件长度
        DataAllArray = QByteArray(pBuff,static_cast<int>(read_file_info.size()));
        file.write(DataAllArray);
        readfile.close();

        file.close();
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }

    QMessageBox::information(this,"提示","成功");
}
