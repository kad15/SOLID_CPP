/*----------------------------------------------------------------------------------------*/
// Projet :   SRP                                                                         //
// Classe :   SRP_01.cpp                                                                  //
/*----------------------------------------------------------------------------------------*/
/* Description : Exemple pour illustrer les pricipes de SOLID                             */
/* Declinaison : Single responsibility principle (Responsabilité unique)                  */
/*               Une classe doit avoir une et une seule responsabilite.                   */
/*                                                                                        */
/*                                                                                        */
/* Pre-condition: Aucune                                                                  */
/*                                                                                        */
/* Modifications :  Cas general pre-requis pour etude.                                    */
/*                                                                                        */
/*                                                                                        */
/*----------------------------------------------------------------------------------------*/


//#include "pch.h"
#include <limits>
#include "Avion.h"

#include <iostream>
#include <stdio.h>
#include <Publication.h>

using namespace std;
int main()
{
	std::cout << "Hello world SRP 01 !\n\n" << endl;


	// DO 332 : statique ! ! !
	// Nouvelle instance de Avion
	Avion unAvion;
	Publication pub;
	// Des valeurs par défaut
	pub.AfficheDetails();

	// Renseigne le membre immmatriculation
	unAvion.SetImmatriculation("F-FIXE");       // !!! Convention ecriture !
	// Renseigne le membre typeAvion
	unAvion.setTypeAvion("A320");
	// Renseigne le membre anneeMiseEnService
	unAvion.setAnneeMiseEnService(2004);
	// Voir le membre immatriculation
	unAvion.AfficheDetails();
	// Fabrique le fichier html pour cet avion
	unAvion.EcrireDetailsHtml(unAvion.getImmatriculation());

	// Nouvelle instance de Avion
	Avion unAutreAvion;
	// Renseigne le membre immmatriculation
	unAutreAvion.SetImmatriculation("F-RETR");
	// Renseigne le membre typeAvion
	unAutreAvion.setTypeAvion("A350");
	// Renseigne le membre anneeMiseEnService
	unAutreAvion.setAnneeMiseEnService(2008);
	// Voir le membre immatriculation
	unAutreAvion.AfficheDetails();
	// Fabrique le fichier html pour cet avion
	unAutreAvion.EcrireDetailsHtml(unAutreAvion.getImmatriculation());

	// unAvion décolle
	unAvion.Decoller(unAvion.getImmatriculation());
	// unAutreAvion décolle
	unAutreAvion.Decoller(unAutreAvion.getImmatriculation());

	std::cout << "Appuyez sur Enter pour continuer...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return 0;
}
