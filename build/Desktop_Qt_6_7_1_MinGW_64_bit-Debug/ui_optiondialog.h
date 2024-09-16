/********************************************************************************
** Form generated from reading UI file 'optiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONDIALOG_H
#define UI_OPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_optionDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *temp_lineEdit;
    QLabel *label_2;
    QLineEdit *humidity_lineEdit;
    QLabel *label_3;
    QLineEdit *pressure_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ok_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *optionDialog)
    {
        if (optionDialog->objectName().isEmpty())
            optionDialog->setObjectName("optionDialog");
        optionDialog->resize(350, 410);
        optionDialog->setMinimumSize(QSize(350, 410));
        optionDialog->setMaximumSize(QSize(350, 410));
        verticalLayout_5 = new QVBoxLayout(optionDialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(optionDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"}"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_4->addWidget(label, 0, Qt::AlignHCenter);

        temp_lineEdit = new QLineEdit(optionDialog);
        temp_lineEdit->setObjectName("temp_lineEdit");
        temp_lineEdit->setMinimumSize(QSize(100, 50));
        temp_lineEdit->setMaximumSize(QSize(100, 200));
        temp_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:#87CEFA;\n"
"border:2px solid#000000;\n"
"border-radius: 4px;\n"
"font-size: 15pt;\n"
"font-weight: bold;\n"
"padding: 5px;\n"
"}"));

        verticalLayout_4->addWidget(temp_lineEdit, 0, Qt::AlignHCenter);

        label_2 = new QLabel(optionDialog);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"}"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter);

        humidity_lineEdit = new QLineEdit(optionDialog);
        humidity_lineEdit->setObjectName("humidity_lineEdit");
        humidity_lineEdit->setMinimumSize(QSize(100, 50));
        humidity_lineEdit->setMaximumSize(QSize(100, 100));
        humidity_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:#87CEFA;\n"
"border:2px solid #000000;\n"
"border-radius: 4px;\n"
"font-size: 15pt;\n"
"font-weight: bold;\n"
"padding:5px;\n"
"}"));

        verticalLayout_4->addWidget(humidity_lineEdit, 0, Qt::AlignHCenter);

        label_3 = new QLabel(optionDialog);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"}"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_4->addWidget(label_3, 0, Qt::AlignHCenter);

        pressure_lineEdit = new QLineEdit(optionDialog);
        pressure_lineEdit->setObjectName("pressure_lineEdit");
        pressure_lineEdit->setMinimumSize(QSize(100, 50));
        pressure_lineEdit->setMaximumSize(QSize(100, 100));
        pressure_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color:#87CEFA;\n"
"border:2px solid#000000;\n"
"border-radius: 4px;\n"
"font-size: 15pt;\n"
"font-weight: bold;\n"
"padding: 5px;\n"
"}"));

        verticalLayout_4->addWidget(pressure_lineEdit, 0, Qt::AlignHCenter);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 60, -1, -1);
        ok_button = new QPushButton(optionDialog);
        ok_button->setObjectName("ok_button");
        ok_button->setMinimumSize(QSize(50, 40));
        ok_button->setMaximumSize(QSize(150, 40));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        ok_button->setFont(font1);
        ok_button->setCursor(QCursor(Qt::PointingHandCursor));
        ok_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 5px;\n"
"	border: 2px solid #000000;\n"
"	background-color: #F8F8FF;\n"
"}"));

        horizontalLayout_2->addWidget(ok_button);

        cancel_button = new QPushButton(optionDialog);
        cancel_button->setObjectName("cancel_button");
        cancel_button->setMaximumSize(QSize(150, 40));
        cancel_button->setFont(font1);
        cancel_button->setCursor(QCursor(Qt::PointingHandCursor));
        cancel_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 5px;\n"
"	border: 2px solid #000000;\n"
"	background-color: #F8F8FF;\n"
"}"));

        horizontalLayout_2->addWidget(cancel_button);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(optionDialog);

        QMetaObject::connectSlotsByName(optionDialog);
    } // setupUi

    void retranslateUi(QDialog *optionDialog)
    {
        optionDialog->setWindowTitle(QCoreApplication::translate("optionDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("optionDialog", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 (\302\260C)", nullptr));
        label_2->setText(QCoreApplication::translate("optionDialog", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("optionDialog", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265 (\320\237\320\260)", nullptr));
        ok_button->setText(QCoreApplication::translate("optionDialog", "\320\236\320\272", nullptr));
        cancel_button->setText(QCoreApplication::translate("optionDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class optionDialog: public Ui_optionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONDIALOG_H
