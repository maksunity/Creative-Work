#include "Comivoyager.h"
#include "Roads.h"
#include "ui_mainwindow.h"
#include <vector>
#include <QMessageBox>
#include <QLineEdit>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new myGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    connect(ui->res,SIGNAL(clicked()),this,SLOT(calculate()));
    connect(ui->create,SIGNAL(clicked()),this,SLOT(new_map()));
    connect(ui->add_city, SIGNAL(clicked()), this,SLOT(add_city()));
    connect(ui->clear, SIGNAL(clicked()), this, SLOT(clear()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clear()
{
    scene -> clear();
    scene->QGraphicsScene::update();
    cities.clear();
    result.clear();
    ui->city->setText(" ");
}

void MainWindow::new_map()
{
    int n = ui->city->text().toInt();
    if(n>2)
    {
       for (int i = 0; i < n; i++)
           {
           city *new_city = new city(QString::number(i+1), 0, i);
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


void MainWindow::add_city()
{
    if(!result.empty())
    {
    int k = cities.size() - 1;
    QString q = QString::number((cities[k]->name).toInt() + 1);
    city *new_city = new city(q, 0, 0);
    for (auto i : cities){
        if (*new_city == *i)
        {
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


void red_col(vector<vector<double>> & arr)
{
      for (int i = 0; i < arr.size(); i++)
      {
           int min = INT_MAX;
          for (int j = 0; j < arr[0].size(); j++)
          {
                if (min > arr[i][j] && arr[i][j] >= 0)
                     min = arr[i][j];
          }
           if (min != INT_MAX) {
               for (int j = 0; j < arr[0].size(); j++)
               {
                   if (arr[i][j] >= 0)
                  arr[i][j] -= min;
               }
           }
      }
}

void red_line(vector<vector<double>> & arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = INT_MAX;
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (min > arr[j][i] && arr[j][i] >= 0)
                min = arr[j][i];
        }
        if (min != INT_MAX) {
            for (int j = 0; j < arr[0].size(); j++)
            {
                if (arr[j][i] >= 0)
                    arr[j][i] -= min;
            }
        }
    }
}

int find_min_col(vector<vector<double>>& arr, int i, int j)
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

int find_min_line(vector<vector<double>>& arr, int i, int j)
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

Way find_way(vector<vector<double>>& arr)
{
    int max= -1;
    Way way{0, 0};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            if (arr[i][j] == 0) {
                int f = find_min_col(arr, i,j) + find_min_line(arr, i,j);
                if (f > max)
                {
                    max = f;
                    way.from = i;
                    way.to = j;
                }
            }
        }
    }
    arr[way.to][way.from]= -1;
    for (int i = 0; i < arr.size(); i++) {
        arr[way.from][i] = -1;
        arr[i][way.to] = -1;
    }
    return way;
}

int get_length(vector<vector<double>> mat, vector<Way> ans)
{
     int len = 0;
      Way current = ans[0];
      int count = 0;
      while (count < ans.size()) {
           for (int i = 0; i < ans.size(); i++) {
                Way next = ans[i];
                if (current.to == next.from) {
                     count++;
                     len += mat[current.from][current.to];
                     current = next;
                   break;
                }
           }
      }
      return len;
}

QString get_ans(vector<Way> ans)
{
     QString result = "";
        Way current = ans[0];
        result += QString::number(current.from + 1) + "->" + QString::number(current.to + 1);
      int count = 0;
      while (count < ans.size()) {
           for (int i = 0; i < ans.size(); i++) {
                Way next = ans[i];
                if (current.to == next.from) {
                     count++;
                         result += "->" + QString::number(next.to + 1);
                current = next;
                     break;
            }

        }

    }
      if(ans.size() > 4)
     result.chop(3);
      else
      {
        QString r = result.right(result.size() - 3);
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
      red_col(matrix);
      red_line(matrix);
      r.push_back(find_way(matrix));
      i++;
      }
  int sum = get_length(result, r);
  ui->route->setText(get_ans(r));
  ui->label->setText(QString::number(sum));
    }
}

