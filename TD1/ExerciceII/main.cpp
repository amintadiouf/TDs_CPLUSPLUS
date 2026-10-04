#include "Complexe2D.hpp"

int main()
{
    //Exercice II
    cout << endl << "Exercice II" << endl;

    Complexe2D z1(3.0, 4.0);
    Complexe2D z2(1.0, 2.0);

    cout << "z1 = " << z1.getReel()<< " + " << z1.getImaginaire() << "i" << endl;

    cout << "z2 = " << z2.getReel()<< " + " << z2.getImaginaire() << "i" << endl;

    //addition
    Complexe2D somme = z1 + z2;
    cout << "z1 + z2 = "<< somme.getReel();

    if (somme.getImaginaire() >= 0)
    {
        cout << " + " << somme.getImaginaire() << "i" << endl;
    }
    else
    {
        cout << " - " << -somme.getImaginaire() << "i" << endl;
    }

    //soustraction
    Complexe2D difference = z1 - z2;
    cout << "z1 - z2 = "<< difference.getReel();

    if (difference.getImaginaire() >= 0)
    {
        cout << " + " << difference.getImaginaire() << "i" << endl;
    }
    else
    {
        cout << " - " << -difference.getImaginaire() << "i" << endl;
    }

    //multiplication
    Complexe2D produit = z1 * z2;
    cout << "z1 * z2 = "<< produit.getReel();

    if (produit.getImaginaire() >= 0)
    {
        cout << " + " << produit.getImaginaire() << "i" << endl;
    }
    else
    {
        cout << " - " << -produit.getImaginaire() << "i" << endl;
    }

    //division
    Complexe2D division = z1 / z2;
    cout << "z1 / z2 = "
     << division.getReel();

    if (division.getImaginaire() >= 0)
    {
        cout << " + " << division.getImaginaire() << "i" << endl;
    }
    else
    {
        cout << " - " << -division.getImaginaire() << "i" << endl;
    }

    //comparaison
    if (z1 > z2)
    {
        cout << "z1 a un module plus grand que z2" << endl;
    }
    else if (z1 < z2)
    {
        cout << "z1 a un module plus petit que z2" << endl;
    }
    else
    {
        cout << "z1 et z2 ont le meme module" << endl;
    }
    return 0;
}