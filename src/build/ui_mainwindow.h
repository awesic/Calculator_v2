/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btn_0;
    QPushButton *btn_cos;
    QPushButton *btn_sin;
    QPushButton *btn_5;
    QPushButton *btn_tan;
    QPushButton *btn_2;
    QPushButton *btn_minus;
    QPushButton *btn_3;
    QPushButton *btn_acos;
    QPushButton *btn_9;
    QPushButton *btn_brk_close;
    QPushButton *btn_4;
    QPushButton *btn_plus;
    QPushButton *btn_dot;
    QPushButton *btn_8;
    QPushButton *btn_AC;
    QPushButton *btn_6;
    QPushButton *btn_eq;
    QPushButton *btn_log;
    QPushButton *btn_brk_open;
    QPushButton *btn_ln;
    QPushButton *btn_div;
    QPushButton *btn_asin;
    QPushButton *btn_7;
    QPushButton *btn_pow;
    QPushButton *btn_atan;
    QPushButton *btn_1;
    QPushButton *btn_mul;
    QPushButton *btn_percent;
    QPushButton *btn_sqrt;
    QPushButton *btn_pi;
    QPushButton *btn_mod;
    QLabel *result_print;
    QPushButton *btn_x;
    QLabel *label_2;
    QLineEdit *input_text;
    QDoubleSpinBox *x_val;
    QPushButton *btn_plot;
    QPushButton *btn_backspace;
    QLabel *label;
    QDoubleSpinBox *y_max;
    QDoubleSpinBox *y_min;
    QDoubleSpinBox *x_min;
    QLabel *label_4;
    QLabel *label_3;
    QDoubleSpinBox *x_max;
    QLabel *label_5;
    QPushButton *btn_e;
    QDoubleSpinBox *step;
    QLabel *label_27;
    QWidget *tab_3;
    QSpinBox *creditAmount;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *creditTerm;
    QComboBox *creditYearMonth;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *btn_creditCalculate;
    QDoubleSpinBox *creditInterestRate;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *creditOverpay;
    QLabel *creditTotalPay;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *creditMonthlyPay;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *creditAnnuity;
    QRadioButton *creditDifferentiated;
    QWidget *tab_4;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *btn_DepositCalculate;
    QSpinBox *depositAmount;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *depositTerm;
    QDoubleSpinBox *depositInterestRate;
    QLabel *label_19;
    QComboBox *depositYearMonth;
    QLabel *label_21;
    QLabel *label_22;
    QDoubleSpinBox *depositTaxRate;
    QComboBox *depositPeriodisity;
    QLabel *label_23;
    QCheckBox *depositCapitalizOfInterest;
    QLabel *label_20;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *depositAccruedInterest;
    QLabel *depositTaxAmount;
    QLabel *depositAmontEndTerm;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_28;
    QPushButton *btn_replAdd;
    QPushButton *btn_replDel;
    QTableWidget *tableWidget_repl;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_29;
    QPushButton *btn_pwdAdd;
    QPushButton *btn_pwdDel;
    QTableWidget *tableWidget_pwd;
    QButtonGroup *func_group;
    QButtonGroup *simple_opt;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 491);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 851, 491));
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font.setPointSize(14);
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        btn_0 = new QPushButton(tab);
        simple_opt = new QButtonGroup(MainWindow);
        simple_opt->setObjectName("simple_opt");
        simple_opt->addButton(btn_0);
        btn_0->setObjectName("btn_0");
        btn_0->setGeometry(QRect(190, 341, 115, 48));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setPointSize(18);
        btn_0->setFont(font1);
        btn_0->setToolTipDuration(-1);
        btn_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_cos = new QPushButton(tab);
        func_group = new QButtonGroup(MainWindow);
        func_group->setObjectName("func_group");
        func_group->addButton(btn_cos);
        btn_cos->setObjectName("btn_cos");
        btn_cos->setGeometry(QRect(74, 194, 57, 48));
        btn_cos->setFont(font1);
        btn_cos->setToolTipDuration(-1);
        btn_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_sin = new QPushButton(tab);
        func_group->addButton(btn_sin);
        btn_sin->setObjectName("btn_sin");
        btn_sin->setGeometry(QRect(16, 194, 57, 48));
        btn_sin->setFont(font1);
        btn_sin->setToolTipDuration(-1);
        btn_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_5 = new QPushButton(tab);
        simple_opt->addButton(btn_5);
        btn_5->setObjectName("btn_5");
        btn_5->setGeometry(QRect(248, 243, 57, 48));
        btn_5->setFont(font1);
        btn_5->setToolTipDuration(-1);
        btn_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_tan = new QPushButton(tab);
        func_group->addButton(btn_tan);
        btn_tan->setObjectName("btn_tan");
        btn_tan->setGeometry(QRect(132, 194, 57, 48));
        btn_tan->setFont(font1);
        btn_tan->setToolTipDuration(-1);
        btn_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_2 = new QPushButton(tab);
        simple_opt->addButton(btn_2);
        btn_2->setObjectName("btn_2");
        btn_2->setGeometry(QRect(248, 292, 57, 48));
        btn_2->setFont(font1);
        btn_2->setToolTipDuration(-1);
        btn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_minus = new QPushButton(tab);
        simple_opt->addButton(btn_minus);
        btn_minus->setObjectName("btn_minus");
        btn_minus->setGeometry(QRect(364, 243, 57, 48));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setStrikeOut(false);
        btn_minus->setFont(font2);
        btn_minus->setToolTipDuration(-1);
        btn_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(231, 158, 61);\n"
