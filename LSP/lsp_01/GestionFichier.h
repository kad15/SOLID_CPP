#pragma once
#include <string.h>
#include <iostream>

class GestionFichier
{
public:
	
	virtual ~GestionFichier();

//	Constructeur avec parametres
	GestionFichier(const std::string & nomFichier, const std::string & contenu);

	
protected:

private:

};

