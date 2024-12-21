#include "Complexe.h"
#include <iostream>
#include <cmath>

Complexe::Complexe(double re, double img) : Re(re), Img(img) {}

void Complexe::afficher() const {
    std::cout << Re << " + " << Img << "i" << std::endl;
}

double Complexe::module() const {
    return std::sqrt(Re * Re + Img * Img);
}

Complexe Complexe::conjugue() const {
    return Complexe(Re, -Img);
}

Complexe Complexe::operator+(const Complexe& other) const {
    return Complexe(Re + other.Re, Img + other.Img);
}

Complexe Complexe::operator+(double val) const {
    return Complexe(Re + val, Img);
}

Complexe operator+(double val, const Complexe& c) {
    return Complexe(c.Re + val, c.Img);
}

Complexe Complexe::operator-(const Complexe& other) const {
    return Complexe(Re - other.Re, Img - other.Img);
}

Complexe Complexe::operator*(const Complexe& other) const {
    double newRe = Re * other.Re - Img * other.Img;
    double newImg = Re * other.Img + Img * other.Re;
    return Complexe(newRe, newImg);
}

Complexe Complexe::operator*(double val) const {
    return Complexe(Re * val, Img * val);
}

Complexe operator*(double val, const Complexe& c) {
    return Complexe(c.Re * val, c.Img * val);
}
