#ifndef POINT_H
#define POINT_H
class QPainter;
class QPen;
class QPoint;

class Point
{
private:
    int x=0;
    int y=0;
    int size =3;
    int thickness =1;
public:
    Point(int x1,int y1,int size1);
    int GetX();
    void SetX(int x);
    int GetY();
    void SetY(int y);
    int GetSize();
    void SetSize(int size=3);
    void draw(QPainter *painter);
    int GetThickness();
    void SetThickness(int thickness=1);
   int distance2(const QPoint &point);
};

#endif // POINT_H
