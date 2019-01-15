#pragma once
#ifndef ECRIREHTML_H
#define ECRIREHTML_H


#include "Avion.h"


class EcrireHtml
{
public:
	EcrireHtml();
	EcrireHtml(Avion &cetAvion); // Avant
	virtual ~EcrireHtml();

	std::string getCodeHtml();


protected:

private:
	std::string leCodeHtml;
	void setCodeHtml(const std::string & unTxT);
	std::string  FabriqueHtmlPourAvion(Avion &cetAvion); // avant
	std::string  FabriqueEnTeteHtml(const std::string & leTexteDuTitre);
	void FabriqueFichierHtml(const std::string & nomFichier);
};

#endif // ECRIREHTML_H
