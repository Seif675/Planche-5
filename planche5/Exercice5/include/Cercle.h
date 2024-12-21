#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"
#include <cmath>

class Cercle {
private:
    double rayon;
    Point centre;
public:
    Cercle(double rayon, const Point &centre);
    Cercle(double rayon, double x, double y);

    void afficher() const;
    double getRayon() const;
    void setRayon(double rayon);
    Point getCentre() const;
    void translation(double dx, double dy);
    double surface() const;
    double perimetre() const;
    bool egalite(const Cercle &other) const;
    bool appartient(const Point &p) const;
};

#endif
