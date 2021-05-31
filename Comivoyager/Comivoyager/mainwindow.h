#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QMessageBox>
#include <fstream>
#include "qtgraph.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QtGraph *myGraph;
    QGraphicsScene *scene = new QGraphicsScene(this);


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
