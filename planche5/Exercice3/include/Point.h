#ifndef POINT_H
#define POINT_H
#include <cmath>
#include <iostream>
class Point {
private:
    double x, y;
public:
    Point() : x(0), y(0) {}
    Point(double x, double y) : x(x), y(y) {}
    Point(const Point& p) : x(p.x), y(p.y) {}
    void affiche() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
    friend bool comparer(const Point& p1, const Point& p2);
    friend double distance(const Point& p1, const Point& p2);
    friend Point milieu(const Point& p1, const Point& p2);
};
#endif
