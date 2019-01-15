#include "Avion.h"
#include <string>

using namespace std;

Avion::Avion()
{
	// Constructeur
	immatriculation = "inconnue";
	typeAvion = "inconnu";
	anneeMiseEnService = 0;
	typePiste= "inconnue";
}

Avion::~Avion()
{
	// Destructeur
}

// mutateur : renseigne l'immatriculation de l'avion
void Avion::setImmatriculation(const string & uneImmat)  // notez le const
{
	this->immatriculation = uneImmat;
}

// accesseur : renvoie l'immatriculation de l'avion
string & Avion::getImmatriculation()
{
	return this->immatriculation;
}


// mutateur : renseigne le type de l'avion
void Avion::setTypeAvion(const string & unTypeAvion)  // notez le const
{
	this->typeAvion = unTypeAvion;
}

// accesseur : renvoie  le type de l'avion
string & Avion::getTypeAvion()
{
	return this->typeAvion;
}


// mutateur : renseigne le type de piste
void Avion::setTypePiste(const string & unTypePiste)  // notez le const
{
	this->typePiste = unTypePiste;
}

// accesseur : renvoie  le type de Piste
string & Avion::getTypePiste()
{
	return this->typePiste;
}



// mutateur : renseigne annee mise en service de l'avion
void Avion::setAnneeMiseEnService(int quelleAnneeMiseEnService)
{
	this->anneeMiseEnService = quelleAnneeMiseEnService;
}

// accesseur : renvoie annee mise en service de l'avion
int Avion::getAnneeMiseEnService()
{
	return this->anneeMiseEnService;
}



void Avion::Decoller()
{
	cout << getImmatriculation() << " : Vroum ... V1... V2...  Decollage !" << endl;
}