"  border: 1px solid rgba(255, 255, 255, 0);\n"
"  color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(184, 124, 48);\n"
"}\n"
""));
        btn_3 = new QPushButton(tab);
        simple_opt->addButton(btn_3);
        btn_3->setObjectName("btn_3");
        btn_3->setGeometry(QRect(306, 292, 57, 48));
        btn_3->setFont(font1);
        btn_3->setToolTipDuration(-1);
        btn_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_acos = new QPushButton(tab);
        func_group->addButton(btn_acos);
        btn_acos->setObjectName("btn_acos");
        btn_acos->setGeometry(QRect(74, 243, 57, 48));
        btn_acos->setFont(font1);
        btn_acos->setToolTipDuration(-1);
        btn_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_9 = new QPushButton(tab);
        simple_opt->addButton(btn_9);
        btn_9->setObjectName("btn_9");
        btn_9->setGeometry(QRect(306, 194, 57, 48));
        btn_9->setFont(font1);
        btn_9->setToolTipDuration(-1);
        btn_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_brk_close = new QPushButton(tab);
        func_group->addButton(btn_brk_close);
        btn_brk_close->setObjectName("btn_brk_close");
        btn_brk_close->setGeometry(QRect(74, 145, 57, 48));
        btn_brk_close->setFont(font1);
        btn_brk_close->setToolTipDuration(-1);
        btn_brk_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_4 = new QPushButton(tab);
        simple_opt->addButton(btn_4);
        btn_4->setObjectName("btn_4");
        btn_4->setGeometry(QRect(190, 243, 57, 48));
        btn_4->setFont(font1);
        btn_4->setToolTipDuration(-1);
        btn_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_plus = new QPushButton(tab);
        simple_opt->addButton(btn_plus);
        btn_plus->setObjectName("btn_plus");
        btn_plus->setGeometry(QRect(364, 292, 57, 48));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setStrikeOut(false);
        btn_plus->setFont(font3);
        btn_plus->setToolTipDuration(-1);
        btn_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(231, 158, 61);\n"
"  border: 1px solid rgba(255, 255, 255, 0);\n"
"  color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(184, 124, 48);\n"
"}\n"
""));
        btn_dot = new QPushButton(tab);
        simple_opt->addButton(btn_dot);
        btn_dot->setObjectName("btn_dot");
        btn_dot->setGeometry(QRect(306, 341, 57, 48));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font4.setPointSize(23);
        btn_dot->setFont(font4);
        btn_dot->setToolTipDuration(-1);
        btn_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_8 = new QPushButton(tab);
        simple_opt->addButton(btn_8);
        btn_8->setObjectName("btn_8");
        btn_8->setGeometry(QRect(248, 194, 57, 48));
        btn_8->setFont(font1);
        btn_8->setToolTipDuration(-1);
        btn_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_AC = new QPushButton(tab);
        simple_opt->addButton(btn_AC);
        btn_AC->setObjectName("btn_AC");
        btn_AC->setGeometry(QRect(190, 145, 57, 48));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setStrikeOut(false);
        font5.setKerning(false);
        btn_AC->setFont(font5);
        btn_AC->setToolTipDuration(-1);
        btn_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_6 = new QPushButton(tab);
        simple_opt->addButton(btn_6);
        btn_6->setObjectName("btn_6");
        btn_6->setGeometry(QRect(306, 243, 57, 48));
        btn_6->setFont(font1);
        btn_6->setToolTipDuration(-1);
        btn_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_eq = new QPushButton(tab);
        simple_opt->addButton(btn_eq);
        btn_eq->setObjectName("btn_eq");
        btn_eq->setGeometry(QRect(364, 341, 57, 48));
        btn_eq->setFont(font3);
        btn_eq->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(231, 158, 61);\n"
"  border: 1px solid rgba(255, 255, 255, 0);\n"
"  color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(184, 124, 48);\n"
"}\n"
""));
        btn_log = new QPushButton(tab);
        func_group->addButton(btn_log);
        btn_log->setObjectName("btn_log");
        btn_log->setGeometry(QRect(74, 341, 57, 48));
        btn_log->setFont(font1);
        btn_log->setToolTipDuration(-1);
        btn_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_brk_open = new QPushButton(tab);
        func_group->addButton(btn_brk_open);
        btn_brk_open->setObjectName("btn_brk_open");
        btn_brk_open->setGeometry(QRect(16, 145, 57, 48));
        btn_brk_open->setFont(font1);
        btn_brk_open->setToolTipDuration(-1);
        btn_brk_open->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_ln = new QPushButton(tab);
        func_group->addButton(btn_ln);
        btn_ln->setObjectName("btn_ln");
        btn_ln->setGeometry(QRect(16, 341, 57, 48));
        btn_ln->setFont(font1);
        btn_ln->setToolTipDuration(-1);
        btn_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_div = new QPushButton(tab);
        simple_opt->addButton(btn_div);
        btn_div->setObjectName("btn_div");
        btn_div->setGeometry(QRect(364, 145, 57, 48));
        btn_div->setFont(font3);
        btn_div->setToolTipDuration(-1);
        btn_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(231, 158, 61);\n"
