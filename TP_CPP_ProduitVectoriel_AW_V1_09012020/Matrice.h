#pragma once
#include "Vecteur.h"
class Vecteur;

class Matrice
{
	int m[3][3];

public:
	Matrice();
	Matrice(int tab[][3]);

	void affiche();

	friend Vecteur produit(Matrice m, Vecteur v);
	friend Vecteur produit(Matrice);
};

