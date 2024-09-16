/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *conderButton1;
    QPushButton *conderButton2;
    QPushButton *conderButton3;
    QTabWidget *qTabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_41;
    QLabel *labelDegree1;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTemp1;
    QLabel *labelHumidity1;
    QLabel *labelPressure1;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_42;
    QLabel *labelDegree2;
    QLabel *label_31;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelTemp2;
    QLabel *labelHumidity2;
    QLabel *labelPressure2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QLabel *labelDegree3;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QHBoxLayout *horizontalLayout_14;
    QLabel *labelTemp3;
    QLabel *labelHumidity3;
    QLabel *labelPressure3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *minusDirection;
    QLabel *labelDegree;
    QPushButton *plusDirection;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *minus;
    QPushButton *plus;
    QLabel *label_temp;
    QComboBox *comboBoxTemp;
    QLabel *temp_label;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QLabel *humidity_label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QComboBox *comboBoxPressure;
    QLabel *pressure_label;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_17;
    QPushButton *power_button;
    QSpacerItem *verticalSpacer_4;
    QPushButton *option_button;
    QSpacerItem *verticalSpacer_3;
    QPushButton *darkTheme_button;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 768);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1024, 768));
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"	background-color:#DCDCDC;	\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(10, 5, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        conderButton1 = new QPushButton(centralwidget);
        conderButton1->setObjectName("conderButton1");
        conderButton1->setCursor(QCursor(Qt::PointingHandCursor));
        conderButton1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:3px;\n"
"	border: 2px solid #000000;\n"
"	background-color: #ffa2a2;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #ff8787;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/power_162095.png"), QSize(), QIcon::Normal, QIcon::Off);
        conderButton1->setIcon(icon);
        conderButton1->setIconSize(QSize(35, 50));

        horizontalLayout_27->addWidget(conderButton1);

        conderButton2 = new QPushButton(centralwidget);
        conderButton2->setObjectName("conderButton2");
        conderButton2->setCursor(QCursor(Qt::PointingHandCursor));
        conderButton2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:3px;\n"
"	border: 2px solid #000000;\n"
"	background-color: #9bf4e4;\n"
"}"));
        conderButton2->setIcon(icon);
        conderButton2->setIconSize(QSize(35, 50));

        horizontalLayout_27->addWidget(conderButton2);

        conderButton3 = new QPushButton(centralwidget);
        conderButton3->setObjectName("conderButton3");
        conderButton3->setCursor(QCursor(Qt::PointingHandCursor));
        conderButton3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:3px;\n"
"	border: 2px solid #000000;\n"
"	background-color: #cd9bf4;\n"
"}"));
        conderButton3->setIcon(icon);
        conderButton3->setIconSize(QSize(35, 50));

        horizontalLayout_27->addWidget(conderButton3);


        verticalLayout->addLayout(horizontalLayout_27);

        qTabWidget = new QTabWidget(centralwidget);
        qTabWidget->setObjectName("qTabWidget");
        qTabWidget->setMinimumSize(QSize(200, 200));
        qTabWidget->setMaximumSize(QSize(500, 500));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        qTabWidget->setFont(font);
        qTabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"	border-radius:3px;\n"
