#pragma once



#define AVION_H

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class Avion
{
public:
	Avion();
	virtual ~Avion();
	// setter immatriculation
	void setImmatriculation(const std::string & uneImmatriculation);
	// getter immatriculation
	std::string & getImmatriculation();

	// setter TypeAvion
	void setTypeAvion(const std::string & unTypeAvion);
	// getter TypeAvion
	std::string & getTypeAvion();

	//void EcrireDetails(const std::string & uneImmatriculation);
	void EcrireDetailsHtml(const std::string & uneImmatriculation);

	// setter anneeMiseEnService
	void setAnneeMiseEnService(int anneeMiseEnService);
	// getter anneeMiseEnService
	int getAnneeMiseEnService();

	// setter typePiste
	void setTypePiste(const std::string & typePiste);

	// getter typePiste
	std::string & getTypePiste();

	void Decoller();

protected:

private:
	// immatriculation de l'avion
	string immatriculation;
	// Type de l'avion
	string typeAvion;
	// Type de piste : (sol eau)
	string typePiste;
	// Annee de mise en service
	int anneeMiseEnService;

};