"  border: 1px solid rgba(255, 255, 255, 0);\n"
"  color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(184, 124, 48);\n"
"}\n"
""));
        btn_asin = new QPushButton(tab);
        func_group->addButton(btn_asin);
        btn_asin->setObjectName("btn_asin");
        btn_asin->setGeometry(QRect(16, 243, 57, 48));
        btn_asin->setFont(font1);
        btn_asin->setToolTipDuration(-1);
        btn_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_7 = new QPushButton(tab);
        simple_opt->addButton(btn_7);
        btn_7->setObjectName("btn_7");
        btn_7->setGeometry(QRect(190, 194, 57, 48));
        btn_7->setFont(font1);
        btn_7->setToolTipDuration(-1);
        btn_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_pow = new QPushButton(tab);
        func_group->addButton(btn_pow);
        btn_pow->setObjectName("btn_pow");
        btn_pow->setGeometry(QRect(16, 292, 57, 48));
        btn_pow->setFont(font1);
        btn_pow->setToolTipDuration(-1);
        btn_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_atan = new QPushButton(tab);
        func_group->addButton(btn_atan);
        btn_atan->setObjectName("btn_atan");
        btn_atan->setGeometry(QRect(132, 243, 57, 48));
        btn_atan->setFont(font1);
        btn_atan->setToolTipDuration(-1);
        btn_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_1 = new QPushButton(tab);
        simple_opt->addButton(btn_1);
        btn_1->setObjectName("btn_1");
        btn_1->setGeometry(QRect(190, 292, 57, 48));
        btn_1->setFont(font1);
        btn_1->setToolTipDuration(-1);
        btn_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   color: white;\n"
"   border: 1px solid;\n"
"   border-color: rgba(255, 255, 255, 0);\n"
"   background-color: rgb(123, 121, 120);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_mul = new QPushButton(tab);
        simple_opt->addButton(btn_mul);
        btn_mul->setObjectName("btn_mul");
        btn_mul->setGeometry(QRect(364, 194, 57, 48));
        btn_mul->setFont(font3);
        btn_mul->setToolTipDuration(-1);
        btn_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(231, 158, 61);\n"
"  border: 1px solid rgba(255, 255, 255, 0);\n"
"  color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(184, 124, 48);\n"
"}\n"
""));
        btn_percent = new QPushButton(tab);
        btn_percent->setObjectName("btn_percent");
        btn_percent->setGeometry(QRect(306, 145, 57, 48));
        btn_percent->setFont(font1);
        btn_percent->setToolTipDuration(-1);
        btn_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_sqrt = new QPushButton(tab);
        btn_sqrt->setObjectName("btn_sqrt");
        btn_sqrt->setGeometry(QRect(132, 145, 57, 48));
        btn_sqrt->setFont(font1);
        btn_sqrt->setToolTipDuration(-1);
        btn_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_pi = new QPushButton(tab);
        btn_pi->setObjectName("btn_pi");
        btn_pi->setGeometry(QRect(132, 341, 57, 48));
        btn_pi->setFont(font1);
        btn_pi->setToolTipDuration(-1);
        btn_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(118, 118, 118, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        btn_mod = new QPushButton(tab);
        btn_mod->setObjectName("btn_mod");
        btn_mod->setGeometry(QRect(74, 292, 57, 48));
        btn_mod->setFont(font1);
        btn_mod->setToolTipDuration(-1);
        btn_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        result_print = new QLabel(tab);
        result_print->setObjectName("result_print");
        result_print->setGeometry(QRect(17, 78, 403, 61));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font6.setPointSize(27);
        result_print->setFont(font6);
        result_print->setCursor(QCursor(Qt::ArrowCursor));
        result_print->setMouseTracking(true);
        result_print->setStyleSheet(QString::fromUtf8("QLebal {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}"));
        result_print->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_x = new QPushButton(tab);
        btn_x->setObjectName("btn_x");
        btn_x->setGeometry(QRect(423, 341, 57, 48));
        btn_x->setFont(font1);
        btn_x->setToolTipDuration(-1);
        btn_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(118, 118, 118, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(479, 340, 21, 48));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font7.setPointSize(20);
        label_2->setFont(font7);
        label_2->setAlignment(Qt::AlignCenter);
        input_text = new QLineEdit(tab);
        input_text->setObjectName("input_text");
        input_text->setGeometry(QRect(17, 10, 404, 61));
        input_text->setFont(font7);
        input_text->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border: rgba(255, 255, 255, 0);\n"
"	border-bottom: 1px solid rgba(128, 128, 127, 128);\n"
"}"));
        input_text->setMaxLength(255);
        x_val = new QDoubleSpinBox(tab);
        x_val->setObjectName("x_val");
        x_val->setGeometry(QRect(498, 341, 90, 48));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font8.setPointSize(17);
        x_val->setFont(font8);
        x_val->setMinimum(-9999999.990000000223517);
        x_val->setMaximum(9999999.990000000223517);
        btn_plot = new QPushButton(tab);
        btn_plot->setObjectName("btn_plot");
        btn_plot->setGeometry(QRect(640, 370, 131, 38));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font9.setPointSize(16);
        btn_plot->setFont(font9);
        btn_plot->setCursor(QCursor(Qt::PointingHandCursor));
        btn_plot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-radius: 15px;\n"
