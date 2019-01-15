
#include "GestionFichier.h"
#include "EcrireHtml.h"
#include "Avion.h"

#include<fstream>
#include <iostream>     // pour std::cout
#include <string>       // pour std::string
#include <sstream>      // pour std::stringstream

using namespace std;



GestionFichier::GestionFichier(const std::string &nomFichier, const std::string &contenu)
{
	//// Cree un flux imput et ouvre le fichier en ecriture et remplace si existe
	fstream leFichier(nomFichier.c_str(), ios::out);
	//// ferme le fichier en terminant l'association avec le flux
	leFichier.close();
	std::ifstream fichier(nomFichier.c_str(), ios::in); // ou n'importe quel objet dérivant de std::ios
	if (!fichier) // ce test est vrai si l'ouverture échoue
	{
		// ERREUR
		cout << " Probleme sur fichier !" << endl;
	}
	else {
		// Ouvre le fichier en mode ajout/ecriture
		leFichier.open(nomFichier.c_str(), ios::out | ios::trunc);

		// envoie la chaine du flux dans le fichier
		leFichier << contenu << endl;

		// ferme le fichier
		leFichier.close();
	}
}


GestionFichier::~GestionFichier()
{
}




