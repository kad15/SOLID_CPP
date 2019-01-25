/**--------------------------------------------------------------------------------------
* Classe :   INir                                                                        
*----------------------------------------------------------------------------------------
* Description : Classe Abstraite i.e. Interface obligeant le re-definition des methodes  
*               pour illustrer le O de SOLID et faire du polymorphisme si nécessaire     
* Declinaison : OCP OpenClose principe                                                  
* Pre-condition: Aucune  
*                                                                                                                                                                                                                                               
* Return:  : Une instance de cette classe                                                
*----------------------------------------------------------------------------------------
* Modifications :                                                                        
*----------------------------------------------------------------------------------------
*/

#ifndef INUMSECU_H
#define INUMSECU_H


#include "Algos.h"
#include <string>
#include <vector>
#include <map>
#include <sstream>

class  INir
{
public:
    //INir(){}

    //virtual ~INir(){}

    /** setter */
    virtual void nir(const std::string nir)=0;
    virtual bool isValid(const std::string& nir)=0;
    /** getter */
    virtual std::string nir()=0;  // on oublie le const pour le moment
private:

    std::map<std::string, std::string> map_nir;

    /** convention : Attributs declared with trailing underscore */
    std::string nir_;

   std::vector<int> sexDomain = {1,2,3,4,7,8};
   /* if (std::find(std::begin(my_list), std::end(my_list), my_var) != std::end(my_list))
    // my_list has my_var */
   virtual std::string genSex()=0; // de 1 à 4 ou 7 ou 8
   virtual std::string genYearOfBirth()=0;  //// de 01 (janvier) à 12 (décembre) ou 62 ou 63 pour un mois non connu
   virtual std::string genMonthOfBirth()=0;// de 01 (janvier) à 12 (décembre) ou 62 ou 63 pour un mois non connu
   //virtual std::string genDepartmentOfBirth()=0; // de 01 à 95, ou 2A ou 2B pour la Corse après le 1er janvier 1976, ou 96 à 99 pour des naissances à l'étranger
   //virtual std::string genCityOfBirth()=0;  // de 001 à 989 ou 990
   virtual std::string genPlaceOfBirth()=0; // for the digits 6 to 10 cf. cases A B C wikipedia
   virtual std::string genRankOfBirth()=0;

   /** Compute the Nir's key. Is pure virtual to be able to
   process Corsica case but it implies a lot of repetive code
   for this member function   */
   virtual int keyNir(const std::string& nir)=0;


};

#endif // INUMSECU_H
