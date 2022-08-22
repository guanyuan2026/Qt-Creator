#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QDebug>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("ping数据处理");
    //ui->filepathEdit->setStyleSheet("background-color:rgba(0,196,196,196)");
    ui->filepathEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->ping_sendEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->ping_ackEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->ping_timeoutEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->ack_time_maxEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->ack_time_minEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->ack_time_avgEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色
    ui->lost_rateEdit->setStyleSheet("background:lightGray");   //设置背景为浅灰色

    this->setFixedSize(width(),height()); //固定窗口为当前设计的大小尺寸
    //this->setFixedSize(910, 530);

    setAcceptDrops(true); // Widget 允许拖拽操作
    //ui->filepathEdit->setAcceptDrops(false); // textEdit拖拽取消，取消textEdit默认的拖拽方式
}

Widget::~Widget()
{
    delete ui;
}



//拖动进入事件
void Widget::dragEnterEvent(QDragEnterEvent *ev)
{
    if(ev->mimeData()->hasUrls())//是否是文件路径
    {
        ev->accept();//接收拖动进入事件
    }
    //ev->ignore();//若忽略该事件，则不会发生之后的事件，拖放到此结束
}


//拖动放下事件
void Widget::dropEvent(QDropEvent *ev)
{
    if(ev->mimeData()->hasUrls())
    {
        QList<QUrl> urls = ev->mimeData()->urls();

        //单个文件路径
        //QString fileName = urls.at(0).toLocalFile();
        //qDebug()<<fileName;

        //多个文件路径
        for(int i=0; i<urls.size(); i++)
        {
            qDebug()<<urls.at(i).toLocalFile();
        }
    }
}

void Widget::on_sel_fileBt_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,
        tr("Open File"),
         ".",
        tr("Text Files(*.txt)"));
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, tr("Read File"),
            tr("Cannot open file:\n%1").arg(path));
            return;
        }
        QTextStream in(&file);
        QString line;
        char buf[32] = {0};

        //line = in.readLine();//读取一行放到字符串里
        //while(!line.isNull()) //字符串有内容
        while(!in.atEnd())
        {
            line=in.readLine();//循环读取下行
            qDebug() << line;
           // sscanf(line,"time = %[0-9]",buf);


        }


        sscanf("20小时","%[0-9]",buf);
        qDebug()<<"num is  "<< atoi(buf);


        //ui->textEdit->setText(in.readAll());
        file.close();

    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}
