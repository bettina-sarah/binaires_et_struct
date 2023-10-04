//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//struct Contact_s
//{
//	char Nom[20];
//	char Genre;
//	long long Telephone;
//};
//
//void main(void)
//{
//	string NomFichier = ".\\contacts.bin";
//	Contact_s Contact1;
//
//	fstream Fichier;
//	Fichier.open(NomFichier, ios::in| ios::out| ios::binary);
//
//	//avant le write (contact1 est vide)
//	/*Contact1.Nom[0] = { 'L' };
//	Contact1.Nom[1] = { 'e' };
//	Contact1.Nom[2] = { 'a' };
//	Contact1.Genre = 'F';
//	Contact1.Telephone = 537356745;*/
//
//	Fichier.seekg(sizeof(Contact_s) * (2 - 1), ios::beg); // Leo is 1
//
//	Fichier.read((char*)&Contact1, sizeof(Contact_s));
//
//	Contact1.Genre = 'O'; // changement dans variable
//
//	Fichier.seekp(sizeof(Contact_s) * (2 - 1), ios::beg);
//	Fichier.write((char*)& Contact1, sizeof(Contact_s)); // changement dans FICHIER !!!!
//
//	int PointeurLecture = Fichier.tellg();
//	cout << PointeurLecture;
//	int PointeurEcriture = Fichier.tellp();
//	cout << PointeurEcriture;
//
//
//
//
//	//Fichier.read((char*)&Contact1, sizeof(Contact_s)); // ecrit 1 char a la fois, dans un espace de 32 octets (sizeof struct)
//	////pas possible d'utiliser des vecteurs variables. juste tableaux
//
//	cout << Contact1.Genre << endl;
//
//	//cout << Contact1.Nom << endl;
//	//Fichier.read((char*)&Contact1, sizeof(Contact_s)); // !! si tu veux tt read, faut executer read plusieurs fois
//	//cout << Contact1.Nom << endl;
//
//	// pointeur se deplace de 32 octets chaque fois
//
//	Fichier.close();

