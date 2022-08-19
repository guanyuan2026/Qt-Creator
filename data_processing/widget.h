#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
//#include <QTextStream>    //文本文件读写
#include <QDataStream>      //二进制文件读写

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_iapBt_clicked();

    void on_appBt_clicked();

    void on_paraBt_clicked();

    void on_generateBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
