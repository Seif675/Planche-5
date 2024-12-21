#include "Etudiant.h"
#include <iostream>

int main() {
    Etudiant e1("Ahmed", 3);
    e1.saisie();
    e1.affichage();
    std::cout << "Moyenne: " << e1.moyenne() << "\n";
    std::cout << (e1.admis() ? "Admis" : "Non admis") << "\n";

    Etudiant e2("Seif", 3);
    e2.saisie();
    e2.affichage();
    std::cout << "Moyenne: " << e2.moyenne() << "\n";
    std::cout << (e2.admis() ? "Admis" : "Non admis") << "\n";

    if (Etudiant::comparer(e1, e2)) {
        std::cout << "les deux etudiants ont la meme moyenne.\n";
    } else {
        std::cout << "les deux etudiants ont des moyennes differentes.\n";
    }

    return 0;
}
