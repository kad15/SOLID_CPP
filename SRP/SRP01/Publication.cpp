#include "Publication.h"
#include <iostream>     // pour std::cout

Publication::Publication()
{
    //ctor
}

Publication::~Publication()
{
    //dtor
}


void Publication::AfficheDetails()
{
	/* si cout inconnu
	printf("Cet avion a comme immatriculation : %s\n" ,GetImmatriculation().c_str());
	*/
	cout << "Cet avion a comme immatriculation :\t" << getImmatriculation() << " !" << endl;
	cout << "Cet avion est du type :\t" << getTypeAvion() << " !" << endl;
	cout << "Mise en service en :\t" << getAnneeMiseEnService() << "\n" << endl;
}
