
#include "AfficheDetails.h"
#include "Avion.h"


#include <string>       // pour std::string

using namespace std;


AfficheDetails::AfficheDetails(Avion &cetAvion)
{
	cout << "Cet avion a comme immatriculation : " + cetAvion.getImmatriculation() + " !" << endl;
	cout << "Cet avion est du type : " + cetAvion.getTypeAvion() + " !" << endl;
	cout << "Cet avion est decolle sur piste de type : " + cetAvion.getTypePiste() + " !" << endl;
	cout << "Mise en service en : " << cetAvion.getAnneeMiseEnService()<<"\n" << endl;
}


AfficheDetails::~AfficheDetails()
{
}