"border-color: rgb(50, 50, 50);\n"
"background-color: rgb(71, 71, 71);\n"
"color: #fff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(145, 144, 145);\n"
"}"));
        btn_plot->setAutoDefault(true);
        btn_plot->setFlat(true);
        btn_backspace = new QPushButton(tab);
        btn_backspace->setObjectName("btn_backspace");
        btn_backspace->setGeometry(QRect(248, 145, 57, 48));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font10.setPointSize(18);
        font10.setBold(false);
        font10.setStrikeOut(false);
        font10.setKerning(false);
        btn_backspace->setFont(font10);
        btn_backspace->setToolTipDuration(-1);
        btn_backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(97, 96, 96, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 157, 61, 21));
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font11.setPointSize(19);
        label->setFont(font11);
        y_max = new QDoubleSpinBox(tab);
        y_max->setObjectName("y_max");
        y_max->setGeometry(QRect(510, 235, 90, 35));
        y_max->setFont(font8);
        y_max->setMinimum(-999999.000000000000000);
        y_max->setMaximum(999999.989999999990687);
        y_max->setValue(10.000000000000000);
        y_min = new QDoubleSpinBox(tab);
        y_min->setObjectName("y_min");
        y_min->setGeometry(QRect(510, 270, 90, 35));
        y_min->setFont(font8);
        y_min->setMinimum(-999999.989999999990687);
        y_min->setMaximum(999999.989999999990687);
        y_min->setValue(-10.000000000000000);
        x_min = new QDoubleSpinBox(tab);
        x_min->setObjectName("x_min");
        x_min->setGeometry(QRect(510, 185, 90, 35));
        x_min->setFont(font8);
        x_min->setMinimum(-999999.989999999990687);
        x_min->setMaximum(999999.989999999990687);
        x_min->setValue(-10.000000000000000);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(445, 277, 61, 21));
        label_4->setFont(font11);
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 242, 61, 21));
        label_3->setFont(font11);
        x_max = new QDoubleSpinBox(tab);
        x_max->setObjectName("x_max");
        x_max->setGeometry(QRect(510, 150, 90, 35));
        x_max->setFont(font8);
        x_max->setMinimum(-999999.000000000000000);
        x_max->setMaximum(999999.989999999990687);
        x_max->setValue(10.000000000000000);
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(445, 192, 61, 21));
        label_5->setFont(font11);
        btn_e = new QPushButton(tab);
        btn_e->setObjectName("btn_e");
        btn_e->setGeometry(QRect(132, 292, 57, 48));
        btn_e->setFont(font1);
        btn_e->setToolTipDuration(-1);
        btn_e->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgba(118, 118, 118, 128);\n"
"  color: white; \n"
"  border: 1px solid transparent;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(122, 122, 122);\n"
"}"));
        step = new QDoubleSpinBox(tab);
        step->setObjectName("step");
        step->setGeometry(QRect(678, 270, 90, 35));
        step->setFont(font8);
        step->setMinimum(0.000000000000000);
        step->setMaximum(1000.000000000000000);
        step->setSingleStep(0.100000000000000);
        step->setValue(0.100000000000000);
        label_27 = new QLabel(tab);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(620, 277, 61, 21));
        label_27->setFont(font11);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        creditAmount = new QSpinBox(tab_3);
        creditAmount->setObjectName("creditAmount");
        creditAmount->setGeometry(QRect(18, 27, 321, 55));
        creditAmount->setFont(font1);
        creditAmount->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 5px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        creditAmount->setButtonSymbols(QAbstractSpinBox::NoButtons);
        creditAmount->setMaximum(100000000);
        creditAmount->setSingleStep(100000);
        creditAmount->setStepType(QAbstractSpinBox::DefaultStepType);
        creditAmount->setValue(500000);
        creditAmount->setDisplayIntegerBase(10);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 29, 19, 50));
        label_6->setFont(font4);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 30, 58, 16));
        QFont font12;
        font12.setFamilies({QString::fromUtf8("Helvetica Neue")});
        label_7->setFont(font12);
        creditTerm = new QSpinBox(tab_3);
        creditTerm->setObjectName("creditTerm");
        creditTerm->setGeometry(QRect(18, 98, 121, 53));
        creditTerm->setFont(font1);
        creditTerm->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 5px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        creditTerm->setButtonSymbols(QAbstractSpinBox::NoButtons);
        creditTerm->setMaximum(100);
        creditTerm->setValue(3);
        creditYearMonth = new QComboBox(tab_3);
        creditYearMonth->addItem(QString());
        creditYearMonth->addItem(QString());
        creditYearMonth->setObjectName("creditYearMonth");
        creditYearMonth->setGeometry(QRect(150, 111, 101, 31));
        QFont font13;
        font13.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font13.setPointSize(15);
        creditYearMonth->setFont(font13);
        creditYearMonth->setAutoFillBackground(false);
        creditYearMonth->setMaxVisibleItems(1);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 101, 58, 16));
        label_8->setFont(font12);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 170, 81, 16));
        label_9->setFont(font12);
        label_10 = new QLabel(tab_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(110, 174, 31, 42));
        label_10->setFont(font7);
        btn_creditCalculate = new QPushButton(tab_3);
        btn_creditCalculate->setObjectName("btn_creditCalculate");
        btn_creditCalculate->setGeometry(QRect(130, 350, 111, 40));
        btn_creditCalculate->setFont(font8);
        btn_creditCalculate->setCursor(QCursor(Qt::PointingHandCursor));
        btn_creditCalculate->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 116, 217);\n"
