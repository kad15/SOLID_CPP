/**---------------------------------------------------------------------------------------*/
/* Classe :   Algos                                                                       */
/*----------------------------------------------------------------------------------------*/
/* Description : Cette classe rassemble des méthodes réutilisables dans d'autres          */
/*               et évite la multi-responsabilité pour respecter le S de SOLID            */
/*----------------------------------------------------------------------------------------*/
/* Modification : Ajout d'un générateur alea() de nombre pseudo aléatoire classique       */
/*----------------------------------------------------------------------------------------*/





#ifndef ALGOS_H
#define ALGOS_H

#include <random>
#include <iomanip>
#include <iostream>
#include <time.h>
#include <stdlib.h>

class Algos
{
    public:
        /** Default constructor */
        Algos();
        /** Default destructor */
        virtual ~Algos();

        /** return a random number in [a, b]
        WARNING : do not forget to put line:
        srand((unsigned)time(NULL));
        in the main() program */
     static int alea(const int a, const int b);
     /** better non deterministic stochastic based number generator
      random_device does not seem to work properly with mingw32 and code::blocks on windows*/
     static int alea0(const int a, const int b);
     static std::string zeroPadding(const int num, const int nbDigits);

    protected:

    private:
};

#endif // ALGOS_H
