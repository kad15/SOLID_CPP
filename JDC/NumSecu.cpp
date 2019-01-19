#include "NumSecu.h"
using namespace std;
NumSecu::NumSecu()
{
    //ctor
    alea(1,2);
}

NumSecu::~NumSecu()
{
    //dtor
}

int NumSecu::alea(int a, int b)
{
    return rand()%(b-a) +a;
}


