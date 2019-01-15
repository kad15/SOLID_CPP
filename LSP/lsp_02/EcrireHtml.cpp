
/*----------------------------------------------------------------------------------------*/
/* Classe :   EcrireHtml                                                                  */
/*----------------------------------------------------------------------------------------*/
/* Description : Cette classe modelise un objet ecrivant un fichier html                  */
/*               pour illustrer les pricipes de SOLID                                     */
/* Declinaison : OCP Open/Close principe                                                  */
/* Pre-condition: Aucune                                                                  */
/*                                                                                        */
/* Input:   : Une instance d'un avion avec membres renseignes                             */
/*          : Si instanciee sans paramete affiche un message sur la console               */
/* Output   : un fichier dont le nom est celui de l'immatriculation de l'avion            */
/*            avec extension .html emplacement precise par la constante CHEMINFICHIER     */
/* Return:  : Une instance de cette classe                                                */
/*            Le code genere disponible de l'exterieur par getCodeHtml                    */
/*----------------------------------------------------------------------------------------*/
/* Modification : OCP : appel a une fonction pour la realisation de chaque ligne          */
/*                      du tableau aÂ  generer : extension plus facile                     */
/*----------------------------------------------------------------------------------------*/


#include<limits>
#include "EcrireHtml.h"
#include "Avion.h"

#include "GestionFichier.h"

#include<fstream>
#include <iostream>     // pour std::cout
#include <string>       // pour std::string
#include <sstream>      // pour std::stringstream

// #include "bits/stdc++.h" // pour stringstream

// Le separateur est different selon Linux/Windows
#ifdef _WIN32
const string SEP = "\\";
#else
const string SEP = "/";
#endif

// Utile pour ecrire le html
const string DEBUT_TR = "\t\t\t<tr>\n";
const string DEBUT_TD = "\t\t\t\t<td>";
const string FIN_TD = "</td>\n";
const string FIN_TR = "\t\t\t</tr>";

// Precise l'emplacement du fichier aÂ  generer
const string CHEMINFICHIER = "E:\\pages";

using namespace std;


// Constructeur sans parametre : message sur la console
EcrireHtml::EcrireHtml()
{
	//ctor
	cout << " !!!! EcrireHtml sans parametre !!!!! : \n Rien a  dire !" << endl;
}

/* Constructeur principal                                                              */
/* Input:   : Une instance d'avion avec membres renseignes                             */
/* Output   : réalise un fichier dont le nom est celui de l'immatriculation de l'avion         */
/*            avec extension .html emplacement precise par la constante CHEMINFICHIER  */
EcrireHtml::EcrireHtml(Avion &cetAvion)
{
	// Demande la construction du code HTML pour cet avion
	setCodeHtml(FabriqueHtmlPourAvion(cetAvion));

	// Calcule le nom du fichier a generer !!! Attention separateur Linux/Windows
	string nomFichier = CHEMINFICHIER;
	nomFichier.append(SEP).append(cetAvion.getImmatriculation()).append(".html");

	//Ecris le fichier "immatriculation.html" sur le disque dans le repertoire pages
	GestionFichier uneGestionFichier(nomFichier, getCodeHtml());

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

// assesseur : renvoie la valeur du membre leCodeHtml
/* la chaine renvoyee contient la totalite du code genere */
string EcrireHtml::getCodeHtml()
{
	return this->leCodeHtml;
}


// Construit et renvoie le code html des infos de l'avion
string  EcrireHtml::FabriqueHtmlPourAvion(Avion & cetAvion)
{
	// Est utilise pour construire la chaine du code html
	stringstream htmlStream;

	// FabriqueEnTeteHtml(cetAvion.GetImmatriculation());
	htmlStream << FabriqueEnTeteHtml(cetAvion.getImmatriculation());

	// fabrique un flux avec le texte html
	htmlStream << "\t\t<table>\n";
	htmlStream << FabriqueLigneTableauHtml("Immatriculation :", cetAvion.getImmatriculation());
	htmlStream << FabriqueLigneTableauHtml("Type avion :", cetAvion.getTypeAvion());
	htmlStream << FabriqueLigneTableauHtml("Type de piste :", cetAvion.getTypePiste());
	htmlStream << FabriqueLigneTableauHtml("Ann&eacute;e de mise en service :", cetAvion.getAnneeMiseEnService());
	htmlStream << "\t\t</table>\n";
	htmlStream << "\t</body>\n</html>";

	// Renvoie la conversion du flux en chaine
	return htmlStream.str();
}


// Construit et renvoie le code html d'une ligne de tableau html
// parametre string legende : le texte de la ligne (colonne 1)
// parametre string contenu : la chaine representant la valeur (colonne 2)
string  EcrireHtml::FabriqueLigneTableauHtml(string legende, string contenu)
{
	string strRetour = DEBUT_TR + DEBUT_TD + legende + FIN_TD;
	strRetour += DEBUT_TD + contenu + FIN_TD + FIN_TR + "\n";
	return strRetour;
}

// Construit et renvoie le code html d'une ligne de tableau html
// parametre string legende : le texte de la ligne (colonne 1)
// parametre int contenu : la valeur (colonne 2)
string  EcrireHtml::FabriqueLigneTableauHtml(string legende, int contenu) // Avant
{
	string strRetour = DEBUT_TR + DEBUT_TD + legende + FIN_TD;
 	strRetour += DEBUT_TD + std::to_string(contenu) + FIN_TD + FIN_TR + "\n";
	return strRetour;
}


// Construit et renvoie le code html du debut de la page
string  EcrireHtml::FabriqueEnTeteHtml(const std::string & leTexteDuTitre)
{
	string htmlTitreString = "<!doctype html>\n<html lang=\"fr\">\n";
	htmlTitreString.append("\t<head>\n\t\t <meta charset = \"utf-8\">\n");
	htmlTitreString.append("\t\t<title>D&eacute; tail de l'avion : ");
	htmlTitreString.append(leTexteDuTitre);
	htmlTitreString.append("</title>\n\t</head>\n\t<body>\n");
	return htmlTitreString;
}




