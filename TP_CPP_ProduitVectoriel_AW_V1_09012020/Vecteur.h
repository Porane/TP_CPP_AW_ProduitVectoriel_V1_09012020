#pragma once

class Vecteur
{
public:
	
	int vect[3];

	Vecteur();
	Vecteur(int *tab);
	
	void affiche();

	friend Vecteur produit(Matrice m, Vecteur v);
};

