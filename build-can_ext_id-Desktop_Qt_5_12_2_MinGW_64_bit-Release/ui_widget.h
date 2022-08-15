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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_41;
    QSpacerItem *horizontalSpacer_35;
    QSpacerItem *horizontalSpacer_34;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *dstEdit_in;
    QLineEdit *dstEdit_in_2;
    QLineEdit *dstEdit_in_3;
    QLineEdit *dstEdit_out;
    QLineEdit *dstEdit_out_2;
    QLineEdit *dstEdit_out_3;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *cmdEdit_in;
    QLineEdit *cmdEdit_in_2;
    QLineEdit *cmdEdit_in_3;
    QLineEdit *cmdEdit_out;
    QLineEdit *cmdEdit_out_2;
    QLineEdit *cmdEdit_out_3;
    QSpacerItem *horizontalSpacer_38;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLineEdit *srcEdit_in;
    QLineEdit *srcEdit_in_2;
    QLineEdit *srcEdit_in_3;
    QLineEdit *srcEdit_out;
    QLineEdit *srcEdit_out_2;
    QLineEdit *srcEdit_out_3;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_27;
    QSpacerItem *horizontalSpacer_32;
    QSpacerItem *horizontalSpacer_42;
    QSpacerItem *horizontalSpacer_31;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_23;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QPushButton *convertBt;
    QPushButton *convertBt_2;
    QPushButton *convertBt_3;
    QPushButton *convertBt_5;
    QPushButton *convertBt_4;
    QPushButton *convertBt_6;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_39;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_40;
    QSpacerItem *horizontalSpacer_36;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_19;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLineEdit *extEdit_out;
    QLineEdit *extEdit_out_2;
    QLineEdit *extEdit_out_3;
    QLineEdit *extEdit_in;
    QLineEdit *extEdit_in_2;
    QLineEdit *extEdit_in_3;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_26;
    QSpacerItem *horizontalSpacer_33;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_37;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_30;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QLineEdit *indexEdit_in;
    QLineEdit *indexEdit_in_2;
    QLineEdit *indexEdit_in_3;
    QLineEdit *indexEdit_out;
    QLineEdit *indexEdit_out_2;
    QLineEdit *indexEdit_out_3;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *horizontalSpacer_17;
    QPlainTextEdit *historyEdit;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(904, 530);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 16, 877, 298));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_41 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_41, 5, 5, 1, 1);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_35, 2, 10, 1, 2);

        horizontalSpacer_34 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_34, 1, 12, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(15);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        dstEdit_in = new QLineEdit(layoutWidget);
        dstEdit_in->setObjectName(QString::fromUtf8("dstEdit_in"));
        dstEdit_in->setMinimumSize(QSize(90, 0));
        dstEdit_in->setMaximumSize(QSize(90, 16777215));
        dstEdit_in->setFont(font);
        dstEdit_in->setMaxLength(2);
        dstEdit_in->setReadOnly(false);

        verticalLayout_2->addWidget(dstEdit_in);

        dstEdit_in_2 = new QLineEdit(layoutWidget);
        dstEdit_in_2->setObjectName(QString::fromUtf8("dstEdit_in_2"));
        dstEdit_in_2->setMinimumSize(QSize(90, 0));
        dstEdit_in_2->setMaximumSize(QSize(90, 16777215));
        dstEdit_in_2->setFont(font);
        dstEdit_in_2->setMaxLength(2);
        dstEdit_in_2->setReadOnly(false);

        verticalLayout_2->addWidget(dstEdit_in_2);

        dstEdit_in_3 = new QLineEdit(layoutWidget);
        dstEdit_in_3->setObjectName(QString::fromUtf8("dstEdit_in_3"));
        dstEdit_in_3->setMinimumSize(QSize(90, 0));
        dstEdit_in_3->setMaximumSize(QSize(90, 16777215));
        dstEdit_in_3->setFont(font);
        dstEdit_in_3->setMaxLength(2);
        dstEdit_in_3->setReadOnly(false);

        verticalLayout_2->addWidget(dstEdit_in_3);

        dstEdit_out = new QLineEdit(layoutWidget);
        dstEdit_out->setObjectName(QString::fromUtf8("dstEdit_out"));
        dstEdit_out->setMinimumSize(QSize(90, 0));
        dstEdit_out->setMaximumSize(QSize(90, 16777215));
        dstEdit_out->setFont(font);
        dstEdit_out->setMaxLength(2);
        dstEdit_out->setReadOnly(true);

        verticalLayout_2->addWidget(dstEdit_out);

        dstEdit_out_2 = new QLineEdit(layoutWidget);
        dstEdit_out_2->setObjectName(QString::fromUtf8("dstEdit_out_2"));
        dstEdit_out_2->setMinimumSize(QSize(90, 0));
        dstEdit_out_2->setMaximumSize(QSize(90, 16777215));
        dstEdit_out_2->setFont(font);
        dstEdit_out_2->setMaxLength(2);
        dstEdit_out_2->setReadOnly(true);

        verticalLayout_2->addWidget(dstEdit_out_2);

        dstEdit_out_3 = new QLineEdit(layoutWidget);
        dstEdit_out_3->setObjectName(QString::fromUtf8("dstEdit_out_3"));
        dstEdit_out_3->setMinimumSize(QSize(90, 0));
        dstEdit_out_3->setMaximumSize(QSize(90, 16777215));
        dstEdit_out_3->setFont(font);
        dstEdit_out_3->setMaxLength(2);
        dstEdit_out_3->setReadOnly(true);

        verticalLayout_2->addWidget(dstEdit_out_3);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 6, 1);

        horizontalSpacer_7 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        cmdEdit_in = new QLineEdit(layoutWidget);
        cmdEdit_in->setObjectName(QString::fromUtf8("cmdEdit_in"));
        cmdEdit_in->setMinimumSize(QSize(90, 0));
        cmdEdit_in->setMaximumSize(QSize(90, 16777215));
        cmdEdit_in->setFont(font);
        cmdEdit_in->setMaxLength(2);
        cmdEdit_in->setReadOnly(false);

        verticalLayout_3->addWidget(cmdEdit_in);

        cmdEdit_in_2 = new QLineEdit(layoutWidget);
        cmdEdit_in_2->setObjectName(QString::fromUtf8("cmdEdit_in_2"));
        cmdEdit_in_2->setMinimumSize(QSize(90, 0));
        cmdEdit_in_2->setMaximumSize(QSize(90, 16777215));
        cmdEdit_in_2->setFont(font);
        cmdEdit_in_2->setMaxLength(2);
        cmdEdit_in_2->setReadOnly(false);

        verticalLayout_3->addWidget(cmdEdit_in_2);

        cmdEdit_in_3 = new QLineEdit(layoutWidget);
        cmdEdit_in_3->setObjectName(QString::fromUtf8("cmdEdit_in_3"));
        cmdEdit_in_3->setMinimumSize(QSize(90, 0));
        cmdEdit_in_3->setMaximumSize(QSize(90, 16777215));
        cmdEdit_in_3->setFont(font);
        cmdEdit_in_3->setMaxLength(2);
        cmdEdit_in_3->setReadOnly(false);

        verticalLayout_3->addWidget(cmdEdit_in_3);

        cmdEdit_out = new QLineEdit(layoutWidget);
        cmdEdit_out->setObjectName(QString::fromUtf8("cmdEdit_out"));
        cmdEdit_out->setMinimumSize(QSize(90, 0));
        cmdEdit_out->setMaximumSize(QSize(90, 16777215));
        cmdEdit_out->setFont(font);
        cmdEdit_out->setMaxLength(2);
        cmdEdit_out->setReadOnly(true);

        verticalLayout_3->addWidget(cmdEdit_out);

        cmdEdit_out_2 = new QLineEdit(layoutWidget);
        cmdEdit_out_2->setObjectName(QString::fromUtf8("cmdEdit_out_2"));
        cmdEdit_out_2->setMinimumSize(QSize(90, 0));
        cmdEdit_out_2->setMaximumSize(QSize(90, 16777215));
        cmdEdit_out_2->setFont(font);
        cmdEdit_out_2->setMaxLength(2);
        cmdEdit_out_2->setReadOnly(true);

        verticalLayout_3->addWidget(cmdEdit_out_2);

        cmdEdit_out_3 = new QLineEdit(layoutWidget);
        cmdEdit_out_3->setObjectName(QString::fromUtf8("cmdEdit_out_3"));
        cmdEdit_out_3->setMinimumSize(QSize(90, 0));
        cmdEdit_out_3->setMaximumSize(QSize(90, 16777215));
        cmdEdit_out_3->setFont(font);
        cmdEdit_out_3->setMaxLength(2);
        cmdEdit_out_3->setReadOnly(true);

        verticalLayout_3->addWidget(cmdEdit_out_3);


        gridLayout->addLayout(verticalLayout_3, 0, 4, 6, 1);

        horizontalSpacer_38 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_38, 4, 12, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::AutoText);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        srcEdit_in = new QLineEdit(layoutWidget);
        srcEdit_in->setObjectName(QString::fromUtf8("srcEdit_in"));
        srcEdit_in->setMinimumSize(QSize(90, 0));
        srcEdit_in->setMaximumSize(QSize(90, 16777215));
        srcEdit_in->setFont(font);
        srcEdit_in->setMaxLength(2);
        srcEdit_in->setReadOnly(false);

        verticalLayout->addWidget(srcEdit_in);

        srcEdit_in_2 = new QLineEdit(layoutWidget);
        srcEdit_in_2->setObjectName(QString::fromUtf8("srcEdit_in_2"));
        srcEdit_in_2->setMinimumSize(QSize(90, 0));
        srcEdit_in_2->setMaximumSize(QSize(90, 16777215));
        srcEdit_in_2->setFont(font);
        srcEdit_in_2->setMaxLength(2);
        srcEdit_in_2->setReadOnly(false);

        verticalLayout->addWidget(srcEdit_in_2);

        srcEdit_in_3 = new QLineEdit(layoutWidget);
        srcEdit_in_3->setObjectName(QString::fromUtf8("srcEdit_in_3"));
        srcEdit_in_3->setMinimumSize(QSize(90, 0));
        srcEdit_in_3->setMaximumSize(QSize(90, 16777215));
        srcEdit_in_3->setFont(font);
        srcEdit_in_3->setMaxLength(2);
        srcEdit_in_3->setReadOnly(false);

        verticalLayout->addWidget(srcEdit_in_3);

        srcEdit_out = new QLineEdit(layoutWidget);
        srcEdit_out->setObjectName(QString::fromUtf8("srcEdit_out"));
        srcEdit_out->setMinimumSize(QSize(90, 0));
        srcEdit_out->setMaximumSize(QSize(90, 16777215));
        srcEdit_out->setFont(font);
        srcEdit_out->setMaxLength(2);
        srcEdit_out->setReadOnly(true);

        verticalLayout->addWidget(srcEdit_out);

        srcEdit_out_2 = new QLineEdit(layoutWidget);
        srcEdit_out_2->setObjectName(QString::fromUtf8("srcEdit_out_2"));
        srcEdit_out_2->setMinimumSize(QSize(90, 0));
        srcEdit_out_2->setMaximumSize(QSize(90, 16777215));
        srcEdit_out_2->setFont(font);
        srcEdit_out_2->setMaxLength(2);
        srcEdit_out_2->setReadOnly(true);

        verticalLayout->addWidget(srcEdit_out_2);

        srcEdit_out_3 = new QLineEdit(layoutWidget);
        srcEdit_out_3->setObjectName(QString::fromUtf8("srcEdit_out_3"));
        srcEdit_out_3->setMinimumSize(QSize(90, 0));
        srcEdit_out_3->setMaximumSize(QSize(90, 16777215));
        srcEdit_out_3->setFont(font);
        srcEdit_out_3->setMaxLength(2);
        srcEdit_out_3->setReadOnly(true);

        verticalLayout->addWidget(srcEdit_out_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 6, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_21, 1, 7, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_27, 3, 7, 1, 1);

        horizontalSpacer_32 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_32, 5, 8, 1, 1);

        horizontalSpacer_42 = new QSpacerItem(13, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_42, 1, 3, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_31, 5, 7, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(13, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 4, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 10, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 8, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(13, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 3, 3, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(36, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_23, 3, 10, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_6->addWidget(label_2);

        convertBt = new QPushButton(layoutWidget);
        convertBt->setObjectName(QString::fromUtf8("convertBt"));
        convertBt->setMinimumSize(QSize(100, 0));
        convertBt->setFont(font);

        verticalLayout_6->addWidget(convertBt);

        convertBt_2 = new QPushButton(layoutWidget);
        convertBt_2->setObjectName(QString::fromUtf8("convertBt_2"));
        convertBt_2->setMinimumSize(QSize(100, 0));
        convertBt_2->setFont(font);

        verticalLayout_6->addWidget(convertBt_2);

        convertBt_3 = new QPushButton(layoutWidget);
        convertBt_3->setObjectName(QString::fromUtf8("convertBt_3"));
        convertBt_3->setMinimumSize(QSize(100, 0));
        convertBt_3->setFont(font);

        verticalLayout_6->addWidget(convertBt_3);

        convertBt_5 = new QPushButton(layoutWidget);
        convertBt_5->setObjectName(QString::fromUtf8("convertBt_5"));
        convertBt_5->setMinimumSize(QSize(100, 0));
        convertBt_5->setFont(font);

        verticalLayout_6->addWidget(convertBt_5);

        convertBt_4 = new QPushButton(layoutWidget);
        convertBt_4->setObjectName(QString::fromUtf8("convertBt_4"));
        convertBt_4->setMinimumSize(QSize(100, 0));
        convertBt_4->setFont(font);

        verticalLayout_6->addWidget(convertBt_4);

        convertBt_6 = new QPushButton(layoutWidget);
        convertBt_6->setObjectName(QString::fromUtf8("convertBt_6"));
        convertBt_6->setMinimumSize(QSize(100, 0));
        convertBt_6->setFont(font);

        verticalLayout_6->addWidget(convertBt_6);


        gridLayout->addLayout(verticalLayout_6, 0, 9, 6, 1);

        horizontalSpacer_10 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 5, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 4, 1, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_25, 2, 7, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(13, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 2, 3, 1, 1);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_39, 5, 10, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 0, 7, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_40, 5, 12, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_36, 2, 12, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 2, 5, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(13, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 5, 3, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_22, 1, 8, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_24, 3, 11, 1, 2);

        horizontalSpacer_19 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 3, 5, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        extEdit_out = new QLineEdit(layoutWidget);
        extEdit_out->setObjectName(QString::fromUtf8("extEdit_out"));
        extEdit_out->setMinimumSize(QSize(120, 0));
        extEdit_out->setMaximumSize(QSize(120, 16777215));
        extEdit_out->setFont(font);
        extEdit_out->setMaxLength(8);
        extEdit_out->setFrame(true);
        extEdit_out->setEchoMode(QLineEdit::Normal);
        extEdit_out->setReadOnly(true);
        extEdit_out->setCursorMoveStyle(Qt::LogicalMoveStyle);

        verticalLayout_5->addWidget(extEdit_out);

        extEdit_out_2 = new QLineEdit(layoutWidget);
        extEdit_out_2->setObjectName(QString::fromUtf8("extEdit_out_2"));
        extEdit_out_2->setMinimumSize(QSize(120, 0));
        extEdit_out_2->setMaximumSize(QSize(120, 16777215));
        extEdit_out_2->setFont(font);
        extEdit_out_2->setMaxLength(8);
        extEdit_out_2->setFrame(true);
        extEdit_out_2->setReadOnly(true);

        verticalLayout_5->addWidget(extEdit_out_2);

        extEdit_out_3 = new QLineEdit(layoutWidget);
        extEdit_out_3->setObjectName(QString::fromUtf8("extEdit_out_3"));
        extEdit_out_3->setMinimumSize(QSize(120, 0));
        extEdit_out_3->setMaximumSize(QSize(120, 16777215));
        extEdit_out_3->setFont(font);
        extEdit_out_3->setMaxLength(8);
        extEdit_out_3->setFrame(true);
        extEdit_out_3->setReadOnly(true);

        verticalLayout_5->addWidget(extEdit_out_3);

        extEdit_in = new QLineEdit(layoutWidget);
        extEdit_in->setObjectName(QString::fromUtf8("extEdit_in"));
        extEdit_in->setMinimumSize(QSize(120, 0));
        extEdit_in->setMaximumSize(QSize(120, 16777215));
        extEdit_in->setFont(font);
        extEdit_in->setMaxLength(8);
        extEdit_in->setFrame(true);
        extEdit_in->setReadOnly(false);

        verticalLayout_5->addWidget(extEdit_in);

        extEdit_in_2 = new QLineEdit(layoutWidget);
        extEdit_in_2->setObjectName(QString::fromUtf8("extEdit_in_2"));
        extEdit_in_2->setMinimumSize(QSize(120, 0));
        extEdit_in_2->setMaximumSize(QSize(120, 16777215));
        extEdit_in_2->setFont(font);
        extEdit_in_2->setMaxLength(8);
        extEdit_in_2->setFrame(true);
        extEdit_in_2->setReadOnly(false);

        verticalLayout_5->addWidget(extEdit_in_2);

        extEdit_in_3 = new QLineEdit(layoutWidget);
        extEdit_in_3->setObjectName(QString::fromUtf8("extEdit_in_3"));
        extEdit_in_3->setMinimumSize(QSize(120, 0));
        extEdit_in_3->setMaximumSize(QSize(120, 16777215));
        extEdit_in_3->setFont(font);
        extEdit_in_3->setMaxLength(8);
        extEdit_in_3->setFrame(true);
        extEdit_in_3->setReadOnly(false);

        verticalLayout_5->addWidget(extEdit_in_3);


        gridLayout->addLayout(verticalLayout_5, 0, 13, 6, 1);

        horizontalSpacer_28 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_28, 3, 8, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_20, 4, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 1, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_26, 2, 8, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_33, 1, 10, 1, 2);

        horizontalSpacer = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 41, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_37, 4, 10, 1, 2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 12, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_30, 4, 8, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_10);

        indexEdit_in = new QLineEdit(layoutWidget);
        indexEdit_in->setObjectName(QString::fromUtf8("indexEdit_in"));
        indexEdit_in->setMinimumSize(QSize(90, 0));
        indexEdit_in->setMaximumSize(QSize(90, 16777215));
        indexEdit_in->setFont(font);
        indexEdit_in->setMaxLength(2);
        indexEdit_in->setReadOnly(false);

        verticalLayout_4->addWidget(indexEdit_in);

        indexEdit_in_2 = new QLineEdit(layoutWidget);
        indexEdit_in_2->setObjectName(QString::fromUtf8("indexEdit_in_2"));
        indexEdit_in_2->setMinimumSize(QSize(90, 0));
        indexEdit_in_2->setMaximumSize(QSize(90, 16777215));
        indexEdit_in_2->setFont(font);
        indexEdit_in_2->setMaxLength(2);
        indexEdit_in_2->setReadOnly(false);

        verticalLayout_4->addWidget(indexEdit_in_2);

        indexEdit_in_3 = new QLineEdit(layoutWidget);
        indexEdit_in_3->setObjectName(QString::fromUtf8("indexEdit_in_3"));
        indexEdit_in_3->setMinimumSize(QSize(90, 0));
        indexEdit_in_3->setMaximumSize(QSize(90, 16777215));
        indexEdit_in_3->setFont(font);
        indexEdit_in_3->setMaxLength(2);
        indexEdit_in_3->setReadOnly(false);

        verticalLayout_4->addWidget(indexEdit_in_3);

        indexEdit_out = new QLineEdit(layoutWidget);
        indexEdit_out->setObjectName(QString::fromUtf8("indexEdit_out"));
        indexEdit_out->setMinimumSize(QSize(90, 0));
        indexEdit_out->setMaximumSize(QSize(90, 16777215));
        indexEdit_out->setFont(font);
        indexEdit_out->setMaxLength(2);
        indexEdit_out->setReadOnly(true);

        verticalLayout_4->addWidget(indexEdit_out);

        indexEdit_out_2 = new QLineEdit(layoutWidget);
        indexEdit_out_2->setObjectName(QString::fromUtf8("indexEdit_out_2"));
        indexEdit_out_2->setMinimumSize(QSize(90, 0));
        indexEdit_out_2->setMaximumSize(QSize(90, 16777215));
        indexEdit_out_2->setFont(font);
        indexEdit_out_2->setMaxLength(2);
        indexEdit_out_2->setReadOnly(true);

        verticalLayout_4->addWidget(indexEdit_out_2);

        indexEdit_out_3 = new QLineEdit(layoutWidget);
        indexEdit_out_3->setObjectName(QString::fromUtf8("indexEdit_out_3"));
        indexEdit_out_3->setMinimumSize(QSize(90, 0));
        indexEdit_out_3->setMaximumSize(QSize(90, 16777215));
        indexEdit_out_3->setFont(font);
        indexEdit_out_3->setMaxLength(2);
        indexEdit_out_3->setReadOnly(true);

        verticalLayout_4->addWidget(indexEdit_out_3);


        gridLayout->addLayout(verticalLayout_4, 0, 6, 6, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_29, 4, 7, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 1, 5, 1, 1);

        historyEdit = new QPlainTextEdit(Widget);
        historyEdit->setObjectName(QString::fromUtf8("historyEdit"));
        historyEdit->setGeometry(QRect(10, 366, 881, 151));
        QFont font1;
        font1.setPointSize(12);
        historyEdit->setFont(font1);
        historyEdit->setReadOnly(true);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 340, 91, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setFrameShape(QFrame::NoFrame);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_4->setText(QApplication::translate("Widget", "[21:16]\n"
"dst_id", nullptr));
        dstEdit_in->setText(QString());
        dstEdit_in->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        dstEdit_in_2->setText(QString());
        dstEdit_in_2->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        dstEdit_in_3->setText(QString());
        dstEdit_in_3->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        dstEdit_out->setText(QString());
        dstEdit_out_2->setText(QString());
        dstEdit_out_3->setText(QString());
        label_8->setText(QApplication::translate("Widget", "[15:8]\n"
"cmd", nullptr));
        cmdEdit_in->setText(QString());
        cmdEdit_in->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        cmdEdit_in_2->setText(QString());
        cmdEdit_in_2->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        cmdEdit_in_3->setText(QString());
        cmdEdit_in_3->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        cmdEdit_out->setText(QString());
        cmdEdit_out_2->setText(QString());
        cmdEdit_out_3->setText(QString());
        label_7->setText(QApplication::translate("Widget", "[27:22]\n"
"src_id", nullptr));
        srcEdit_in->setText(QString());
        srcEdit_in->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        srcEdit_in_2->setText(QString());
        srcEdit_in_2->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        srcEdit_in_3->setText(QString());
        srcEdit_in_3->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        srcEdit_out->setText(QString());
        srcEdit_out_2->setText(QString());
        srcEdit_out_3->setText(QString());
        label_2->setText(QApplication::translate("Widget", "convert", nullptr));
        convertBt->setText(QApplication::translate("Widget", "--\343\200\213", nullptr));
        convertBt_2->setText(QApplication::translate("Widget", "--\343\200\213", nullptr));
        convertBt_3->setText(QApplication::translate("Widget", "--\343\200\213", nullptr));
        convertBt_5->setText(QApplication::translate("Widget", "\343\200\212--", nullptr));
        convertBt_4->setText(QApplication::translate("Widget", "\343\200\212--", nullptr));
        convertBt_6->setText(QApplication::translate("Widget", "\343\200\212--", nullptr));
        label->setText(QApplication::translate("Widget", "[28:0]\n"
"ext_id", nullptr));
        extEdit_out->setText(QString());
        extEdit_in->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        extEdit_in_2->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        extEdit_in_3->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label_10->setText(QApplication::translate("Widget", "[7:0]\n"
"index", nullptr));
        indexEdit_in->setText(QString());
        indexEdit_in->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        indexEdit_in_2->setText(QString());
        indexEdit_in_2->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        indexEdit_in_3->setText(QString());
        indexEdit_in_3->setPlaceholderText(QApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        indexEdit_out->setText(QString());
        indexEdit_out_2->setText(QString());
        indexEdit_out_3->setText(QString());
        label_3->setText(QApplication::translate("Widget", "history", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
