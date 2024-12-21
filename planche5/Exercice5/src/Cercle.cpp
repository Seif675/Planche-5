#include "Cercle.h"
#include <iostream>

Cercle::Cercle(double rayon, const Point &centre) : rayon(rayon), centre(centre) {}

Cercle::Cercle(double rayon, double x, double y) : rayon(rayon), centre(Point(x, y)) {}

void Cercle::afficher() const {
    std::cout << "Cercle de rayon " << rayon << " et de centre ";
    centre.afficher();
    std::cout << std::endl;
}

double Cercle::getRayon() const {
    return rayon;
}

void Cercle::setRayon(double rayon) {
    this->rayon = rayon;
}

Point Cercle::getCentre() const {
    return centre;
}

void Cercle::translation(double dx, double dy) {
    centre.setX(centre.getX() + dx);
    centre.setY(centre.getY() + dy);
}

double Cercle::surface() const {
    return M_PI * rayon * rayon;
}

double Cercle::perimetre() const {
    return 2 * M_PI * rayon;
}

bool Cercle::egalite(const Cercle &other) const {
    return (rayon == other.rayon) && (centre.getX() == other.centre.getX()) && (centre.getY() == other.centre.getY());
}

bool Cercle::appartient(const Point &p) const {
    double distance = std::sqrt(std::pow(p.getX() - centre.getX(), 2) + std::pow(p.getY() - centre.getY(), 2));
    return distance <= rayon;
}