"border-radius: 10px;\n"
"color: white;\n"
"padding: 5px;"));
        creditInterestRate = new QDoubleSpinBox(tab_3);
        creditInterestRate->setObjectName("creditInterestRate");
        creditInterestRate->setGeometry(QRect(18, 167, 121, 53));
        creditInterestRate->setFont(font1);
        creditInterestRate->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 5px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        creditInterestRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        creditInterestRate->setMaximum(100.000000000000000);
        creditInterestRate->setValue(7.900000000000000);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(466, 41, 121, 20));
        label_12->setFont(font13);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(443, 100, 149, 20));
        label_13->setFont(font13);
        label_14 = new QLabel(tab_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(406, 70, 181, 20));
        label_14->setFont(font13);
        creditOverpay = new QLabel(tab_3);
        creditOverpay->setObjectName("creditOverpay");
        creditOverpay->setGeometry(QRect(595, 70, 211, 17));
        QFont font14;
        font14.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font14.setPointSize(14);
        font14.setBold(true);
        creditOverpay->setFont(font14);
        creditTotalPay = new QLabel(tab_3);
        creditTotalPay->setObjectName("creditTotalPay");
        creditTotalPay->setGeometry(QRect(595, 41, 211, 17));
        creditTotalPay->setFont(font14);
        scrollArea = new QScrollArea(tab_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(580, 90, 221, 291));
        scrollArea->setFont(font12);
        scrollArea->setAutoFillBackground(true);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 219, 289));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        creditMonthlyPay = new QLabel(scrollAreaWidgetContents);
        creditMonthlyPay->setObjectName("creditMonthlyPay");
        creditMonthlyPay->setFont(font);
        creditMonthlyPay->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(creditMonthlyPay);

        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(21, 240, 161, 51));
        layoutWidget->setFont(font12);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font12);
        label_11->setStyleSheet(QString::fromUtf8(""));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(label_11);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        creditAnnuity = new QRadioButton(layoutWidget);
        creditAnnuity->setObjectName("creditAnnuity");
        creditAnnuity->setFont(font13);
        creditAnnuity->setCursor(QCursor(Qt::PointingHandCursor));
        creditAnnuity->setChecked(true);

        verticalLayout_2->addWidget(creditAnnuity);

        creditDifferentiated = new QRadioButton(layoutWidget);
        creditDifferentiated->setObjectName("creditDifferentiated");
        creditDifferentiated->setFont(font13);
        creditDifferentiated->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(creditDifferentiated);


        horizontalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_3, QString());
        scrollArea->raise();
        layoutWidget->raise();
        creditInterestRate->raise();
        creditAmount->raise();
        label_6->raise();
        label_7->raise();
        creditTerm->raise();
        creditYearMonth->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        btn_creditCalculate->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        creditOverpay->raise();
        creditTotalPay->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_15 = new QLabel(tab_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(317, 30, 19, 50));
        label_15->setFont(font4);
        label_16 = new QLabel(tab_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(32, 31, 58, 16));
        label_16->setFont(font12);
        btn_DepositCalculate = new QPushButton(tab_4);
        btn_DepositCalculate->setObjectName("btn_DepositCalculate");
        btn_DepositCalculate->setGeometry(QRect(130, 350, 111, 40));
        btn_DepositCalculate->setFont(font8);
        btn_DepositCalculate->setCursor(QCursor(Qt::PointingHandCursor));
        btn_DepositCalculate->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 116, 217);\n"
