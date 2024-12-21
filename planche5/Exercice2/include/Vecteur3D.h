#ifndef VECTEUR3D_H
#define VECTEUR3D_H

class Vecteur3D {
private:
    float x, y, z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0);
    void afficher() const;
    Vecteur3D somme(const Vecteur3D& autre) const;
    float produitScalaire(const Vecteur3D& autre) const;
    bool coince(const Vecteur3D& autre) const;
    float norme() const;
    static Vecteur3D normaxParValeur(const Vecteur3D& v1, const Vecteur3D& v2);
    static Vecteur3D* normaxParAdresse(const Vecteur3D& v1, const Vecteur3D& v2);
    static Vecteur3D& normaxParReference(const Vecteur3D& v1, const Vecteur3D& v2);
};

#endif
