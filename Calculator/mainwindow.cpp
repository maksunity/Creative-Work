#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QTextStream>
#include <QLabel>
#include <QObject>
#include <QTextBrowser>
#include <QIntValidator>
#include <QMainWindow>
#include <QLineEdit>


MainWindow::MainWindow(QWidget *parent):

      QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->push_button_first_var,SIGNAL(clicked()),this,SLOT(operation_1()));
    connect(ui->push_button_second_var,SIGNAL(clicked()),this,SLOT(operation_2()));
    connect(ui->push_button_third_var,SIGNAL(clicked()),this,SLOT(operation_3()));
    connect(ui->push_button_fourth_var,SIGNAL(clicked()),this,SLOT(operation_4()));
    ui->enter_rub_us->setValidator( new QIntValidator);
    ui->enter_kop_cnt->setValidator( new QIntValidator);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::operation_1()
{
    QString check_1 = ui->enter_rub_us->text();
    QString check_2 = ui->enter_kop_cnt->text();
    QString check_3 = ui->enter_pro->text();
    QString txt;
    if ((check_1 != "" || check_2 != "") && check_3 != "")
    {
    double big, sum, little, proc;
    double res = 0;
    double check = 0;
    int count = 0;
    big = (ui->enter_rub_us->text()).toDouble();
    check = (ui->enter_kop_cnt->text()).toDouble();
    while (check > 99)
    {
      big++;
      check -= 100;
      count ++;
    }
    little = (ui->enter_kop_cnt->text()).toDouble();
    sum = big + ((little-count*100)/100);
    proc = (ui->enter_pro->text()).toDouble() /100 + 1;
    res = sum*proc;
    txt = QString::number(res,'g',15);
    QMessageBox::information(this, "Сумма, которую Вы получите", QString("Сумма: %1").arg(txt));
    } else
    {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
    }

}

void MainWindow::operation_2()
{
    QString check_1 = ui->enter_rub_us->text();
    QString check_2 = ui->enter_kop_cnt->text();
    QString check_3 = ui->enter_pro->text();
    QString txt;
    if ((check_1 != "" || check_2 != "") && check_3 != "")
    {
    double big, sum, little, proc;
    double res = 0;
    double check = 0;
    int count = 0;
    big = (ui->enter_rub_us->text()).toDouble();
    check = (ui->enter_kop_cnt->text()).toDouble();
    while (check > 99)
    {
      big++;
      check -= 100;
      count ++;
    }
    little = (ui->enter_kop_cnt->text()).toDouble();
    sum = big + ((little-count*100)/100);
    proc = (ui->enter_pro->text()).toDouble() /100 + 1;
    res = sum * proc;
    for (int i = 2; i<=12; i++){
        res = res*proc;
    }
    txt = QString::number(res,'g',15);
    QMessageBox::information(this, "Сумма, которую Вы получите", QString("Сумма: %1").arg(txt));
    }
    else
    {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
    }
}

void MainWindow::operation_3()
{
    QString check_1 = ui->enter_rub_us->text();
    QString check_2 = ui->enter_kop_cnt->text();
    QString check_3 = ui->enter_pro->text();
    QString txt;
    if ((check_1 != "" || check_2 != "") && check_3 != "")
    {
    double sum, little, proc;
    double res = 0;
    double check = 0;
    int count = 0;
    int big;
    int thousand = 0;
    big = (ui->enter_rub_us->text()).toDouble();
    check = (ui->enter_kop_cnt->text()).toDouble();
    while (check > 99)
    {
      big++;
      check -= 100;
      count ++;
    }
    little = (ui->enter_kop_cnt->text()).toDouble();
    sum = big + ((little-count*100)/100);
    proc = (ui->enter_pro->text()).toDouble();
    thousand = big/1000;
    if (thousand >= 1){
    for (int i = 1; i<=365; i++){
        thousand = big/1000;
        sum+= thousand*proc;
        big = sum;
        res = sum;
    }
    txt = QString::number(res,'g',15);
    QMessageBox::information(this, "Сумма, которую Вы получите", QString("Сумма: %1").arg(txt));
}
        else
        QMessageBox::information(this, "Сумма, которую Вы получите", QString("Сумма: %1").arg(sum));
    }
    else
    {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
    }
}

void MainWindow::operation_4()
{
    QString check_1 = ui->enter_rub_us->text();
    QString check_2 = ui->enter_kop_cnt->text();
    QString check_3 = ui->enter_pro->text();
    QString txt;
    if ((check_1 != "" || check_2 != "") && check_3 != "")
    {
    double big, sum, little, proc;
    double res = 0;
    double check = 0;
    int count = 0;
    big = (ui->enter_rub_us->text()).toDouble();
    check = (ui->enter_kop_cnt->text()).toDouble();
    while (check > 99)
    {
      big++;
      check -= 100;
      count ++;
    }
    little = (ui->enter_kop_cnt->text()).toDouble();
    sum = big + ((little-count*100)/100);
    proc = (ui->enter_pro->text()).toDouble() /100 + 1;
    res = sum * proc;
    for (int i = 2; i<=365; i++){
        res = res*proc;
    }
    txt = QString::number(res,'g',25);
    QMessageBox::information(this, "Сумма, которую Вы получите", QString("Сумма: %1").arg(txt));
    }
    else
    {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
    }
}






void MainWindow::on_push_button_change_curr_clicked()
{
    QString check = ui->rub_us->text();
    if (check == "Руб." )
    {
     ui->rub_us->setText("US.");
     ui->kop_cnt->setText("Cent.");
    }
    else
    {
        ui->rub_us->setText("Руб.");
        ui->kop_cnt->setText("Коп.");
    }
}





