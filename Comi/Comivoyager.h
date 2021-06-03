#ifndef COMIVOYAGER_H
#define COMIVOYAGER_H

#include <QMainWindow>
#include "Cities.h"
#include <QGraphicsView>
#include <vector>
#include "Drawline_city.h"
#include "Mouse_event.h"
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

private slots:
    void calc();
    void clear();
    void new_map();
    void add_city();

private:
    Ui::MainWindow *ui;
    city* c;
    vector<city*> city_;
    vector<vector<double>> res;

public:
    myGraphicsScene* scene;
    vector<city*> cities;
    vector<vector<double>> result;
};

#endif // COMIVOYAGER_H