"border-radius: 10px;\n"
"color: white;"));
        depositAmount = new QSpinBox(tab_4);
        depositAmount->setObjectName("depositAmount");
        depositAmount->setGeometry(QRect(19, 28, 321, 55));
        depositAmount->setFont(font1);
        depositAmount->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        depositAmount->setButtonSymbols(QAbstractSpinBox::NoButtons);
        depositAmount->setMaximum(100000000);
        depositAmount->setSingleStep(100000);
        depositAmount->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);
        depositAmount->setValue(500000);
        depositAmount->setDisplayIntegerBase(10);
        label_17 = new QLabel(tab_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(32, 175, 81, 16));
        label_17->setFont(font12);
        label_18 = new QLabel(tab_4);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(32, 106, 58, 16));
        label_18->setFont(font12);
        depositTerm = new QSpinBox(tab_4);
        depositTerm->setObjectName("depositTerm");
        depositTerm->setGeometry(QRect(20, 103, 121, 53));
        depositTerm->setFont(font1);
        depositTerm->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        depositTerm->setButtonSymbols(QAbstractSpinBox::NoButtons);
        depositTerm->setMaximum(100);
        depositTerm->setValue(3);
        depositInterestRate = new QDoubleSpinBox(tab_4);
        depositInterestRate->setObjectName("depositInterestRate");
        depositInterestRate->setGeometry(QRect(20, 172, 121, 53));
        depositInterestRate->setFont(font1);
        depositInterestRate->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        depositInterestRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        depositInterestRate->setMaximum(100.000000000000000);
        depositInterestRate->setValue(7.900000000000000);
        label_19 = new QLabel(tab_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(114, 180, 31, 41));
        label_19->setFont(font7);
        depositYearMonth = new QComboBox(tab_4);
        depositYearMonth->addItem(QString());
        depositYearMonth->addItem(QString());
        depositYearMonth->setObjectName("depositYearMonth");
        depositYearMonth->setGeometry(QRect(140, 113, 101, 32));
        depositYearMonth->setFont(font13);
        depositYearMonth->setMaxVisibleItems(1);
        label_21 = new QLabel(tab_4);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(185, 175, 81, 16));
        label_21->setFont(font12);
        label_22 = new QLabel(tab_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(266, 180, 31, 41));
        label_22->setFont(font7);
        depositTaxRate = new QDoubleSpinBox(tab_4);
        depositTaxRate->setObjectName("depositTaxRate");
        depositTaxRate->setGeometry(QRect(173, 172, 121, 53));
        depositTaxRate->setFont(font1);
        depositTaxRate->setStyleSheet(QString::fromUtf8("QDoubleSpinBox {\n"
"	border-radius: 13px;\n"
"	padding-left: 10px;\n"
"	padding-top: 8px;\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"}"));
        depositTaxRate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        depositTaxRate->setMaximum(100.000000000000000);
        depositTaxRate->setValue(0.000000000000000);
        depositPeriodisity = new QComboBox(tab_4);
        depositPeriodisity->addItem(QString());
        depositPeriodisity->addItem(QString());
        depositPeriodisity->addItem(QString());
        depositPeriodisity->addItem(QString());
        depositPeriodisity->addItem(QString());
        depositPeriodisity->setObjectName("depositPeriodisity");
        depositPeriodisity->setGeometry(QRect(170, 240, 191, 32));
        depositPeriodisity->setFont(font);
        label_23 = new QLabel(tab_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(25, 246, 141, 16));
        label_23->setFont(font12);
        depositCapitalizOfInterest = new QCheckBox(tab_4);
        depositCapitalizOfInterest->setObjectName("depositCapitalizOfInterest");
        depositCapitalizOfInterest->setGeometry(QRect(20, 280, 181, 20));
        depositCapitalizOfInterest->setFont(font);
        depositCapitalizOfInterest->setTristate(false);
        label_20 = new QLabel(tab_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(380, 330, 151, 31));
        label_20->setFont(font13);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_24 = new QLabel(tab_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(390, 370, 141, 31));
        label_24->setFont(font13);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_25 = new QLabel(tab_4);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(370, 410, 161, 41));
        label_25->setFont(font13);
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        depositAccruedInterest = new QLabel(tab_4);
        depositAccruedInterest->setObjectName("depositAccruedInterest");
        depositAccruedInterest->setGeometry(QRect(540, 330, 261, 31));
        depositAccruedInterest->setFont(font14);
        depositTaxAmount = new QLabel(tab_4);
        depositTaxAmount->setObjectName("depositTaxAmount");
        depositTaxAmount->setGeometry(QRect(540, 370, 261, 31));
        depositTaxAmount->setFont(font14);
        depositAmontEndTerm = new QLabel(tab_4);
        depositAmontEndTerm->setObjectName("depositAmontEndTerm");
        depositAmontEndTerm->setGeometry(QRect(540, 420, 261, 31));
        depositAmontEndTerm->setFont(font14);
        layoutWidget1 = new QWidget(tab_4);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(430, 10, 401, 321));
        layoutWidget1->setFont(font12);
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(-1);
#endif
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_28 = new QLabel(layoutWidget1);
        label_28->setObjectName("label_28");
        label_28->setFont(font12);
        label_28->setStyleSheet(QString::fromUtf8("QLabel {\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(label_28);

        btn_replAdd = new QPushButton(layoutWidget1);
        btn_replAdd->setObjectName("btn_replAdd");
        QFont font15;
        font15.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font15.setBold(true);
        btn_replAdd->setFont(font15);
        btn_replAdd->setCursor(QCursor(Qt::PointingHandCursor));
        btn_replAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(106, 106, 106);\n"
"width: 36px;\n"
"height: 20px;\n"
"border-radius: 5px;\n"
"color: #ffffff;\n"
"margin-right: 10px;\n"
"}"));

        horizontalLayout_2->addWidget(btn_replAdd);

        btn_replDel = new QPushButton(layoutWidget1);
        btn_replDel->setObjectName("btn_replDel");
        QFont font16;
        font16.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font16.setPointSize(13);
        font16.setBold(true);
        btn_replDel->setFont(font16);
        btn_replDel->setCursor(QCursor(Qt::PointingHandCursor));
        btn_replDel->setStyleSheet(QString::fromUtf8("background-color: rgb(106, 106, 106);\n"
"width: 36px;\n"
"height: 20px;\n"
"border-radius: 5px;\n"
"color: #ffffff;\n"
""));

        horizontalLayout_2->addWidget(btn_replDel);

        horizontalLayout_2->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget_repl = new QTableWidget(layoutWidget1);
        if (tableWidget_repl->columnCount() < 2)
            tableWidget_repl->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font12);
        tableWidget_repl->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font12);
        tableWidget_repl->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_repl->setObjectName("tableWidget_repl");
        tableWidget_repl->setFont(font12);
        tableWidget_repl->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
