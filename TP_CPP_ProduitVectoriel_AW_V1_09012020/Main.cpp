#include<iostream>

using namespace std;

int main()
{
	int A[3] = { 1,2,3 }, B[3][3] = { {4,2,1},{8,7,0},{3,5,6} };
	Vecteur V(A);
	Matrice M(B);

	cout << "Affichage du vecteur V: " << endl;
	V.affiche();
	cout << endl << "Affichage de la matrice M: " << endl;
	M.affiche();
	Vecteur res;
	cout << endl << "Appel avec la fonction independante: " << endl;
	res = produit(M, V);
	cout << "Le vecteur produit M*V: " << endl;
	res.affiche();

	cout << endl << "Appel avec la fonction membre: " << endl;
	res = V.produit(M);
	cout << "Le vecteur produit M*V: " << endl;
	res.affiche();

	return 0;
}