#ifndef NUMSECU_H
#define NUMSECU_H

#include "INir.h"

class  Nir: public INir
{
public:
    Nir();

    virtual ~Nir();
    /** setter */
    void nir(const std::string nir)
    {
        nir_ = nir;
    }
    bool isValid(const std::string& nir);
    /** getter */
    std::string nir(){
     return nir_;
    }
private:

    std::map<std::string, std::string> map_nir;

    /** convention : Attributs declared with trailing underscore */
    std::string nir_;

   std::vector<int> sexDomain = {1,2,3,4,7,8};
   /* if (std::find(std::begin(my_list), std::end(my_list), my_var) != std::end(my_list))
    // my_list has my_var */
   std::string genSex(); // de 1 à 4 ou 7 ou 8
   std::string genYearOfBirth();  //// de 01 (janvier) à 12 (décembre) ou 62 ou 63 pour un mois non connu
   std::string genMonthOfBirth();// de 01 (janvier) à 12 (décembre) ou 62 ou 63 pour un mois non connu
   std::string genDepartmentOfBirth(); // de 01 à 95, ou 2A ou 2B pour la Corse après le 1er janvier 1976, ou 96 à 99 pour des naissances à l'étranger
   std::string genCityOfBirth();  // de 001 à 989 ou 990
   std::string genPlaceOfBirth();
   std::string genRankOfBirth();
   int keyNir(const std::string& nir);


};

#endif // NUMSECU_H
