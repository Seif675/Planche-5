#include "Point.h"
int main() {
    Point p1(3, 4);
    Point p2(6, 8);
    std::cout << "Point 1 : ";
    p1.affiche();
    std::cout << "Point 2 : ";
    p2.affiche();
    if (comparer(p1, p2)) {
        std::cout << "Les points sont identiques." << std::endl;
    } else {
        std::cout << "Les points sont differents." << std::endl;
    }
    std::cout << "La distance entre les deux points est : " << distance(p1, p2) << std::endl;
    Point p_milieu = milieu(p1, p2);
    std::cout << "Le point milieu est : ";
    p_milieu.affiche();
    return 0;
}
