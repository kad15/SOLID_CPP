/*----------------------------------------------------------------------------------------*/
// Projet :   OCP_01                                                                      //
// Classe :   OCP_01.cpp                                                                   //
/*----------------------------------------------------------------------------------------*/
/* Description : Exemple pour illustrer les pricipes de SOLID                             */
/* Declinaison : OCP Open/Close principe                                                  */
/*               Une classe doit être ouverte à l'extension,                              */
/*               mais fermée à la modification.                                           */
/*                                                                                        */
/*                                                                                        */
/* Pre-condition: Aucune                                                                  */
/*                                                                                        */
/* Modifications :  Rajout d'une instance d'avion (Hydravion)                             */
/*                                                                                        */
/*                                                                                        */
/*----------------------------------------------------------------------------------------*/

#include <limits>
#include "Publication.h"
#include "Avion.h"
#include <iostream>
#include <stdio.h>


using namespace std;


int main()
{
	cout << "Hello world OCP Version 01 !\n" << endl;

	// Nouvelle instance de Avion
	Avion unAvion;
	// Renseigne le membre immmatriculation
	unAvion.setImmatriculation("F-FIXE");
	// Renseigne le membre typeAvion
	unAvion.setTypeAvion("A320");
	// Renseigne le membre anneeMiseEnService
	unAvion.setAnneeMiseEnService(2004);
	// Renseigne le type de piste
	unAvion.setTypePiste("sol");

	// Nouvelle instance de Avion
	Avion unAutreAvion;
	// Renseigne le membre immmatriculatiValueon
	unAutreAvion.setImmatriculation("F-RETR");
	// Renseigne le membre typeAvion
	unAutreAvion.setTypeAvion("A350");
	// Renseigne le membre anneeMiseEnService
	unAutreAvion.setAnneeMiseEnService(2008);
	// Renseigne le type de piste
	unAutreAvion.setTypePiste("sol");

	// Nouvelle instance de Avion
	Avion unHydraAvion;
	// Renseigne le membre immmatriculatiValueon
	unHydraAvion.setImmatriculation("F-AQUA");
	// Renseigne le membre typeAvion
	unHydraAvion.setTypeAvion("J3C-65");
	// Renseigne le membre anneeMiseEnService
	unHydraAvion.setAnneeMiseEnService(2000);
	// Renseigne le type de piste
	unHydraAvion.setTypePiste("eau");


	// Réalise la sortie des infos
	Publication unJournal(unAvion);
	Publication unAutreJournal(unAutreAvion);
	Publication unHydravionJournal(unHydraAvion);


	// unAvion décolle
	unAvion.Decoller();
	// unAutreAvion décolle
	unAutreAvion.Decoller();
	// unHydraAvion décolle
	unHydraAvion.Decoller();

	std::cout << "Appuyez sur Enter pour continuer...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return 0;
}