"	border: 2px solid #C2C7CB; \n"
"}	\n"
"QTabBar::tab {\n"
"	border-radius: 2px;\n"
" 	border: 1px solid #C2C7CB;\n"
"   	background-color: #f7f7f7; \n"
"	padding: 10px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"     background-color: #e0e0e0; \n"
"}\n"
" QTabWidget::tab-bar {\n"
"       alignment: center; \n"
"}"));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tab_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_41 = new QLabel(tab_3);
        label_41->setObjectName("label_41");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_41->setFont(font1);
        label_41->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_41);

        labelDegree1 = new QLabel(tab_3);
        labelDegree1->setObjectName("labelDegree1");
        labelDegree1->setEnabled(true);
        labelDegree1->setMinimumSize(QSize(100, 0));
        labelDegree1->setMaximumSize(QSize(100, 50));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        labelDegree1->setFont(font2);
        labelDegree1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelDegree1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelDegree1, 0, Qt::AlignHCenter);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(200, 200));
        label_2->setMaximumSize(QSize(200, 200));
        QFont font3;
        font3.setPointSize(9);
        label_2->setFont(font3);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/img/conder.png")));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(tab_3);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);

        horizontalLayout_7->addWidget(label_14, 0, Qt::AlignHCenter);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);

        horizontalLayout_7->addWidget(label_13, 0, Qt::AlignHCenter);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        horizontalLayout_7->addWidget(label_12, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelTemp1 = new QLabel(tab_3);
        labelTemp1->setObjectName("labelTemp1");
        labelTemp1->setEnabled(true);
        labelTemp1->setFont(font2);
        labelTemp1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelTemp1->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelTemp1);

        labelHumidity1 = new QLabel(tab_3);
        labelHumidity1->setObjectName("labelHumidity1");
        labelHumidity1->setFont(font2);
        labelHumidity1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelHumidity1->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelHumidity1);

        labelPressure1 = new QLabel(tab_3);
        labelPressure1->setObjectName("labelPressure1");
        labelPressure1->setFont(font2);
        labelPressure1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelPressure1->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelPressure1);


        verticalLayout_2->addLayout(horizontalLayout_6);

        qTabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tab_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_42 = new QLabel(tab_4);
        label_42->setObjectName("label_42");
        label_42->setFont(font1);
        label_42->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_42);

        labelDegree2 = new QLabel(tab_4);
        labelDegree2->setObjectName("labelDegree2");
        labelDegree2->setMinimumSize(QSize(100, 0));
        labelDegree2->setMaximumSize(QSize(100, 16777215));
        labelDegree2->setFont(font2);
        labelDegree2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelDegree2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelDegree2, 0, Qt::AlignHCenter);

        label_31 = new QLabel(tab_4);
        label_31->setObjectName("label_31");
        label_31->setMinimumSize(QSize(200, 200));
        label_31->setMaximumSize(QSize(200, 200));
        label_31->setFont(font3);
        label_31->setTextFormat(Qt::AutoText);
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/img/img/conder2.png")));
        label_31->setScaledContents(true);

        verticalLayout_4->addWidget(label_31, 0, Qt::AlignHCenter);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_25 = new QLabel(tab_4);
        label_25->setObjectName("label_25");
        label_25->setFont(font1);

        horizontalLayout_12->addWidget(label_25, 0, Qt::AlignHCenter);

        label_26 = new QLabel(tab_4);
        label_26->setObjectName("label_26");
        label_26->setFont(font1);

        horizontalLayout_12->addWidget(label_26, 0, Qt::AlignHCenter);

        label_27 = new QLabel(tab_4);
        label_27->setObjectName("label_27");
        label_27->setFont(font1);

        horizontalLayout_12->addWidget(label_27, 0, Qt::AlignHCenter);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        labelTemp2 = new QLabel(tab_4);
        labelTemp2->setObjectName("labelTemp2");
        labelTemp2->setFont(font2);
        labelTemp2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelTemp2->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(labelTemp2);

        labelHumidity2 = new QLabel(tab_4);
        labelHumidity2->setObjectName("labelHumidity2");
        labelHumidity2->setFont(font2);
        labelHumidity2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelHumidity2->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(labelHumidity2);

        labelPressure2 = new QLabel(tab_4);
        labelPressure2->setObjectName("labelPressure2");
        labelPressure2->setFont(font2);
        labelPressure2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelPressure2->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(labelPressure2);


        verticalLayout_4->addLayout(horizontalLayout_13);

        qTabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        tab_5->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_9 = new QLabel(tab_5);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        verticalLayout_6->addWidget(label_9, 0, Qt::AlignHCenter);

        labelDegree3 = new QLabel(tab_5);
        labelDegree3->setObjectName("labelDegree3");
        labelDegree3->setMinimumSize(QSize(100, 50));
        labelDegree3->setMaximumSize(QSize(100, 50));
        labelDegree3->setSizeIncrement(QSize(0, 0));
        labelDegree3->setFont(font2);
        labelDegree3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelDegree3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelDegree3, 0, Qt::AlignHCenter);

        label_35 = new QLabel(tab_5);
        label_35->setObjectName("label_35");
        label_35->setMinimumSize(QSize(200, 200));
        label_35->setMaximumSize(QSize(200, 200));
        label_35->setFont(font3);
        label_35->setTextFormat(Qt::AutoText);
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/img/img/conder3.png")));
        label_35->setScaledContents(true);

        verticalLayout_6->addWidget(label_35, 0, Qt::AlignHCenter);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_36 = new QLabel(tab_5);
        label_36->setObjectName("label_36");
        label_36->setFont(font1);

        horizontalLayout_15->addWidget(label_36, 0, Qt::AlignHCenter);

        label_37 = new QLabel(tab_5);
        label_37->setObjectName("label_37");
        label_37->setFont(font1);

        horizontalLayout_15->addWidget(label_37, 0, Qt::AlignHCenter);

        label_38 = new QLabel(tab_5);
        label_38->setObjectName("label_38");
        label_38->setFont(font1);

        horizontalLayout_15->addWidget(label_38, 0, Qt::AlignHCenter);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        labelTemp3 = new QLabel(tab_5);
        labelTemp3->setObjectName("labelTemp3");
        labelTemp3->setFont(font2);
        labelTemp3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelTemp3->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(labelTemp3);

        labelHumidity3 = new QLabel(tab_5);
        labelHumidity3->setObjectName("labelHumidity3");
        labelHumidity3->setFont(font2);
        labelHumidity3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelHumidity3->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(labelHumidity3);

        labelPressure3 = new QLabel(tab_5);
        labelPressure3->setObjectName("labelPressure3");
        labelPressure3->setFont(font2);
        labelPressure3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 2px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelPressure3->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(labelPressure3);


        verticalLayout_6->addLayout(horizontalLayout_14);

        qTabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(qTabWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        minusDirection = new QPushButton(centralwidget);
        minusDirection->setObjectName("minusDirection");
        minusDirection->setMinimumSize(QSize(80, 80));
        minusDirection->setMaximumSize(QSize(80, 80));
        minusDirection->setCursor(QCursor(Qt::PointingHandCursor));
        minusDirection->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 40px;\n"
"	border: 5px solid #7A7A7A;\n"
"	background-color: #F8F8FF;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/minus-sign-a-line-horizontal-position_32320.png"), QSize(), QIcon::Normal, QIcon::Off);
        minusDirection->setIcon(icon1);
        minusDirection->setIconSize(QSize(40, 50));
        minusDirection->setFlat(true);

        horizontalLayout_9->addWidget(minusDirection);

        labelDegree = new QLabel(centralwidget);
        labelDegree->setObjectName("labelDegree");
        labelDegree->setEnabled(true);
        labelDegree->setMinimumSize(QSize(200, 75));
        labelDegree->setMaximumSize(QSize(100, 75));
        QFont font4;
        font4.setPointSize(40);
        labelDegree->setFont(font4);
        labelDegree->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 3px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        labelDegree->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(labelDegree);

        plusDirection = new QPushButton(centralwidget);
        plusDirection->setObjectName("plusDirection");
        plusDirection->setMinimumSize(QSize(80, 80));
        plusDirection->setMaximumSize(QSize(80, 80));
        plusDirection->setCursor(QCursor(Qt::PointingHandCursor));
        plusDirection->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 40px;\n"
