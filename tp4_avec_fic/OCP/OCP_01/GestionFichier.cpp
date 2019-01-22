#include "GestionFichier.h"
#include <string>
#include <fstream>
GestionFichier::GestionFichier(const std::string nomFichier)
{
   // Cree un flux imput et ouvre le fichier en ecriture et remplace si existe
	fstream leFichier(nomFichier.c_str(), ios::out);
	// ferme le fichier en terminant l'association avec le flux
	leFichier.close();
std::ifstream fichier(nomFichier);

if (!fichier)
{
    cout <<<"pb sur fichier "<< endl;
}
else
{
	// Ouvre le fichier en mode ajout/ecriture
	leFichier.open(nomFichier.c_str(), ios::out | ios::trunc);

	// envoie la chaine du flux dans le fichier
	leFichier << getCodeHtml() << endl;

	// ferme le fichier
	leFichier.close();
}
}

GestionFichier::~GestionFichier()
{
    //dtor
}
