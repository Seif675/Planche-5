#include <iostream>
#include "Cercle.h"

int main() {
    Point p1(10, 10);
    Cercle c1(1, p1);

    c1.afficher();
    std::cout << "Perimetre: " << c1.perimetre() << ", Surface: " << c1.surface() << std::endl;

    c1.setRayon(2);
    std::cout << "Après avoir double le rayon:" << std::endl;
    c1.afficher();
    std::cout << "Perimetre: " << c1.perimetre() << ", Surface: " << c1.surface() << std::endl;

    c1.translation(-10, -10);
    std::cout << "Après translation:" << std::endl;
    c1.afficher();

    Point p2(1, 1);
    std::cout << "Le point (1,1) est-il à l'interieur du cercle ? " << (c1.appartient(p2) ? "Oui" : "Non") << std::endl;

    Point p3(3, 3);
    std::cout << "Le point (3,3) est-il à l'interieur du cercle ? " << (c1.appartient(p3) ? "Oui" : "Non") << std::endl;

    Cercle c2(2, 0, 0);
    std::cout << "Les cercles c1 et c2 sont-ils egaux ? " << (c1.egalite(c2) ? "Oui" : "Non") << std::endl;

    return 0;
}
