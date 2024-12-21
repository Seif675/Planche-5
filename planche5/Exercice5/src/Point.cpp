#include "Point.h"
#include <iostream>

Point::Point(double x, double y) : x(x), y(y) {}

void Point::afficher() const {
    std::cout << "(" << x << ", " << y << ")";
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}
