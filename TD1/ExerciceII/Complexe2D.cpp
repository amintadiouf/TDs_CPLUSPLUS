#include "Complexe2D.hpp"
#include <cmath>

//constructeur par defaut
Complexe2D::Complexe2D()
{
    reel = 0.0;
    imaginaire = 0.0;
}

//constructeur avec reel et imaginaire
Complexe2D::Complexe2D(double r, double i)
{
    reel = r;
    imaginaire = i;
}

//constructeur avec la meme valeur pour reel et imaginaire
Complexe2D::Complexe2D(double val)
{
    reel = val;
    imaginaire = val;
}

//constructeur de copie
Complexe2D::Complexe2D(const Complexe2D& copie)
{
    reel = copie.reel;
    imaginaire = copie.imaginaire;
}

//getter du reel
double Complexe2D::getReel() const
{
    return reel;
}

//setter du reel
void Complexe2D::setReel(double r)
{
    reel = r;
}

//getter de l'imaginaire
double Complexe2D::getImaginaire() const
{
    return imaginaire;
}

//setter de l'imaginaire
void Complexe2D::setImaginaire(double i)
{
    imaginaire = i;
}

//calcul du module
double Complexe2D::module() const
{
    return sqrt(reel * reel + imaginaire * imaginaire);
}

//addition
Complexe2D Complexe2D::operator+(const Complexe2D& comp) const
{
    return Complexe2D(reel + comp.reel, imaginaire + comp.imaginaire);
}

//soustraction
Complexe2D Complexe2D::operator-(const Complexe2D& comp) const
{
    return Complexe2D(reel - comp.reel, imaginaire - comp.imaginaire);
}

//multiplication
Complexe2D Complexe2D::operator*(const Complexe2D& comp) const
{
    double r = reel * comp.reel - imaginaire * comp.imaginaire;
    double i = reel * comp.imaginaire + imaginaire * comp.reel;

    return Complexe2D(r, i);
}

//division
Complexe2D Complexe2D::operator/(const Complexe2D& comp) const
{
    double denom = comp.reel * comp.reel + comp.imaginaire * comp.imaginaire;

    double r = (reel * comp.reel + imaginaire * comp.imaginaire) / denom;
    double i = (imaginaire * comp.reel - reel * comp.imaginaire) / denom;

    return Complexe2D(r, i);
}

//operateur <
bool Complexe2D::operator<(const Complexe2D& comp) const
{
    return module() < comp.module();
}

//operateur >
bool Complexe2D::operator>(const Complexe2D& comp) const
{
    return module() > comp.module();
}