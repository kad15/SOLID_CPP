#include "Nir.h"

using namespace std;
Nir::Nir()
{
    //ctor
    map_nir["sex"] = genSex();
    cout<< "cstr sex : "<<map_nir["sex"]<<endl;
    map_nir["year"]= genYearOfBirth();
    map_nir["month"]= genYearOfBirth();
    map_nir["department"]= genDepartmentOfBirth();
    map_nir["city"]= genCityOfBirth();
    map_nir["rank"]= genRankOfBirth();
    nir_ = map_nir["sex"]   + map_nir["year"]       +\
           map_nir["month"] + map_nir["department"] +\
           map_nir["city"]  + map_nir["rank"];

    map_nir["key"] = Algos::zeroPadding(keyNir(nir_), 2);

    nir_ += map_nir["key"];
}



Nir::~Nir()
{
    //dtor
}

 bool Nir::isValid(const std::string& nir){return true;}

int Nir::keyNir(const string& nir)
{
    unsigned long n;
    std::istringstream ss(nir);
    ss >> n;

    return   (97 - (n % 97));

}




string Nir::genSex()
{
    return Algos::zeroPadding(sexDomain[Algos::alea(0, sexDomain.size()-1)], 1);
}


string Nir::genYearOfBirth()
{

    return Algos::zeroPadding(Algos::alea(0, 99), 2);
}

string Nir::genMonthOfBirth()
{

    return Algos::zeroPadding(Algos::alea(0, 12), 2);
}


string Nir::genDepartmentOfBirth()
{

    return Algos::zeroPadding(Algos::alea(0, 95), 2);
}

string Nir::genCityOfBirth()
{
//Nir::genMonthOfBirth()
    return Algos::zeroPadding(Algos::alea(0, 990), 3);
}

string Nir::genPlaceOfBirth()
{
    return Nir::genDepartmentOfBirth() + Nir::genCityOfBirth();
}
string Nir::genRankOfBirth()
{

    return Algos::zeroPadding(Algos::alea(0, 990), 3);
}


/*
Algorithme de calcul de la clé du numéro

    La clé NIR est calculée par une formule mathématique, qui ne peut s'appliquer que sur des valeurs numériques. Il convient donc de remplacer les lettres présentes dans les départements corses :
    2A va devenir 19 et 2B devient 18.

    La clé peut alors être calculée avec la formule suivante :

        Clé NIR = 97 - ( ( Valeur numérique du NIR ) modulo 97 )




*/
