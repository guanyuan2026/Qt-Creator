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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *iappathEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QLineEdit *iapsizeEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLineEdit *iapoffsizeEdit;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *apppathEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QLineEdit *appsizeEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QLineEdit *appoffsizeEdit;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *parapathEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_9;
    QLineEdit *parasizeEdit;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLineEdit *paraoffsizeEdit;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *iapBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *appBt;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *paraBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *generateBt;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(687, 312);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        iappathEdit = new QLineEdit(Widget);
        iappathEdit->setObjectName(QString::fromUtf8("iappathEdit"));
        iappathEdit->setMinimumSize(QSize(400, 0));
        iappathEdit->setFont(font);
        iappathEdit->setFrame(true);
        iappathEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(iappathEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout->addWidget(label_7);

        iapsizeEdit = new QLineEdit(Widget);
        iapsizeEdit->setObjectName(QString::fromUtf8("iapsizeEdit"));
        iapsizeEdit->setMinimumSize(QSize(150, 0));
        iapsizeEdit->setMaximumSize(QSize(120, 16777215));
        iapsizeEdit->setFont(font);
        iapsizeEdit->setReadOnly(true);

        horizontalLayout->addWidget(iapsizeEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        iapoffsizeEdit = new QLineEdit(Widget);
        iapoffsizeEdit->setObjectName(QString::fromUtf8("iapoffsizeEdit"));
        iapoffsizeEdit->setMinimumSize(QSize(150, 0));
        iapoffsizeEdit->setMaximumSize(QSize(120, 16777215));
        iapoffsizeEdit->setFont(font);
        iapoffsizeEdit->setReadOnly(true);

        horizontalLayout->addWidget(iapoffsizeEdit);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_6->addWidget(label_2);

        apppathEdit = new QLineEdit(Widget);
        apppathEdit->setObjectName(QString::fromUtf8("apppathEdit"));
        apppathEdit->setMinimumSize(QSize(400, 0));
        apppathEdit->setFont(font);
        apppathEdit->setFrame(true);
        apppathEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(apppathEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        label_8 = new QLabel(Widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_3->addWidget(label_8);

        appsizeEdit = new QLineEdit(Widget);
        appsizeEdit->setObjectName(QString::fromUtf8("appsizeEdit"));
        appsizeEdit->setMinimumSize(QSize(150, 0));
        appsizeEdit->setMaximumSize(QSize(120, 16777215));
        appsizeEdit->setFont(font);
        appsizeEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(appsizeEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        appoffsizeEdit = new QLineEdit(Widget);
        appoffsizeEdit->setObjectName(QString::fromUtf8("appoffsizeEdit"));
        appoffsizeEdit->setMinimumSize(QSize(150, 0));
        appoffsizeEdit->setMaximumSize(QSize(120, 16777215));
        appoffsizeEdit->setFont(font);

        horizontalLayout_3->addWidget(appoffsizeEdit);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_7->addWidget(label_3);

        parapathEdit = new QLineEdit(Widget);
        parapathEdit->setObjectName(QString::fromUtf8("parapathEdit"));
        parapathEdit->setMinimumSize(QSize(400, 0));
        parapathEdit->setFont(font);
        parapathEdit->setFrame(true);
        parapathEdit->setReadOnly(true);

        horizontalLayout_7->addWidget(parapathEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_4->addWidget(label_9);

        parasizeEdit = new QLineEdit(Widget);
        parasizeEdit->setObjectName(QString::fromUtf8("parasizeEdit"));
        parasizeEdit->setMinimumSize(QSize(150, 0));
        parasizeEdit->setMaximumSize(QSize(120, 16777215));
        parasizeEdit->setFont(font);
        parasizeEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(parasizeEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        paraoffsizeEdit = new QLineEdit(Widget);
        paraoffsizeEdit->setObjectName(QString::fromUtf8("paraoffsizeEdit"));
        paraoffsizeEdit->setMinimumSize(QSize(150, 0));
        paraoffsizeEdit->setMaximumSize(QSize(120, 16777215));
        paraoffsizeEdit->setFont(font);

        horizontalLayout_4->addWidget(paraoffsizeEdit);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        iapBt = new QPushButton(Widget);
        iapBt->setObjectName(QString::fromUtf8("iapBt"));
        iapBt->setMinimumSize(QSize(100, 0));
        iapBt->setFont(font);

        horizontalLayout_2->addWidget(iapBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        appBt = new QPushButton(Widget);
        appBt->setObjectName(QString::fromUtf8("appBt"));
        appBt->setMinimumSize(QSize(100, 0));
        appBt->setFont(font);

        horizontalLayout_2->addWidget(appBt);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        paraBt = new QPushButton(Widget);
        paraBt->setObjectName(QString::fromUtf8("paraBt"));
        paraBt->setMinimumSize(QSize(100, 0));
        paraBt->setFont(font);

        horizontalLayout_2->addWidget(paraBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        generateBt = new QPushButton(Widget);
        generateBt->setObjectName(QString::fromUtf8("generateBt"));
        generateBt->setMinimumSize(QSize(100, 0));
        generateBt->setFont(font);

        horizontalLayout_2->addWidget(generateBt);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        label_7->raise();
        iapsizeEdit->raise();
        appsizeEdit->raise();
        label_8->raise();
        parasizeEdit->raise();
        label_9->raise();
        apppathEdit->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "IAP", nullptr));
        label_7->setText(QApplication::translate("Widget", "IAPsize", nullptr));
        iapsizeEdit->setText(QString());
        label_4->setText(QApplication::translate("Widget", "offsize", nullptr));
        label_2->setText(QApplication::translate("Widget", "APP", nullptr));
        label_8->setText(QApplication::translate("Widget", "APPsize", nullptr));
        appsizeEdit->setText(QString());
        label_6->setText(QApplication::translate("Widget", "offsize", nullptr));
        label_3->setText(QApplication::translate("Widget", "Para", nullptr));
        label_9->setText(QApplication::translate("Widget", "PARAsize", nullptr));
        parasizeEdit->setText(QString());
        label_5->setText(QApplication::translate("Widget", "offsize", nullptr));
        iapBt->setText(QApplication::translate("Widget", "IAP", nullptr));
        appBt->setText(QApplication::translate("Widget", "APP", nullptr));
        paraBt->setText(QApplication::translate("Widget", "Para", nullptr));
        generateBt->setText(QApplication::translate("Widget", "generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
