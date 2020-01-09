#include "Vecteur.h"
#include "Matrice.h"
#include<iostream>

using namespace std;

Vecteur::Vecteur()
{
	for (int x = 0; x < 3; x++)
		vect[x] = 0;
}


Vecteur::Vecteur(int *tab)
{
	for (int x = 0; x < 3; x++)
		vect[x] = tab[x];
}

void Vecteur::affiche()
{
	cout << "(" << vect[0] << "," << vect[1] << "," << vect[2] << ")" << endl;
}

Vecteur produit(Matrice m, Vecteur v)
{
	Vecteur r;
	for (int x = 0; x < 3; x++)
	{
		r.vect[x] = 0;
		for (int y = 0; y < 3; y++) {
			r.vect[x] += m.m[x][y] * v.vect[y];
		}
	}
	return r;
}