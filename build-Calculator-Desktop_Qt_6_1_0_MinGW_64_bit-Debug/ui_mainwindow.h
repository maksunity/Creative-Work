/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *push_button_change_curr;
    QPushButton *push_button_fourth_var;
    QPushButton *push_button_third_var;
    QPushButton *push_button_second_var;
    QPushButton *push_button_first_var;
    QLabel *label;
    QLabel *label_2;
    QLabel *proc;
    QLineEdit *enter_pro;
    QLabel *rub_us;
    QLineEdit *enter_rub_us;
    QLabel *kop_cnt;
    QLineEdit *enter_kop_cnt;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(738, 601);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/img/bank_1.jpg"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(40, 43, 51)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QMainWindow { \n"
"background-color: #95EF8F }\n"
""));
        push_button_change_curr = new QPushButton(centralwidget);
        push_button_change_curr->setObjectName(QString::fromUtf8("push_button_change_curr"));
        push_button_change_curr->setGeometry(QRect(610, 100, 111, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Monaco")});
        font1.setPointSize(11);
        push_button_change_curr->setFont(font1);
        push_button_change_curr->setMouseTracking(false);
        push_button_change_curr->setTabletTracking(false);
        push_button_change_curr->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(255, 86, 104);\n"
"	 border-width: 1px; \n"
"	 border-style: solid;\n"
"	border: 1px solid rgb(0, 0, 0);\n"
" 	 border-radius: 10px;\n"
" 	 color: black;\n"
"	font-family: Monaco;\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #8BBBA6;\n"
" 	border-width: 2px; \n"
" 	border-style: solid;\n"
"  	border-radius: 8px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{ \n"
"	background-color: rgb(250, 250, 250);\n"
"	border-width: 2px; \n"
" 	border-style: solid;\n"
"  	border-radius: 10px;\n"
"	color: green;\n"
"	font-family: Monaco;\n"
"}"));
        push_button_fourth_var = new QPushButton(centralwidget);
        push_button_fourth_var->setObjectName(QString::fromUtf8("push_button_fourth_var"));
        push_button_fourth_var->setGeometry(QRect(389, 370, 301, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Monaco")});
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        push_button_fourth_var->setFont(font2);
        push_button_fourth_var->setMouseTracking(false);
        push_button_fourth_var->setTabletTracking(false);
        push_button_fourth_var->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding:4px;\n"
"    color: #fff;\n"
"    border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"    background-color: rgb(0, 204, 255);\n"
"	font-family: Monaco;\n"
" }\n"
"\n"
"QPushButton:hover{\n"
"	border-color: rgb(47, 48, 46);\n"
"	background-color: rgb rgb(170, 255, 255);\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	font: large;\n"
"	border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"	font-family: Monaco;\n"
"font-style: italic;\n"
"font-weight: 900;\n"
"}\n"
"\n"
"\n"
""));
        push_button_third_var = new QPushButton(centralwidget);
        push_button_third_var->setObjectName(QString::fromUtf8("push_button_third_var"));
        push_button_third_var->setGeometry(QRect(40, 370, 301, 81));
        push_button_third_var->setFont(font2);
        push_button_third_var->setMouseTracking(false);
        push_button_third_var->setTabletTracking(false);
        push_button_third_var->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding:4px;\n"
"    color: #fff;\n"
"    border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"    background-color: rgb(0, 204, 255);\n"
"	font-family: Monaco;\n"
" }\n"
"\n"
"QPushButton:hover{\n"
"	border-color: rgb(47, 48, 46);\n"
"	background-color: rgb rgb(170, 255, 255);\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	font: large;\n"
"	border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"	font-family: Monaco;\n"
"font-style: italic;\n"
"font-weight: 900;\n"
"}\n"
"\n"
"\n"
""));
        push_button_second_var = new QPushButton(centralwidget);
        push_button_second_var->setObjectName(QString::fromUtf8("push_button_second_var"));
        push_button_second_var->setGeometry(QRect(389, 270, 301, 81));
        push_button_second_var->setFont(font2);
        push_button_second_var->setMouseTracking(false);
        push_button_second_var->setTabletTracking(false);
        push_button_second_var->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding:4px;\n"
"    color: #fff;\n"
"    border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"    background-color: rgb(0, 204, 255);\n"
"	font-family: Monaco;\n"
" }\n"
"\n"
"QPushButton:hover{\n"
"	border-color: rgb(47, 48, 46);\n"
"	background-color: rgb rgb(170, 255, 255);\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	font: large;\n"
"	border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"	font-family: Monaco;\n"
"font-style: italic;\n"
"font-weight: 900;\n"
"}\n"
"\n"
"\n"
""));
        push_button_first_var = new QPushButton(centralwidget);
        push_button_first_var->setObjectName(QString::fromUtf8("push_button_first_var"));
        push_button_first_var->setGeometry(QRect(40, 270, 301, 81));
        push_button_first_var->setFont(font2);
        push_button_first_var->setMouseTracking(false);
        push_button_first_var->setTabletTracking(false);
        push_button_first_var->setAcceptDrops(false);
        push_button_first_var->setAutoFillBackground(false);
        push_button_first_var->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    padding:4px;\n"
