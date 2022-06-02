#include "point.h"
#include<QPainter>
Point::Point(int x1,int y1,int size1):x(x1),y(y1),size(size1){}

 int Point::GetX()  {
    return x;
}

void Point::SetX(int x)
{
    this->x=x;
}

 int Point::GetY()
{
    return y;
}

void Point::SetY(int y)
{
    this-> y =y;
}
int Point::GetSize()
{
    return size;
}

void Point::SetSize(int size)
{
    this-> size = size;
}

void Point::draw(QPainter *painter)
{
    /*painter->drawLine(this->x,this->y+(cnt+cnt2)/2,this->x,this->y-(cnt+cnt2)/2);
    painter->drawLine(this->x-this->size,this->y,this->x+this->size,this->y);*/

        painter->drawLine(this->x,this->y-((size)/2),this->x,this->y+((size/2)));
        painter->drawLine((this->x+(size)/2),this->y,this->x-((size)/2),this->y);


}
int Point::GetThickness()
{
    return thickness;
}
void Point:: SetThickness(int thickness)
{
    this-> thickness = thickness;
}

int Point::distance2(const QPoint &point)
{
    int square = pow(this->GetX()-(point.x()),2) + pow((this->GetY()-point.y()),2);
   int ans= pow(square,0.5);
    return ans;

}
