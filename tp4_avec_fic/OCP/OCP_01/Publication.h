#pragma once

#include "Avion.h"

class Publication
{
public:
	Publication();
	Publication(Avion &cetAvion);
	//	void PrepareHtmlPourAvion(Avion cetAvion);
	virtual ~Publication();


protected:

private:
	void AfficheDetails(Avion &cetAvion);

};


