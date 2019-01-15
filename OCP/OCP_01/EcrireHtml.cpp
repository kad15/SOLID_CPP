#include <limits>
#include "EcrireHtml.h"
#include "Avion.h"


#include<fstream>
#include <iostream>     // pour std::cout
#include <string>       // pour std::string
#include <sstream>      // std::stringstream

#ifdef _WIN32
const string SEP = "\\";
#else
const string SEP = "/";
#endif

// #include "bits/stdc++.h" // pour stringstream

using namespace std;

EcrireHtml::EcrireHtml()
{
	//ctor
	cout << " !!!! EcrireHtml sans parametre !!!!! : \n Rien a  dire !" << endl;
}

EcrireHtml::EcrireHtml(Avion &cetAvion)
{
	// Demande la construction du code HTML pour cet avion
	setCodeHtml(FabriqueHtmlPourAvion(cetAvion));



	// Calcule le nom du fichier a generer !!! Attention separateur Linux/Windows
	string nomFichier = "E:\\pages";

	nomFichier.append(SEP).append(cetAvion.getImmatriculation()).append(".html");
	//Ecris le fichier "immatriculation.html" sur le disque dans le repertoire pages
	FabriqueFichierHtml(nomFichier);
}

EcrireHtml::~EcrireHtml()
{
	//dtor
}


// Setter pour le membre leCodeHtml
void EcrireHtml::setCodeHtml(const std::string & unTxT)
{
	leCodeHtml = unTxT;
}


// accesseur : renvoie la valeur du membre leCodeHtml
string EcrireHtml::getCodeHtml()
{
	return this->leCodeHtml;
}


// Construit et renvoie le code html des infos de l'avion
string  EcrireHtml::FabriqueHtmlPourAvion(Avion & cetAvion) // Avant
{
	// Est utilise pour construire la chaine du code html
	stringstream htmlStream;

	// utile pour ecrire le html
	string debut_tr = "\t\t\t<tr>\n";
	string debut_td = "\t\t\t\t<td>";
	string fin_td = "</td>\n";
	string fin_tr = "\t\t\t</tr>";

	// FabriqueEnTeteHtml(cetAvion.GetImmatriculation());
	htmlStream << FabriqueEnTeteHtml(cetAvion.getImmatriculation());

	// fabrique un flux avec le texte html
	htmlStream << "\t\t<table>\n";
	htmlStream << debut_tr + debut_td + "Immatriculation :" + fin_td;
	htmlStream << debut_td + cetAvion.getImmatriculation() + fin_td + fin_tr;
	htmlStream << "\n" + debut_tr + debut_td + "Type avion :" + fin_td;
	htmlStream << debut_td + cetAvion.getTypeAvion() + fin_td + fin_tr;
	htmlStream << debut_tr + debut_td + "Type de piste :" + fin_td;
	htmlStream << debut_td + cetAvion.getTypePiste() + fin_td + fin_tr;
	htmlStream << "\n" + debut_tr + debut_td + "Ann&eacutee de mise en service :" + fin_td;
	htmlStream << debut_td;
	// Attention pas de concatenation avec valeur numerique !
	htmlStream << cetAvion.getAnneeMiseEnService();
	htmlStream << fin_td + fin_tr;
	htmlStream << "\n\t\t</table>\n";
	htmlStream << "\t</body>\n</html>";

	// Renvoie la conversion du flux en chaine
	return htmlStream.str();
}


// Construit et renvoie le code html du debut de la page
string  EcrireHtml::FabriqueEnTeteHtml(const std::string & leTexteDuTitre)
{
	string htmlTitreString = "<!doctype html>\n<html lang=\"fr\">\n\t<head>\n\t\t<meta charset = \"utf-8\">\n\t\t<title>D&eacute;tail de l'avion : ";
	htmlTitreString.append(leTexteDuTitre);
	htmlTitreString.append("</title>\n\t</head>\n\t<body>\n");
	return htmlTitreString;

}

// Ecris le fichier html dans le dossier pages
void  EcrireHtml::FabriqueFichierHtml(const std::string &nomFichier)
{
	// Cree un flux imput et ouvre le fichier en ecriture et remplace si existe
	fstream leFichier(nomFichier.c_str(), ios::out);
	// ferme le fichier en terminant l'association avec le flux
	leFichier.close();

	// Ouvre le fichier en mode ajout/ecriture
	leFichier.open(nomFichier.c_str(), ios::out | ios::trunc);

	// envoie la chaine du flux dans le fichier
	leFichier << getCodeHtml() << endl;

	// ferme le fichier
	leFichier.close();

}




