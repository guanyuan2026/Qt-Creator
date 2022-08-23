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
    void deal_data(QString filepath);

protected:
    void dragEnterEvent(QDragEnterEvent* ev) override;
    void dropEvent(QDropEvent* ev) override;

private slots:
    void on_sel_fileBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
