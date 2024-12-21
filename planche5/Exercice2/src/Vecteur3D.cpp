#include "Vecteur3D.h"
#include <cmath>
#include <iostream>

Vecteur3D::Vecteur3D(float x, float y, float z) : x(x), y(y), z(z) {}
void Vecteur3D::afficher() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")\n";
}
Vecteur3D Vecteur3D::somme(const Vecteur3D& autre) const {
    return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
}
float Vecteur3D::produitScalaire(const Vecteur3D& autre) const {
    return x * autre.x + y * autre.y + z * autre.z;
}
bool Vecteur3D::coince(const Vecteur3D& autre) const {
    return x == autre.x && y == autre.y && z == autre.z;
}
float Vecteur3D::norme() const {
    return std::sqrt(x * x + y * y + z * z);
}
Vecteur3D Vecteur3D::normaxParValeur(const Vecteur3D& v1, const Vecteur3D& v2) {
    return v1.norme() > v2.norme() ? v1 : v2;
}
Vecteur3D* Vecteur3D::normaxParAdresse(const Vecteur3D& v1, const Vecteur3D& v2) {
    return (v1.norme() > v2.norme()) ? const_cast<Vecteur3D*>(&v1) : const_cast<Vecteur3D*>(&v2);
}
Vecteur3D& Vecteur3D::normaxParReference(const Vecteur3D& v1, const Vecteur3D& v2) {
    return v1.norme() > v2.norme() ? const_cast<Vecteur3D&>(v1) : const_cast<Vecteur3D&>(v2);
}

