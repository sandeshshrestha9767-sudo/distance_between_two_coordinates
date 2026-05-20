#include<iostream>
#include<cmath>

class Point{//declaration part.
private:
    double x,y;

public:
    void setcoordinates(double x, double y);

    double distancefrom(const Point &anotherpoint) const;
};

void Point::setcoordinates(double x, double y){
    this->x = x;
    this->y = y;
}

double Point::distancefrom(const Point &anotherpoint) const{

    double sq_xdiff =
        pow(anotherpoint.x - this->x, 2);

    double sq_ydiff =
        pow(anotherpoint.y - this->y, 2);

    return sqrt(sq_xdiff + sq_ydiff);
}

int main(){

    Point p1;
    p1.setcoordinates(10,20);

    Point p2;
    p2.setcoordinates(0,10);

    std::cout
        << "distance = "
        << p1.distancefrom(p2)
        << std::endl;
}