" border: 1px solid rgb(128, 128, 128); /* Border */\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QTableWidget QHeaderView::section {\n"
" background-color: rgb(149, 150, 150);\n"
" font-size: 14px;\n"
" border-bottom: none;\n"
" padding: 3px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
" background-color: rgb(59, 58, 59);\n"
" color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTableWidget::item:focus {\n"
" background-color: rgb(79, 79, 79);\n"
" border: 1px solid #ff4081;\n"
" color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
" background-color: rgb(92, 94, 90);\n"
" color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"/* \321\201\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \321\201\320\272\321\200\320\276\320\273\320\273\320\260 */\n"
"QTableWidget QScrollBar:vertical {\n"
" background: transparent;\n"
" width: 7px;\n"
" margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QTableWidget QScrollBar::handle:vertical {\n"
" background: #e0e0e0;\n"
" border-radius: 6px;\n"
" min-height: 10px; \n"
"}\n"
"\n"
""
                        "QTableWidget QScrollBar::handle:vertical:hover {\n"
" background: #bdbdbd;\n"
"}\n"
"\n"
"QTableWidget QScrollBar::sub-line:vertical {\n"
" background: none;\n"
"}\n"
"\n"
"QTableWidget QScrollBar::add-line:vertical {\n"
" background: none;\n"
"}\n"
""));
        tableWidget_repl->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableWidget_repl->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_repl->setGridStyle(Qt::DashLine);
        tableWidget_repl->setCornerButtonEnabled(false);
        tableWidget_repl->setColumnCount(2);
        tableWidget_repl->horizontalHeader()->setVisible(true);
        tableWidget_repl->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_repl->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget_repl->horizontalHeader()->setStretchLastSection(true);
        tableWidget_repl->verticalHeader()->setVisible(true);
        tableWidget_repl->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout->addWidget(tableWidget_repl);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName("label_29");
        label_29->setFont(font12);
        label_29->setStyleSheet(QString::fromUtf8("QLabel {\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(label_29);

        btn_pwdAdd = new QPushButton(layoutWidget1);
        btn_pwdAdd->setObjectName("btn_pwdAdd");
        btn_pwdAdd->setFont(font15);
        btn_pwdAdd->setCursor(QCursor(Qt::PointingHandCursor));
        btn_pwdAdd->setStyleSheet(QString::fromUtf8("background-color: rgb(106, 106, 106);\n"
"width: 36px;\n"
"height: 20px;\n"
"border-radius: 5px;\n"
"color: #ffffff;\n"
"margin-right: 10px;\n"
""));

        horizontalLayout_3->addWidget(btn_pwdAdd);

        btn_pwdDel = new QPushButton(layoutWidget1);
        btn_pwdDel->setObjectName("btn_pwdDel");
        btn_pwdDel->setFont(font16);
        btn_pwdDel->setCursor(QCursor(Qt::PointingHandCursor));
        btn_pwdDel->setStyleSheet(QString::fromUtf8("background-color: rgb(106, 106, 106);\n"
"width: 36px;\n"
"height: 20px;\n"
"border-radius: 5px;\n"
"color: #ffffff;\n"
""));

        horizontalLayout_3->addWidget(btn_pwdDel);

        horizontalLayout_3->setStretch(0, 5);

        verticalLayout->addLayout(horizontalLayout_3);

        tableWidget_pwd = new QTableWidget(layoutWidget1);
        if (tableWidget_pwd->columnCount() < 2)
            tableWidget_pwd->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font12);
        tableWidget_pwd->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font12);
        tableWidget_pwd->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_pwd->setObjectName("tableWidget_pwd");
        tableWidget_pwd->setFont(font12);
        tableWidget_pwd->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
