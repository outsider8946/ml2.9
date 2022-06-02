#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class Point;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    std::vector<Point> mas;
    bool valid = false;
    int x,y;
};
#endif // MAINWINDOW_H