"	border: 5px solid #7A7A7A;\n"
"	background-color: #F8F8FF;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/plus-sign_32339.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusDirection->setIcon(icon2);
        plusDirection->setIconSize(QSize(40, 50));
        plusDirection->setFlat(true);

        horizontalLayout_9->addWidget(plusDirection);


        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        minus->setMinimumSize(QSize(80, 80));
        minus->setMaximumSize(QSize(80, 80));
        minus->setCursor(QCursor(Qt::PointingHandCursor));
        minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 5px solid #7A7A7A;\n"
"background-color: #F8F8FF;\n"
"border-radius: 40px;\n"
"}"));
        minus->setIcon(icon1);
        minus->setIconSize(QSize(40, 40));
        minus->setFlat(true);

        horizontalLayout_3->addWidget(minus, 0, Qt::AlignRight);

        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setMinimumSize(QSize(80, 80));
        plus->setMaximumSize(QSize(80, 80));
        plus->setCursor(QCursor(Qt::PointingHandCursor));
        plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 5px solid #7A7A7A;\n"
"background-color: #F8F8FF;\n"
"border-radius: 40px;\n"
"}"));
        plus->setIcon(icon2);
        plus->setIconSize(QSize(40, 40));
        plus->setFlat(true);

        horizontalLayout_3->addWidget(plus, 0, Qt::AlignRight);


        verticalLayout_5->addLayout(horizontalLayout_3);

        label_temp = new QLabel(centralwidget);
        label_temp->setObjectName("label_temp");
        label_temp->setFont(font2);
        label_temp->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold\n"
