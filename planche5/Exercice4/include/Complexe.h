#ifndef COMPLEXE_H
#define COMPLEXE_H

class Complexe {
private:
    double Re;
    double Img;
public:
    Complexe(double re = 0.0, double img = 0.0);
    void afficher() const;
    double module() const;
    Complexe conjugue() const;

    Complexe operator+(const Complexe& other) const;
    Complexe operator+(double val) const;
    friend Complexe operator+(double val, const Complexe& c);

    Complexe operator-(const Complexe& other) const;
    Complexe operator*(const Complexe& other) const;
    Complexe operator*(double val) const;
    friend Complexe operator*(double val, const Complexe& c);
};

#endif
