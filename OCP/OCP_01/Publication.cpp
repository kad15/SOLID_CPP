
#include "Publication.h"
#include "Avion.h"
#include "EcrireHtml.h"



#include <iostream>     // pour std::cout
#include <string>       // pour std::string
#include <sstream>      // std::stringstream


using namespace std;


Publication::Publication()
{
	cout << "Dans Publication  sans avion !" << endl;
	//ctor
}

Publication::Publication(Avion &cetAvion)
{
	//ctor

	// Instance d'un objet EcrireHtml
	EcrireHtml unCodeHtmlAvecAvion(cetAvion);

	// Demande afficher a l'ecran les details de l'avion
	AfficheDetails(cetAvion);


}

Publication::~Publication()
{
	//dtor
}


// Affiche a l'ecran les details de l'avion
void Publication::AfficheDetails(Avion &cetAvion)
{
	cout << "Cet avion a comme immatriculation : " + cetAvion.getImmatriculation() + " !" << endl;
	cout << "Cet avion est du type : " + cetAvion.getTypeAvion() + " !" << endl;
	cout << "Cet avion est decolle sur piste de type : " + cetAvion.getTypePiste() + " !" << endl;
	cout << "Mise en service en : " << cetAvion.getAnneeMiseEnService() << "\n" << endl;
}
