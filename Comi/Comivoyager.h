#ifndef COMIVOYAGER_H
#define COMIVOYAGER_H

#include <QMainWindow>
#include "Cities.h"
#include <QGraphicsView>
#include <vector>
#include "Roads.h"
#include "Graph.h"
#include <QKeyEvent>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void calculate();
    void add_city();
    void create();
    void clear();
private:
    Ui::MainWindow *ui;
    city* s;
    vector<city*> cit;
    vector<vector<double>> res;
public:
    myGraphicsScene* scene;
    vector<city*> cities;
    vector<vector<double>> result;
};

#endif // COMIVOYAGER_H