"}"));
        label_temp->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        verticalLayout_5->addWidget(label_temp);

        comboBoxTemp = new QComboBox(centralwidget);
        comboBoxTemp->addItem(QString());
        comboBoxTemp->addItem(QString());
        comboBoxTemp->addItem(QString());
        comboBoxTemp->setObjectName("comboBoxTemp");
        comboBoxTemp->setMinimumSize(QSize(100, 22));
        comboBoxTemp->setMaximumSize(QSize(100, 22));
        comboBoxTemp->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border-radius: 2px;\n"
"	border: 2px solid #000000;\n"
"}"));

        verticalLayout_5->addWidget(comboBoxTemp, 0, Qt::AlignRight);

        temp_label = new QLabel(centralwidget);
        temp_label->setObjectName("temp_label");
        temp_label->setMinimumSize(QSize(250, 100));
        temp_label->setMaximumSize(QSize(250, 100));
        QFont font5;
        font5.setPointSize(50);
        temp_label->setFont(font5);
        temp_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 3px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        temp_label->setFrameShape(QFrame::NoFrame);
        temp_label->setFrameShadow(QFrame::Plain);
        temp_label->setLineWidth(0);
        temp_label->setMidLineWidth(0);
        temp_label->setScaledContents(true);
        temp_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        temp_label->setWordWrap(false);

        verticalLayout_5->addWidget(temp_label, 0, Qt::AlignRight);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-weight: bold;\n"
"}"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_5, 0, Qt::AlignBottom);

        humidity_label = new QLabel(centralwidget);
        humidity_label->setObjectName("humidity_label");
        humidity_label->setMinimumSize(QSize(250, 100));
        humidity_label->setMaximumSize(QSize(250, 100));
        humidity_label->setFont(font5);
        humidity_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 3px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        humidity_label->setFrameShape(QFrame::NoFrame);
        humidity_label->setLineWidth(2);
        humidity_label->setScaledContents(true);
        humidity_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(humidity_label, 0, Qt::AlignRight);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-weight: bold;\n"
"}"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_6, 0, Qt::AlignBottom);

        comboBoxPressure = new QComboBox(centralwidget);
        comboBoxPressure->addItem(QString());
        comboBoxPressure->addItem(QString());
        comboBoxPressure->setObjectName("comboBoxPressure");
        comboBoxPressure->setMinimumSize(QSize(100, 22));
        comboBoxPressure->setMaximumSize(QSize(100, 22));
        comboBoxPressure->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border-radius: 2px;\n"
"	border: 2px solid #000000;\n"
"}"));

        verticalLayout_5->addWidget(comboBoxPressure, 0, Qt::AlignRight);

        pressure_label = new QLabel(centralwidget);
        pressure_label->setObjectName("pressure_label");
        pressure_label->setEnabled(true);
        pressure_label->setMinimumSize(QSize(250, 100));
        pressure_label->setMaximumSize(QSize(250, 100));
        QFont font6;
        font6.setPointSize(50);
        font6.setBold(false);
        pressure_label->setFont(font6);
        pressure_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border: 3px solid #000000;\n"
"border-radius:5px;\n"
"background-color:#87CEFA;\n"
"padding:10px;\n"
"}"));
        pressure_label->setFrameShape(QFrame::NoFrame);
        pressure_label->setFrameShadow(QFrame::Plain);
        pressure_label->setLineWidth(2);
        pressure_label->setScaledContents(true);
        pressure_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(pressure_label, 0, Qt::AlignRight);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_4, 0, 5, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(-1, 0, -1, 0);
        power_button = new QPushButton(centralwidget);
        power_button->setObjectName("power_button");
        power_button->setMinimumSize(QSize(100, 100));
        power_button->setMaximumSize(QSize(100, 100));
        power_button->setFont(font3);
        power_button->setCursor(QCursor(Qt::PointingHandCursor));
        power_button->setMouseTracking(false);
        power_button->setTabletTracking(false);
        power_button->setLayoutDirection(Qt::LeftToRight);
        power_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 5px solid #000000;\n"
