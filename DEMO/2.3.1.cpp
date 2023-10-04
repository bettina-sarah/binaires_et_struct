#include <iostream>
#include <fstream>

using namespace std;

struct Produit_s
{
	int CodeProduit;
	char NomProduit[30];
	double PrixProduit;
};
void LireProduits();
void AjouterProduit();

void main(void)
{

	AjouterProduit();
}

void LireProduits()
{
	fstream Fichier;
	string NomFichier = "X:\\Temp\\produits1.bin";
	Produit_s Produit1;

	Fichier.open(NomFichier, ios:: in | ios::binary);

	if (Fichier.fail()) {
		cout << "Erreur";
		exit(EXIT_FAILURE);
	}

	Fichier.read((char*)&Produit1, sizeof(Produit_s));
	while (!Fichier.eof())
	{
		Fichier.read((char*)&Produit1, sizeof(Produit_s));

		cout << Produit1.CodeProduit << "\t" <<Produit1.NomProduit<<"\t"<< Produit1.PrixProduit << endl;
	}
	
	Fichier.close();

}

void AjouterProduit()
{
	fstream Fichier;
	string NomFichier = "X:\\Temp\\produits1.bin";

	Produit_s Produit1 = { 12345, "Motorola8000",999.99 };
	//Produit1.CodeProduit = 1111;
	//Produit1.NomProduit[0] = 'E';
	//Produit1.NomProduit[1] = 'a';
	//Produit1.NomProduit[2] = 'u';
	//Produit1.PrixProduit = 5;

	Produit_s Produit2;
	Produit2.CodeProduit = 2222;
	Produit2.NomProduit[0] = 'C';
	Produit2.NomProduit[1] = 'a';
	Produit2.NomProduit[2] = 'h';
	Produit2.NomProduit[3] = 'i';
	Produit2.NomProduit[4] = 'e';
	Produit2.NomProduit[5] = 'r';
	Produit2.PrixProduit = 10;


	Fichier.open(NomFichier, ios::app | ios::binary);

	if (Fichier.fail()) {
		cout << "Erreur";
		exit(EXIT_FAILURE);
	}

	Fichier.write((char*)&Produit1, sizeof(Produit_s));
	Fichier.write((char*)&Produit2, sizeof(Produit_s));


	Fichier.close();

	LireProduits();

}


