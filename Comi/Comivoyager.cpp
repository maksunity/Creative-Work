#include "Comivoyager.h"
#include "Roads.h"
#include "ui_mainwindow.h"
#include <vector>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new myGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    connect(ui->add_city, &QPushButton::released, this, &MainWindow::add_city);
    connect(ui->clear, &QPushButton::released, this, &MainWindow::clear);
    connect(ui->res,SIGNAL(clicked()),this,SLOT(calculate()));
    connect(ui->create,SIGNAL(clicked()),this,SLOT(create()));
}

void MainWindow :: create()
{
    int n = ui->city->text().toInt();
    if(n>1)
    {
       ui->city->clear();
       for (int i = 0; i < n; i++)
           {
           city *new_city = new city(QString::number(i + 1), 0, i);
           for (auto i : cities){
               if (*new_city == *i) {
                   delete new_city;
                   return;
               }
           }
           cities.push_back(new_city);
           scene->addItem(new_city);
           scene->QGraphicsScene::update();
            vector<double> t;
            for (int j = 0; j < n; j++)
                {
                 if (i == j)
                      t.push_back(-1);
                 else
                     {
                      int in;
                      in = rand()/1000 + 1;
                      t.push_back(in);
                     }
                }
            result.push_back(t);
           }
 for(int i = 0;i<cities.size();i++)
 {
    city* k1 =cities[i];
    int q1 = (cities[i]->name).toInt();
    for(int j = 0;j<cities.size();j++)
    {
        if(i!=j)
        {
    city* kj = cities[j];
    int qj = (cities[j]->name).toInt();
    double sj = result[q1 - 1][qj - 1];
    road* new_road = new road(k1, kj, sj);
    scene->addItem(new_road);
    scene->QGraphicsScene::update();
        }
    }
 }
    }
    else
    QMessageBox::warning(this, "Ошибка", "Введите корректное количество городов");
}


void MainWindow::clear() {
    scene -> clear();
    scene->QGraphicsScene::update();
    cities.clear();
    result.clear();
}

void MainWindow::add_city() {
    if(!result.empty())
    {
    int k = cities.size() - 1;
    QString q = QString::number((cities[k]->name).toInt() + 1);
    city *new_city = new city(q, 0, 0);
    for (auto i : cities){
        if (*new_city == *i) {
            delete new_city;
            return;
        }
    }
    cities.push_back(new_city);
    scene->addItem(new_city);
    scene->QGraphicsScene::update();
    vector<double>t;
    for (int j = 0; j < result.size()+1; j++)
        {
         if (result.size() == j)
              t.push_back(-1);
         else
             {
              int in;
              in = rand()/1000 + 1;
              t.push_back(in);
             }
        }
    result.push_back(t);
    for (int j = 0; j < result.size()-1; j++)
    {
        int in;
        in = rand()/1000 + 1;
        result[j].push_back(in);
    }
    k = cities.size() - 1;
    city* k1 =cities[k];
    int q1 = (cities[k]->name).toInt();
    for(int j = 0;j<cities.size();j++)
    {
        if(k!=j)
        {
    city* kj = cities[j];
    int qj = (cities[j]->name).toInt();
    double sj = result[q1 - 1][qj - 1];
    road* new_road = new road(k1, kj, sj);
    scene->addItem(new_road);
    scene->QGraphicsScene::update();
        }
    }
    for(int j = 0;j<cities.size();j++)
    {
        if(k!=j)
        {
    city* kj = cities[j];
    int qj = (cities[j]->name).toInt();
    double sj = result[qj - 1][q1 - 1];
    road* new_road = new road(kj, k1, sj);
    scene->addItem(new_road);
    scene->QGraphicsScene::update();
        }
    }
   }
}


void reductCol(vector<vector<double>> & arr) {
      for (int i = 0; i < arr.size(); i++) {
           int min = INT_MAX;
          for (int j = 0; j < arr[0].size(); j++) {
                if (min > arr[i][j] && arr[i][j] >= 0)
                     min = arr[i][j];
          }
           if (min != INT_MAX) {
               for (int j = 0; j < arr[0].size(); j++) {
                   if (arr[i][j] >= 0)
                  arr[i][j] -= min;
               }
           }
      }
}

void reductRow(vector<vector<double>> & arr) {
    for (int i = 0; i < arr.size(); i++) {
        int min = INT_MAX;
        for (int j = 0; j < arr[0].size(); j++) {
            if (min > arr[j][i] && arr[j][i] >= 0)
                min = arr[j][i];
        }
        if (min != INT_MAX) {
            for (int j = 0; j < arr[0].size(); j++) {
                if (arr[j][i] >= 0)
                    arr[j][i] -= min;
            }
        }
    }
}

int findMinCol(vector<vector<double>>& arr, int i, int j)
{
    int min = 100000;
    for (int k=0; k<arr.size(); k++)
    {
        if (min > arr[i][k] && arr[i][k]>=0 && k != j)
        {
            min=arr[i][k];
        }
    }
    return min;
}
int findMinRow(vector<vector<double>>& arr, int i, int j)
{
    int min = 100000;
    for (int k=0; k<arr.size(); k++)
    {
        if (min > arr[k][j] && arr[k][j] >= 0 && k != i)
        {
            min = arr[k][j];
        }
    }
    return min;
}

struct Way
{
    int from;
    int to;
};

Way FindWay(vector<vector<double>>& arr) {
    int max=-1;
    Way way{ 0, 0 };

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            if (arr[i][j] == 0) {
                int t = findMinCol(arr, i,j) + findMinRow(arr, i,j);
                if (t > max) {
                    max = t;
                    way.from = i;
                    way.to = j;
                }
            }
        }
    }
    arr[way.to][way.from]=-1;
    for (int i = 0; i < arr.size(); i++) {
        arr[way.from][i] = -1;
        arr[i][way.to] = -1;
    }
    return way;
}

int getLength(vector<vector<double>> matrix, vector<Way> solution) {
     int len = 0;
      Way current = solution[0];
      int count = 0;
      while (count < solution.size()) {
           for (int i = 0; i < solution.size(); i++) {
                Way next = solution[i];
                if (current.to == next.from) {
                     count++;
                     len += matrix[current.from][current.to];
                     current = next;
                   break;
                }
           }
      }
      return len;
}




QString getSolutionPath(vector<Way> solution) {
     QString result = "";
        Way current = solution[0];
        result += QString::number(current.from + 1) + " -> " + QString::number(current.to + 1);
      int count = 0;
      while (count < solution.size()) {
           for (int i = 0; i < solution.size(); i++) {
                Way next = solution[i];
                if (current.to == next.from) {
                     count++;
                         result += " -> " + QString::number(next.to + 1);
                current = next;
                     break;
            }

        }

    }
      if(solution.size() > 4)
     result.chop(3);
      else
      {
        QString  r = result.right(result.size() - 3);
        result = r;
      }
     return result;
}


void MainWindow :: calculate()
{
    if(!result.empty())
    {
 vector<vector<double>> matrix = result;
 vector<Way> r;
      int i = 0;
      while (i != matrix.size()) {
      reductCol(matrix);
      reductRow(matrix);
      r.push_back(FindWay(matrix));
      i++;
      }
  int sum = getLength(result, r);
  ui->route->setText(getSolutionPath(r));
  ui->label->setText(QString::number(sum));
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