" border: 1px solid rgb(128, 128, 128); /* Border */\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QTableWidget QHeaderView::section {\n"
" background-color: rgb(149, 150, 150);\n"
" font-size: 14px;\n"
" border-bottom: none;\n"
" padding: 3px;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
" background-color: rgb(59, 58, 59);\n"
" color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTableWidget::item:focus {\n"
" background-color: rgb(79, 79, 79);\n"
" border: 1px solid #ff4081;\n"
" color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
" background-color: rgb(92, 94, 90);\n"
" color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
"/* \321\201\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \321\201\320\272\321\200\320\276\320\273\320\273\320\260 */\n"
"QTableWidget QScrollBar:vertical {\n"
" background: transparent;\n"
" width: 7px;\n"
" margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QTableWidget QScrollBar::handle:vertical {\n"
" background: #e0e0e0;\n"
" border-radius: 6px;\n"
" min-height: 10px; \n"
"}\n"
"\n"
""
                        "QTableWidget QScrollBar::handle:vertical:hover {\n"
" background: #bdbdbd;\n"
"}\n"
"\n"
"QTableWidget QScrollBar::sub-line:vertical {\n"
" background: none;\n"
"}\n"
"\n"
"QTableWidget QScrollBar::add-line:vertical {\n"
" background: none;\n"
"}\n"
""));
        tableWidget_pwd->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableWidget_pwd->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_pwd->setGridStyle(Qt::DashLine);
        tableWidget_pwd->setCornerButtonEnabled(false);
        tableWidget_pwd->setColumnCount(2);
        tableWidget_pwd->horizontalHeader()->setVisible(true);
        tableWidget_pwd->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_pwd->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget_pwd);

        tabWidget->addTab(tab_4, QString());
        layoutWidget1->raise();
        depositTaxRate->raise();
        depositInterestRate->raise();
        depositTerm->raise();
        depositAmount->raise();
        label_15->raise();
        label_16->raise();
        btn_DepositCalculate->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        depositYearMonth->raise();
        label_21->raise();
        label_22->raise();
        depositPeriodisity->raise();
        label_23->raise();
        depositCapitalizOfInterest->raise();
        label_20->raise();
        label_24->raise();
        label_25->raise();
        depositAccruedInterest->raise();
        depositTaxAmount->raise();
        depositAmontEndTerm->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        btn_plot->setDefault(true);
        creditYearMonth->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        btn_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_brk_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        btn_brk_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        btn_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btn_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        btn_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_mul->setText(QCoreApplication::translate("MainWindow", "\342\234\225", nullptr));
        btn_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        btn_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        btn_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        result_print->setText(QString());
        btn_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        input_text->setText(QString());
        btn_plot->setText(QCoreApplication::translate("MainWindow", "plot \360\237\223\210", nullptr));
        btn_backspace->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x max:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "y min:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "y max:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "x min:", nullptr));
        btn_e->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "step:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Calculator \360\237\224\242", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        creditYearMonth->setItemText(0, QCoreApplication::translate("MainWindow", "month", nullptr));
        creditYearMonth->setItemText(1, QCoreApplication::translate("MainWindow", "year", nullptr));

        creditYearMonth->setCurrentText(QCoreApplication::translate("MainWindow", "year", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Term", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Interest rate", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btn_creditCalculate->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Total payment:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Monthly payment:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Overpayment on credit:", nullptr));
        creditOverpay->setText(QString());
        creditTotalPay->setText(QString());
        creditMonthlyPay->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        creditAnnuity->setText(QCoreApplication::translate("MainWindow", "Annuity", nullptr));
        creditDifferentiated->setText(QCoreApplication::translate("MainWindow", "Differentiated", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Credit \360\237\222\270", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        btn_DepositCalculate->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Interest rate", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Term", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        depositYearMonth->setItemText(0, QCoreApplication::translate("MainWindow", "year", nullptr));
        depositYearMonth->setItemText(1, QCoreApplication::translate("MainWindow", "month", nullptr));

        depositYearMonth->setCurrentText(QCoreApplication::translate("MainWindow", "year", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Tax rate", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        depositPeriodisity->setItemText(0, QCoreApplication::translate("MainWindow", "once a month", nullptr));
        depositPeriodisity->setItemText(1, QCoreApplication::translate("MainWindow", "once a quarter", nullptr));
        depositPeriodisity->setItemText(2, QCoreApplication::translate("MainWindow", "every six months", nullptr));
        depositPeriodisity->setItemText(3, QCoreApplication::translate("MainWindow", "once a year", nullptr));
        depositPeriodisity->setItemText(4, QCoreApplication::translate("MainWindow", "at the end of the term", nullptr));

        label_23->setText(QCoreApplication::translate("MainWindow", "Periodisity of payment:", nullptr));
        depositCapitalizOfInterest->setText(QCoreApplication::translate("MainWindow", "Capitalization of interest", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Accrued interest:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Tax amount:", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Deposit amount\n"
"by the end of the term:", nullptr));
        depositAccruedInterest->setText(QString());
        depositTaxAmount->setText(QString());
        depositAmontEndTerm->setText(QString());
        label_28->setText(QCoreApplication::translate("MainWindow", "Replenishments list / \320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        btn_replAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_replDel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_repl->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_repl->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Partial withdrawals list / \n"
"\320\241\320\277\320\270\321\201\320\276\320\272 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\321\213\321\205 \321\201\320\275\321\217\321\202\320\270\320\271", nullptr));
        btn_pwdAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_pwdDel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_pwd->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_pwd->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Deposit \360\237\222\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
