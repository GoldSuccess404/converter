/********************************************************************************
** Form generated from reading UI file 'converter_da.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTER_DA_H
#define UI_CONVERTER_DA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_converter_da
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;

    void setupUi(QWidget *converter_da)
    {
        if (converter_da->objectName().isEmpty())
            converter_da->setObjectName(QString::fromUtf8("converter_da"));
        converter_da->resize(330, 332);
        converter_da->setMinimumSize(QSize(330, 332));
        converter_da->setMaximumSize(QSize(330, 332));
        converter_da->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(converter_da);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(-10, 0, 359, 301));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"font-size: 25px;\n"
"font-family: Arial Black\n"
"}"));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(84, 35));
        comboBox->setMaximumSize(QSize(84, 35));
        comboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(135, 35));
        lineEdit->setMaximumSize(QSize(135, 35));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Nirmala UI")});
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit->setCursorPosition(0);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"font-family: Arial Black;\n"
"font-size: 25px\n"
"}"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(84, 35));
        comboBox_2->setMaximumSize(QSize(84, 35));
        comboBox_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(comboBox_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(135, 35));
        lineEdit_3->setMaximumSize(QSize(135, 35));
        lineEdit_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(120, 40));
        pushButton->setMaximumSize(QSize(100, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Nirmala UI")});
        font3.setBold(true);
        font3.setItalic(false);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background: none;\n"
"background-color: #48535d;\n"
"border: 2px solid rgb(103, 255, 230);\n"
"border-radius: 10px;\n"
"font-family: Nirmala UI;\n"
"font-size: 11;\n"
"color: white;\n"
"padding-bottom: 2px;\n"
"font-size:14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(79, 79, 79);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(29, 29, 29);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(converter_da);

        QMetaObject::connectSlotsByName(converter_da);
    } // setupUi

    void retranslateUi(QWidget *converter_da)
    {
        converter_da->setWindowTitle(QCoreApplication::translate("converter_da", "converter_da", nullptr));
        label->setText(QCoreApplication::translate("converter_da", "\320\236\321\202\320\264\320\260\320\264\320\270\321\202\320\265:", nullptr));
        label_2->setText(QCoreApplication::translate("converter_da", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\320\265:", nullptr));
        pushButton->setText(QCoreApplication::translate("converter_da", "\320\237\320\265\321\200\320\265\320\262\320\265\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class converter_da: public Ui_converter_da {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_DA_H
