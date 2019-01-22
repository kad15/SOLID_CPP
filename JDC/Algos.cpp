#include "Algos.h"
using namespace std;
Algos::Algos()
{
    //ctor
}


Algos::~Algos()
{
    //dtor
}

int Algos::alea(const int a, const int b)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(a, b);
    return dist(gen);
}


string Algos::zeroPadding(const int num, const int nbDigits)
{
    ostringstream ss;
    ss << setw(nbDigits) << setfill('0') << num;
    string result = ss.str();

    if (result.length() > (unsigned)nbDigits)
    {
        result.erase(0, result.length() - nbDigits);
        cout << "Warning ! The number has been truncated to "<<nbDigits<<" digits."<<endl;
    }

    return result;
}




/*

#include <algorithm>


template <typename T>
const bool Contains( std::vector<T>& Vec, const T& Element )
{
    if (std::find(Vec.begin(), Vec.end(), Element) != Vec.end())
        return true;

    return false;
}

if (Contains(vector,item))
   blah
else
   blah


*/