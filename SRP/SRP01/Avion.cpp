/*----------------------------------------------------------------------------------------*/
// Projet :   SRP_01                                                                      //
// Classe :   Avion                                                                       //
/*----------------------------------------------------------------------------------------*/
/* Description : Exemple pour illustrer les pricipes de SOLID                             */
/* Declinaison : Single responsibility principle (Responsabilité unique)                  */
/*               Une classe doit avoir une et une seule responsabilite.                   */
/*                                                                                        */
/*                                                                                        */
/* Pre-condition: Aucune                                                                  */
/*                                                                                        */
/* Modifications :  Chercher les erreurs et les maladresses.                              */
/*                                                                                        */
/*                                                                                        */
/*----------------------------------------------------------------------------------------*/

//#include "pch.h"
#include "Avion.h"


#include <fstream>

#include <string>       // pour std::string
#include <sstream>      // pour std::stringstream

//#include "bits/stdc++.h" // pour stringstream  sous Linux

using namespace std;


// Ou constructeur avec valeur par defaut !
Avion::Avion()
{
	// Constructeur
	immatriculation = "inconnue";
	typeAvion       = "inconnu";
	anneeMiseEnService = 0;
}

Avion::~Avion()
{
	// Destructeur
}

// mutateur : renseigne l'immatriculation de l'avion
void Avion::SetImmatriculation(const string & uneImmat)  // notez le const
{
	this->immatriculation = uneImmat;
}

// accesseur : renvoie l'immatriculation de l'avion
std::string & Avion::getImmatriculation()
{
	return this->immatriculation;
}


// mutateur : renseigne le type de l'avion
void Avion::setTypeAvion(const std::string & unTypeAvion)
{
	this->typeAvion = unTypeAvion;
}

// accesseur : renvoie  le type de l'avion
std::string & Avion::getTypeAvion()
{
	return this->typeAvion;
}



// mutateur : renseigne l'annee de mise en service
void Avion::setAnneeMiseEnService(int uneAnnee)
{
	this->anneeMiseEnService = uneAnnee;
}

// accesseur : renvoie l'annee de mise en service
int Avion::getAnneeMiseEnService()
{
	return this->anneeMiseEnService;
}




void Avion::EcrireDetailsHtml(const std::string & unTypeAvion)
{
	// Utile pour convertir int en string
	stringstream htmlStream;

	// Fabrique le nom du fichier html
	string nomFichier = "E:\\pages\\" + getImmatriculation() + ".html";
	// Utile pour ecrire le html
	const string debut_tr = "\t\t\t<tr>\n";
	const string debut_td = "\t\t\t\t<td>";
	const string fin_td = "</td>\n";
	const string fin_tr = "\t\t\t</tr>";


	// Fabrique un flux avec le texte html
	htmlStream << "<!doctype html>\n<html lang=\"fr\">\n\t<head>\n\t\t<meta charset = \"utf-8\">\n\t\t<title>D&eacute;tail avion : ";
	htmlStream << getImmatriculation();
	htmlStream << "</title>\n";
	htmlStream << "\t</head>\n";
	htmlStream << "\t<body>\n\t\t<table>\n";
	htmlStream << debut_tr + debut_td + "Immatriculation :" + fin_td;
	htmlStream << debut_td + getImmatriculation() + fin_td + fin_tr;
	htmlStream << "\n" + debut_tr + debut_td + "Type avion :" + fin_td;
	htmlStream << debut_td + getTypeAvion() + fin_td + fin_tr;
	htmlStream << "\n" + debut_tr + debut_td + "Ann&eacute;e mise en service :" + fin_td;
	htmlStream << debut_td;
	htmlStream << getAnneeMiseEnService();
	htmlStream << fin_td + fin_tr;
	htmlStream << "\n\t\t</table>\n";
	htmlStream << "\t</body>\n</html>";

	// Cree un flux imput et ouvre le fichier en ecriture et remplace si existe
	fstream leFichier(nomFichier.c_str(), ios::out);
	// ferme le fichier en terminant l'association avec le flux
	leFichier.close();


	// try/catch : pas pour DO 332 !!!
	// Ouvre le fichier en mode ajout/ecriture
	leFichier.open(nomFichier.c_str(), ios::out | ios::trunc);

	// envoie la chaine du flux dans le fichier
	leFichier << htmlStream.str() << endl;

	// ferme le fichier
	leFichier.close();

}


void Avion::Decoller(const std::string & unTypeAvion)
{
	cout << getImmatriculation() << " : ... V1... V2 ... Decollage !\n" << endl;
}
