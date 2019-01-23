#include "Nir.h"
#include <iostream>


using namespace std;


int main()
{


srand((unsigned int)time(NULL));/**< for alea() to work properly */

    //const int MAX_NIR = 5; /**< max number of NIR to generate */
    /*
    initialiser un vecteur de pointeurs vers des NIR aléatoires

    */

   // Algos::alea(0, sexDomain.size()-1);
//std::vector<char> sex = {'1', '2', '3', '4','7','8'};
//cout<< sex[0]<<endl;

//vector<Nir *> vectorOfNirs = ;

//srand((unsigned)time(NULL));


    Nir * nir1 = new Nir();
    cout << "nir: "<<nir1-> nir()<<endl;
    cout << "Hello world!" << endl;
    string str;
    cout<< Algos::alea(0,100)<<endl;cout<< Algos::alea(0,100)<<endl;cout<< Algos::alea(0,100)<<endl;
    //cout << str.append(10u,'.');
    return 0;
}














/*
#include <iostream>
#include <vector>
#include <limits>   // utilisé pour vider le buffer d entree
#include <sstream>
#include <algorithm>
#include <fstream>




void Annuaire::sauvegarder() const
{
 string fic = FIC;
 ofstream flux(fic);
 if(flux)  //On teste si tout est OK
    {
        for (const Personne& p : annu)
            flux<< p.getId()<<" " << p.getNom() << " "<< p.getPrenom()<<endl;
        cout<< "Annuaire sauvegarde dans "<<fic<<endl;
    }
    else
    {
        cout << "ERREUR fichier "<<  fic << endl;
    }
    flux.close();
}


void Annuaire::restaurer()
{

    int id;
    string nom, prenom;
    Personne p;
    ifstream flux(FIC);

    if(flux)
    {
        string ligne; //Une variable pour stocker les lignes lues

        while(getline(flux, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
             cout << ligne << endl;
            istringstream(ligne)>> id>>nom>>prenom;
            p.setId(id);
            p.setNom(nom);
            p.setPrenom(prenom);
            annu.push_back(p);
        }
        cout <<endl;
        cout<< "L'annuaire "<<FIC<<" est charge : "<<endl;
        if(annu.empty()) cout<<"Annuaire vide !"<<endl;
    }
    else
    {
        cout << "ERREUR: pas d'annuaire." << endl;
    }
    return ;

}



*/
