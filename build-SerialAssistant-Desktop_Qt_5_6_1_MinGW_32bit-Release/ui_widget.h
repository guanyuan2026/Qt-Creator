/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPlainTextEdit *recvEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *serialCb;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *baundrateCb;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *dateCb;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *stopCb;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *checkCb;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *openBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *clearBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(700, 450);
        recvEdit = new QPlainTextEdit(Widget);
        recvEdit->setObjectName(QStringLiteral("recvEdit"));
        recvEdit->setGeometry(QRect(20, 20, 661, 211));
        recvEdit->setReadOnly(true);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 240, 151, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        serialCb = new QComboBox(widget);
        serialCb->setObjectName(QStringLiteral("serialCb"));

        horizontalLayout->addWidget(serialCb);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        baundrateCb = new QComboBox(widget);
        baundrateCb->setObjectName(QStringLiteral("baundrateCb"));

        horizontalLayout_2->addWidget(baundrateCb);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dateCb = new QComboBox(widget);
        dateCb->setObjectName(QStringLiteral("dateCb"));

        horizontalLayout_3->addWidget(dateCb);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        stopCb = new QComboBox(widget);
        stopCb->setObjectName(QStringLiteral("stopCb"));

        horizontalLayout_4->addWidget(stopCb);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        checkCb = new QComboBox(widget);
        checkCb->setObjectName(QStringLiteral("checkCb"));

        horizontalLayout_5->addWidget(checkCb);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_5);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(180, 240, 501, 181));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 80));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 30, 371, 31));
        QFont font1;
        font1.setPointSize(27);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(groupBox);

        sendEdit = new QLineEdit(widget1);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));

        verticalLayout_2->addWidget(sendEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        openBt = new QPushButton(widget1);
        openBt->setObjectName(QStringLiteral("openBt"));

        horizontalLayout_6->addWidget(openBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        closeBt = new QPushButton(widget1);
        closeBt->setObjectName(QStringLiteral("closeBt"));

        horizontalLayout_6->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        sendBt = new QPushButton(widget1);
        sendBt->setObjectName(QStringLiteral("sendBt"));

        horizontalLayout_6->addWidget(sendBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        clearBt = new QPushButton(widget1);
        clearBt->setObjectName(QStringLiteral("clearBt"));

        horizontalLayout_6->addWidget(clearBt);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(Widget);

        baundrateCb->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", 0));
        baundrateCb->clear();
        baundrateCb->insertItems(0, QStringList()
         << QApplication::translate("Widget", "115200", 0)
         << QApplication::translate("Widget", "9600", 0)
        );
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", 0));
        dateCb->clear();
        dateCb->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", 0)
        );
        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", 0));
        stopCb->clear();
        stopCb->insertItems(0, QStringList()
         << QApplication::translate("Widget", "1", 0)
        );
        label_4->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", 0));
        checkCb->clear();
        checkCb->insertItems(0, QStringList()
         << QApplication::translate("Widget", "NONE", 0)
        );
        label_5->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", 0));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("Widget", "\350\207\252\345\210\266\344\270\262\345\217\243\345\212\251\346\211\213", 0));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", 0));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", 0));
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", 0));
        clearBt->setText(QApplication::translate("Widget", "\346\270\205\347\251\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
