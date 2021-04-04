#include "widget.h"
#include "ui_widget.h"

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

void Widget::on_openBt_clicked()
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
        ui->textEdit->setText(in.readAll());
        file.close();

    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}

void Widget::on_saveBt_clicked()
{
    QString path = QFileDialog::getSaveFileName(this,
        tr("Open File"),
        ".",
        tr("Text Files(*.txt)"));
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, tr("Write File"),
        tr("Cannot open file:\n%1").arg(path));
        return;
    }
    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.close();
    } else {
        QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
    }
}
