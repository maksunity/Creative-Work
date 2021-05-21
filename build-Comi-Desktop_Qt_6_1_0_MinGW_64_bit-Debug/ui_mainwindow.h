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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *sq;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLabel *label;
    QLabel *route;
    QLabel *fromto;
    QPushButton *res;
    QPushButton *clear;
    QPushButton *add_city;
    QPushButton *create;
    QLineEdit *city;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1056, 764);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sq = new QLabel(centralwidget);
        sq->setObjectName(QString::fromUtf8("sq"));
        sq->setGeometry(QRect(10, 620, 101, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(15);
        font.setBold(true);
        sq->setFont(font);
        sq->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 811, 591));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView {\n"
"\n"
"background-color: rgba(255, 255, 255, 150);\n"
"\n"
"}\n"
"\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 670, 131, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 670, 361, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Monaco")});
        font1.setPointSize(14);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"	font-family: Monaco;\n"
"}"));
        route = new QLabel(centralwidget);
        route->setObjectName(QString::fromUtf8("route"));
        route->setGeometry(QRect(110, 630, 421, 31));
        route->setFont(font1);
        route->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"	font-family: Monaco;\n"
"}"));
        fromto = new QLabel(centralwidget);
        fromto->setObjectName(QString::fromUtf8("fromto"));
        fromto->setGeometry(QRect(300, 460, 171, 31));
        res = new QPushButton(centralwidget);
        res->setObjectName(QString::fromUtf8("res"));
        res->setGeometry(QRect(800, 620, 241, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Monaco")});
        font2.setPointSize(11);
        res->setFont(font2);
        res->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(840, 20, 171, 71));
        clear->setFont(font2);
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        add_city = new QPushButton(centralwidget);
        add_city->setObjectName(QString::fromUtf8("add_city"));
        add_city->setGeometry(QRect(840, 110, 171, 71));
        add_city->setFont(font2);
        add_city->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        create = new QPushButton(centralwidget);
        create->setObjectName(QString::fromUtf8("create"));
        create->setGeometry(QRect(840, 200, 171, 71));
        create->setFont(font2);
        create->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        city = new QLineEdit(centralwidget);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(840, 280, 171, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Corbel")});
        font3.setPointSize(18);
        city->setFont(font3);
        city->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
" background-color: rgb(165, 249, 163); \n"
"border-width: 1px; \n"
" border-style: solid;  \n"
"border-radius: 4px; \n"
"color: black;\n"
"}\n"
"\n"
"\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-430, -10, 1831, 791));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/zemlia-mir-materiki-kontinenty-chernyi-fon.jpg")));
        MainWindow->setCentralWidget(centralwidget);
        label_3->raise();
        sq->raise();
        graphicsView->raise();
        label_2->raise();
        label->raise();
        route->raise();
        fromto->raise();
        res->raise();
        clear->raise();
        add_city->raise();
        create->raise();
        city->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1056, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sq->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265:", nullptr));
        label->setText(QString());
        route->setText(QString());
        fromto->setText(QString());
        res->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\320\265", nullptr));
        add_city->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\263\320\276\321\200\320\276\320\264", nullptr));
        create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\203\321\216 \320\272\320\260\321\200\321\202\321\203", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
