/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *sel_fileBt;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *filepathEdit;
    QLabel *label;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *ping_sendEdit;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ping_ackEdit;
    QLineEdit *ping_timeoutEdit;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_10;
    QLineEdit *ack_time_maxEdit;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *ack_time_minEdit;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *ack_time_avg_Edit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lost_rateEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(795, 316);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 606, 220));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sel_fileBt = new QPushButton(widget);
        sel_fileBt->setObjectName(QString::fromUtf8("sel_fileBt"));
        sel_fileBt->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(15);
        sel_fileBt->setFont(font);

        gridLayout->addWidget(sel_fileBt, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        filepathEdit = new QLineEdit(widget);
        filepathEdit->setObjectName(QString::fromUtf8("filepathEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filepathEdit->sizePolicy().hasHeightForWidth());
        filepathEdit->setSizePolicy(sizePolicy);
        filepathEdit->setMinimumSize(QSize(400, 0));
        filepathEdit->setFont(font);
        filepathEdit->setFrame(true);
        filepathEdit->setReadOnly(true);

        gridLayout->addWidget(filepathEdit, 0, 2, 1, 5);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 2, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 6, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        ping_sendEdit = new QLineEdit(widget);
        ping_sendEdit->setObjectName(QString::fromUtf8("ping_sendEdit"));
        ping_sendEdit->setMinimumSize(QSize(50, 0));
        ping_sendEdit->setMaximumSize(QSize(120, 16777215));
        ping_sendEdit->setFont(font);
        ping_sendEdit->setReadOnly(true);

        gridLayout->addWidget(ping_sendEdit, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        ping_ackEdit = new QLineEdit(widget);
        ping_ackEdit->setObjectName(QString::fromUtf8("ping_ackEdit"));
        ping_ackEdit->setMinimumSize(QSize(50, 0));
        ping_ackEdit->setMaximumSize(QSize(120, 16777215));
        ping_ackEdit->setFont(font);

        gridLayout->addWidget(ping_ackEdit, 2, 4, 1, 1);

        ping_timeoutEdit = new QLineEdit(widget);
        ping_timeoutEdit->setObjectName(QString::fromUtf8("ping_timeoutEdit"));
        ping_timeoutEdit->setMinimumSize(QSize(50, 0));
        ping_timeoutEdit->setMaximumSize(QSize(120, 16777215));
        ping_timeoutEdit->setFont(font);
        ping_timeoutEdit->setReadOnly(true);

        gridLayout->addWidget(ping_timeoutEdit, 2, 6, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 3, 2, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 3, 4, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 6, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        ack_time_maxEdit = new QLineEdit(widget);
        ack_time_maxEdit->setObjectName(QString::fromUtf8("ack_time_maxEdit"));
        ack_time_maxEdit->setMinimumSize(QSize(50, 0));
        ack_time_maxEdit->setMaximumSize(QSize(120, 16777215));
        ack_time_maxEdit->setFont(font);
        ack_time_maxEdit->setReadOnly(true);

        gridLayout->addWidget(ack_time_maxEdit, 4, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 3, 1, 1);

        ack_time_minEdit = new QLineEdit(widget);
        ack_time_minEdit->setObjectName(QString::fromUtf8("ack_time_minEdit"));
        ack_time_minEdit->setMinimumSize(QSize(50, 0));
        ack_time_minEdit->setMaximumSize(QSize(120, 16777215));
        ack_time_minEdit->setFont(font);
        ack_time_minEdit->setReadOnly(true);

        gridLayout->addWidget(ack_time_minEdit, 4, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 5, 1, 1);

        ack_time_avg_Edit = new QLineEdit(widget);
        ack_time_avg_Edit->setObjectName(QString::fromUtf8("ack_time_avg_Edit"));
        ack_time_avg_Edit->setMinimumSize(QSize(50, 0));
        ack_time_avg_Edit->setMaximumSize(QSize(120, 16777215));
        ack_time_avg_Edit->setFont(font);

        gridLayout->addWidget(ack_time_avg_Edit, 4, 6, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 5, 1, 1, 1);

        lost_rateEdit = new QLineEdit(widget);
        lost_rateEdit->setObjectName(QString::fromUtf8("lost_rateEdit"));
        lost_rateEdit->setMinimumSize(QSize(400, 0));
        lost_rateEdit->setFont(font);
        lost_rateEdit->setFrame(true);
        lost_rateEdit->setReadOnly(true);

        gridLayout->addWidget(lost_rateEdit, 5, 2, 1, 5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        sel_fileBt->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260", nullptr));
        label_7->setText(QApplication::translate("Widget", "\345\223\215\345\272\224\346\225\260", nullptr));
        label_4->setText(QApplication::translate("Widget", "\350\266\205\346\227\266\346\225\260", nullptr));
        label_8->setText(QApplication::translate("Widget", "PING\350\257\267\346\261\202", nullptr));
        ping_sendEdit->setText(QString());
        ping_ackEdit->setText(QApplication::translate("Widget", "100000", nullptr));
        ping_timeoutEdit->setText(QString());
        label_9->setText(QApplication::translate("Widget", "MAX", nullptr));
        label_5->setText(QApplication::translate("Widget", "MIN", nullptr));
        label_6->setText(QApplication::translate("Widget", "AVG", nullptr));
        label_10->setText(QApplication::translate("Widget", "\345\223\215\345\272\224\346\227\266\351\227\264", nullptr));
        ack_time_maxEdit->setText(QString());
        ack_time_minEdit->setText(QApplication::translate("Widget", "1632", nullptr));
        label_3->setText(QApplication::translate("Widget", "\344\270\242\345\214\205\347\216\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
