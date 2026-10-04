#ifndef COMPLEXE2D_HPP
#define COMPLEXE2D_HPP

#include <iostream>

using namespace std;

class Complexe2D
{
private:
    double reel;
    double imaginaire;

public:
    //constructeurs
    Complexe2D();
    Complexe2D(double, double);
    Complexe2D(double);
    Complexe2D(const Complexe2D&);

    //getters et setters
    double getReel() const;
    void setReel(double);

    double getImaginaire() const;
    void setImaginaire(double);

    //ce qu'on pourrai ajouté, le module
    double module() const;

    //operateurs
    Complexe2D operator+(const Complexe2D&) const;
    Complexe2D operator-(const Complexe2D&) const;
    Complexe2D operator*(const Complexe2D&) const;
    Complexe2D operator/(const Complexe2D&) const;

    //operateurs de comparaison
    bool operator<(const Complexe2D&) const;
    bool operator>(const Complexe2D&) const;
};
#endif