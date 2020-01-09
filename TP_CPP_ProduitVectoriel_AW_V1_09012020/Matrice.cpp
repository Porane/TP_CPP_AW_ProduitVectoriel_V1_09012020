#include "Matrice.h"
#include<iostream>
class Vecteur;

using namespace std;

Matrice::Matrice()
{
	for (int x = 0; x < 3; x++)
		for (int y = 0; y < 3; y++)
			m[x][y] = 0;
}


Matrice::Matrice(int tab[][3])
{
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
			cout << m[x][y] << " ";
		cout << endl;
	}
}

void Matrice::affiche()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}

Vecteur produit(Matrice m)
{
	Vecteur r;
	for (int x = 0; x < 3; x++)
	{
		r.vect[x] = 0;
		for (int y = 0; y < 3; y++) {
			r.vect[x] += m.m[x][y] * r.vect[y];
		}
	}
	return r;
}