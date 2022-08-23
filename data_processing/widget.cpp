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

void Widget::deal_data(QString path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Read File"),
        tr("Cannot open file:\n%1").arg(path));
        return;
    }

    ui->filepathEdit->setText(path);
    QTextStream in(&file);
    QString line;
    char buf[32] = {0};
    QString str_index;  //裁剪后的字符串
    int index = 0;
    int send_cnt = 0, ack_cnt = 0, timeout_cnt = 0;
    int max_time = 0, min_time = 0, avg_time = 0, cur_time = 0, time_cnt = 0, has_parse = 0;
    long int total_time = 0;
    float lost_rate = 0.0;

    //line = in.readLine();//读取一行放到字符串里
    //while(!line.isNull()) //字符串有内容
    while(!in.atEnd())
    {
        line = in.readLine();//循环读取下行
        qDebug() << line;

        index = line.indexOf("send = ");
        if(index >= 0)
        {
            index += + strlen("send = ");
            str_index = line.mid(index);
            //qDebug() << str_index;
            sscanf(str_index.toLatin1().data(),"%[0-9]",buf);
            send_cnt = atoi(buf);
        }

        index = line.indexOf("recv = ");
        if(index >= 0)
        {
            index += strlen("recv = ");
            str_index = line.mid(index);
            //qDebug() << str_index;
            sscanf(str_index.toLatin1().data(),"%[0-9]",buf);
            ack_cnt = atoi(buf);
        }

        index = line.indexOf("time = ");
        if(index >= 0)
        {
            time_cnt ++;
            index += strlen("time = ");
            str_index = line.mid(index);
            //qDebug() << str_index;
            sscanf(str_index.toLatin1().data(),"%[0-9]",buf);
            cur_time = atoi(buf);
            if(has_parse == 0)
            {
                has_parse = 1;
                max_time = cur_time;
                min_time = cur_time;
            }
            else {
                if(cur_time > max_time)
                {
                    max_time = cur_time;
                }
                if(cur_time < min_time)
                {
                    min_time = cur_time;
                }
            }
            total_time += cur_time;
        }
    }
    file.close();

    avg_time = total_time / time_cnt;
    qDebug()<< max_time << min_time << avg_time << time_cnt << total_time;

    timeout_cnt = send_cnt - ack_cnt;

    lost_rate = timeout_cnt / send_cnt * 100;

    ui->ack_time_maxEdit->setText(QString::number(max_time));
    ui->ack_time_minEdit->setText(QString::number(min_time));
    ui->ack_time_avgEdit->setText(QString::number(avg_time));

    ui->ping_sendEdit->setText(QString::number(send_cnt));
    ui->ping_ackEdit->setText(QString::number(ack_cnt));
    ui->ping_timeoutEdit->setText(QString::number(timeout_cnt));

    ui->lost_rateEdit->setText(QString().sprintf("%.2f", lost_rate));
}

//拖动进入事件
void Widget::dragEnterEvent(QDragEnterEvent *ev)
{
    if(ev->mimeData()->hasUrls())//是否是文件路径
    {
        ev->accept();//接收拖动进入事件
    }
    //ev->ignore();//若忽略该事件，则不会发生之后的事件，拖放到此结束

    //ev->acceptProposedAction();   //将放置动作设置为建议的动作，和accept的区别是什么？
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
        //for(int i=0; i<urls.size(); i++)
        for(int i=0; i<urls.length(); i++)  //测试和size效果一样，区别是什么？
        {
            qDebug()<<urls.at(i).toLocalFile();
        }

        deal_data(urls.at(0).toLocalFile());
    }
}

void Widget::on_sel_fileBt_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,
        tr("Open File"),
         ".",
        tr("Text Files(*.txt)"));
    if(!path.isEmpty()) {
        deal_data(path);
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}
