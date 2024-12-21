#include "Point.h"
bool comparer(const Point& p1, const Point& p2) {
    return (p1.x == p2.x) && (p1.y == p2.y);
}
double distance(const Point& p1, const Point& p2) {
    return std::sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}
Point milieu(const Point& p1, const Point& p2) {
    return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}