"    color: #fff;\n"
"    border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"    background-color: rgb(0, 204, 255);\n"
"	font-family: Monaco;\n"
" }\n"
"\n"
"QPushButton:hover{\n"
"	border-color: rgb(47, 48, 46);\n"
"	background-color: rgb rgb(170, 255, 255);\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	font: large;\n"
"	border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"	font-family: Monaco;\n"
"font-style: italic;\n"
"font-weight: 900;\n"
"}\n"
"\n"
"\n"
""));
        push_button_first_var->setCheckable(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 221, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Courier New")});
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setItalic(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 10, 81, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/two-arrows.png")));
        proc = new QLabel(centralwidget);
        proc->setObjectName(QString::fromUtf8("proc"));
        proc->setGeometry(QRect(390, 100, 31, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Monaco")});
        font4.setPointSize(15);
        font4.setBold(false);
        font4.setItalic(true);
        proc->setFont(font4);
        proc->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"font-family: Monaco;\n"
"}"));
        enter_pro = new QLineEdit(centralwidget);
        enter_pro->setObjectName(QString::fromUtf8("enter_pro"));
        enter_pro->setGeometry(QRect(310, 100, 71, 50));
        QFont font5;
        font5.setPointSize(15);
        enter_pro->setFont(font5);
        enter_pro->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" background-color: rgb(205, 255, 197); \n"
"border-width: 1px; \n"
" border-style: solid;  \n"
"border-radius: 4px; \n"
"color: black;\n"
"}\n"
"\n"
"\n"
"186, 203, 233"));
        rub_us = new QLabel(centralwidget);
        rub_us->setObjectName(QString::fromUtf8("rub_us"));
        rub_us->setGeometry(QRect(210, 80, 41, 41));
        rub_us->setFont(font4);
        rub_us->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"font-family: Monaco;\n"
"}"));
        enter_rub_us = new QLineEdit(centralwidget);
        enter_rub_us->setObjectName(QString::fromUtf8("enter_rub_us"));
        enter_rub_us->setGeometry(QRect(40, 80, 160, 40));
        enter_rub_us->setFont(font5);
        enter_rub_us->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" background-color: rgb(205, 255, 197); \n"
"border-width: 1px; \n"
" border-style: solid;  \n"
"border-radius: 4px; \n"
"color: black;\n"
"}\n"
"\n"
"\n"
""));
        kop_cnt = new QLabel(centralwidget);
        kop_cnt->setObjectName(QString::fromUtf8("kop_cnt"));
        kop_cnt->setGeometry(QRect(210, 148, 51, 41));
        kop_cnt->setFont(font4);
        kop_cnt->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"font-family: Monaco;\n"
"}"));
        enter_kop_cnt = new QLineEdit(centralwidget);
        enter_kop_cnt->setObjectName(QString::fromUtf8("enter_kop_cnt"));
        enter_kop_cnt->setGeometry(QRect(40, 150, 160, 40));
        enter_kop_cnt->setFont(font5);
        enter_kop_cnt->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" background-color: rgb(205, 255, 197); \n"
"border-width: 1px; \n"
" border-style: solid;  \n"
"border-radius: 4px; \n"
"color: black;\n"
"}\n"
"\n"
"\n"
" rgb(255, 86, 104)\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Bank", nullptr));
        push_button_change_curr->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\260 \320\222\320\260\320\273\321\216\321\202\321\213", nullptr));
        push_button_fourth_var->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\276\320\264 (\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\320\276)", nullptr));
        push_button_third_var->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\276\320\264 (\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\320\276 \320\275\320\260 \320\277\320\276\320\273\320\275\321\203\321\216 \321\202\321\213\321\201\321\217\321\207\321\203)", nullptr));
        push_button_second_var->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\276\320\264 (\320\237\321\200\320\276\321\206\320\265\320\275\321\202\321\213 \320\272\320\260\320\266\320\264\321\213\320\271 \320\274\320\265\321\201\321\217\321\206)", nullptr));
        push_button_first_var->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\276\320\264 (\320\237\321\200\320\276\321\206\320\265\320\275\321\202\321\213 \320\277\320\276 \320\276\320\272\320\276\321\207\320\260\320\275\320\270\321\216 \320\263\320\276\320\264\320\260)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        label_2->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"    padding:4px;\n"
"    color: #fff;\n"
"    border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"    background-color: rgb(0, 204, 255);\n"
" }\n"
"\n"
"QPushButton:hover{\n"
"	border-color: rgb(47, 48, 46);\n"
"	background-color: rgb rgb(170, 255, 255);\n"
"	color: balck;\n"
"	font-size: 14px;\n"
"	font:large;\n"
"	border-radius: 10px;\n"
"    border: 1px solid #3873d9;\n"
"}\n"
"\n"
"\n"
"", nullptr));
        label_2->setText(QString());
        proc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        rub_us->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\320\261.", nullptr));
        kop_cnt->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
