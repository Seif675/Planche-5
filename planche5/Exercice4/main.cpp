#include <iostream>
#include "Complexe.h"

int main() {
    Complexe c1(3, 4), c2(1, 2);
    std::cout << "Affichage de c1: ";
    c1.afficher();
    std::cout << "Affichage de c2: ";
    c2.afficher();
    std::cout << "Module de c1: " << c1.module() << std::endl;
    Complexe c3 = c1 + c2;
    std::cout << "c1 + c2: ";
    c3.afficher();
    Complexe c4 = c1 + 2.0;
    std::cout << "c1 + 2.0: ";
    c4.afficher();
    Complexe c5 = 2.0 + c1;
    std::cout << "2.0 + c1: ";
    c5.afficher();
    Complexe c6 = c1 - c2;
    std::cout << "c1 - c2: ";
    c6.afficher();
    Complexe c7 = c1 * c2;
    std::cout << "c1 * c2: ";
    c7.afficher();
    Complexe c8 = c1 * 2.0;
    std::cout << "c1 * 2.0: ";
    c8.afficher();
    Complexe c9 = 2.0 * c1;
    std::cout << "2.0 * c1: ";
    c9.afficher();
    Complexe c10 = c1.conjugue();
    std::cout << "Conjugue de c1: ";
    c10.afficher();
    return 0;
}
