#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <point.h>
#include <QMouseEvent>
#include <QPen>
#include<vector>
int cnt=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen(Qt::black);
    if(valid)
    {
       Point p(10,15,5);
       p.draw(&painter);
        for(int i = 0;i<mas.size();i++)
        {
            pen.setWidth(mas[i].GetThickness());
            painter.setPen(pen);
            mas[i].draw(&painter);
            pen.setWidth(1);
            painter.setPen(pen);
            if((i>0))
            {
                    painter.drawLine(mas[i].GetX(),mas[i].GetY(),mas[i-1].GetX(),mas[i-1].GetY());
            }
        }

     }
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{ 
   Point point(event->x(),event->y(),5);
   QPoint qpoint;
   qpoint.setX(10);
   qpoint.setY(15);
   /*if(point.distance2(qpoint)<=5)
   {
       point.SetSize(0);
       point.SetY(0);
       point.SetX(0);
   }*/
   mas.push_back(point);
   if(point.distance2(qpoint)<=5)
   {
       /*point.SetSize(0);
       point.SetY(0);
       point.SetX(0);*/
       mas.pop_back();
   }
   valid = true;
   repaint();

}

