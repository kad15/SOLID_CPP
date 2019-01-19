#ifndef NUMSECU_H
#define NUMSECU_H

#include <cstdlib>
#include <ctime>
#include <string>
#include <cstdio>


class NumSecu
{
public:
    NumSecu();
    virtual ~NumSecu();

private:
    int alea(int a, int b);
    /** convention : Attributs with trailing underscore */
    string numSecu_;
};

#endif // NUMSECU_H
