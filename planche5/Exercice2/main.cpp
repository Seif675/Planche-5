#include "Vecteur3D.h"
#include <iostream>

int main() {
    Vecteur3D v1(1.0, 2.0, 3.0);
    Vecteur3D v2(4.0, 5.0, 6.0);
    std::cout << "Vecteur 1: ";
    v1.afficher();
    std::cout << "Vecteur 2: ";
    v2.afficher();
    Vecteur3D sommeVecteurs = v1.somme(v2);
    std::cout << "Somme des vecteurs: ";
    sommeVecteurs.afficher();
    float produitScalaire = v1.produitScalaire(v2);
    std::cout << "Produit scalaire des vecteurs: " << produitScalaire << "\n";
    bool coincide = v1.coince(v2);
    std::cout << "Les vecteurs coincident: " << (coincide ? "Oui" : "Non") << "\n";
    float normeV1 = v1.norme();
    std::cout << "Norme de v1: " << normeV1 << "\n";
    Vecteur3D vMaxValeur = Vecteur3D::normaxParValeur(v1, v2);
    std::cout << "Vecteur avec la plus grande norme (par valeur): ";
    vMaxValeur.afficher();
    Vecteur3D* vMaxAdresse = Vecteur3D::normaxParAdresse(v1, v2);
    std::cout << "Vecteur avec la plus grande norme (par adresse): ";
    vMaxAdresse->afficher();
    Vecteur3D& vMaxReference = Vecteur3D::normaxParReference(v1, v2);
    std::cout << "Vecteur avec la plus grande norme (par reference): ";
    vMaxReference.afficher();
    return 0;
}