"	background-color: #ff6b6b;\n"
"	border-radius: 50px;\n"
"}\n"
"\n"
""));
        power_button->setIcon(icon);
        power_button->setIconSize(QSize(60, 60));
        power_button->setCheckable(false);
        power_button->setAutoRepeat(false);
        power_button->setFlat(false);

        verticalLayout_17->addWidget(power_button);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_4);

        option_button = new QPushButton(centralwidget);
        option_button->setObjectName("option_button");
        option_button->setMinimumSize(QSize(100, 100));
        option_button->setMaximumSize(QSize(100, 100));
        option_button->setCursor(QCursor(Qt::PointingHandCursor));
        option_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 20px;\n"
"	border: 5px solid #7A7A7A;\n"
"	background-color: #F8F8FF;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        option_button->setIcon(icon3);
        option_button->setIconSize(QSize(65, 65));

        verticalLayout_17->addWidget(option_button);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_3);

        darkTheme_button = new QPushButton(centralwidget);
        darkTheme_button->setObjectName("darkTheme_button");
        darkTheme_button->setMinimumSize(QSize(100, 100));
        darkTheme_button->setMaximumSize(QSize(100, 100));
        darkTheme_button->setSizeIncrement(QSize(0, 0));
        darkTheme_button->setCursor(QCursor(Qt::PointingHandCursor));
        darkTheme_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 50px;\n"
"	border: 5px solid #7A7A7A;\n"
"	background-color: #F8F8FF;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/sleep-mode_107753.png"), QSize(), QIcon::Normal, QIcon::Off);
        darkTheme_button->setIcon(icon4);
        darkTheme_button->setIconSize(QSize(65, 65));

        verticalLayout_17->addWidget(darkTheme_button);


        gridLayout->addLayout(verticalLayout_17, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        qTabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        conderButton1->setText(QString());
        conderButton2->setText(QString());
        conderButton3->setText(QString());
        label_41->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\277\320\276\320\264\320\260\321\207\320\270 \320\262\320\276\320\267\320\264\321\203\321\205\320\260", nullptr));
        labelDegree1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        labelTemp1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelHumidity1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelPressure1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        qTabWidget->setTabText(qTabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\264\320\270\321\206\320\270\320\276\320\275\320\265\321\200 1", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\277\320\276\320\264\320\260\321\207\320\270 \320\262\320\276\320\267\320\264\321\203\321\205\320\260", nullptr));
        labelDegree2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_31->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        labelTemp2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelHumidity2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelPressure2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        qTabWidget->setTabText(qTabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\264\320\270\321\206\320\270\320\276\320\275\320\265\321\200 2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\277\320\276\320\264\320\260\321\207\320\270 \320\262\320\276\320\267\320\264\321\203\321\205\320\260", nullptr));
        labelDegree3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_35->setText(QString());
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        labelTemp3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelHumidity3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelPressure3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        qTabWidget->setTabText(qTabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\264\320\270\321\206\320\270\320\276\320\275\320\265\321\200 3", nullptr));
        minusDirection->setText(QString());
        labelDegree->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        plusDirection->setText(QString());
        minus->setText(QString());
        plus->setText(QString());
        label_temp->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        comboBoxTemp->setItemText(0, QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        comboBoxTemp->setItemText(1, QCoreApplication::translate("MainWindow", "\302\260F", nullptr));
        comboBoxTemp->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232", nullptr));

        temp_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214 (%)", nullptr));
        humidity_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265 (\320\237\320\260)", nullptr));
        comboBoxPressure->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\260", nullptr));
        comboBoxPressure->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\274.\321\200\321\202.\321\201\321\202", nullptr));

        pressure_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        power_button->setText(QString());
        option_button->setText(QString());
        darkTheme_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
