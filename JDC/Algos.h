#ifndef ALGOS_H
#define ALGOS_H

#include <random>
#include <iomanip>
#include <iostream>

class Algos
{
    public:
        /** Default constructor */
        Algos();
        /** Default destructor */
        virtual ~Algos();

        /** return a random number in [a, b] */
     static int alea(const int a, const int b);
     static std::string zeroPadding(const int num, const int nbDigits);

    protected:

    private:
};

#endif // ALGOS_H
