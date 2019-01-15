#pragma once
#ifndef AVION_H
#define AVION_H

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class Avion
{
public:

	// Constructeur
	Avion();
	//Destructeur
	virtual ~Avion();

	// setter immatriculation
	void SetImmatriculation(const std::string & uneImmatriculation);
	// getter immatriculation
	std::string & getImmatriculation();

	// setter TypeAvion
	void setTypeAvion(const std::string & unTypeAvion);
	// getter TypeAvion
	std::string & getTypeAvion();

	// setter anneeMiseEnService
	void setAnneeMiseEnService(int uneAnneeMiseEnService);

	// getter anneeMiseEnService
	int getAnneeMiseEnService();

	// Fabrique page Html des détails de l'avion
	void EcrireDetailsHtml(const std::string & uneImmatriculation);




	void Decoller(const std::string & uneImmatriculation);

protected:

private:
	// immatriculation de l'avion
	std::string immatriculation;
	// Type de l'avion
	std::string typeAvion;
	// année de mise en service
	int anneeMiseEnService;
};

#endif // AVION_H
