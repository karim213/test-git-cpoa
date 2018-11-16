#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <iostream>


class Utilisateur
{



 private :
     std::string pseudo;
     std::string password;
     std::string age;



public:
    Utilisateur();

        void selectionnerPaquet(int idPaquet);

        std::string creerCarte(std::string  Recto , std::string  Verso);

        std::string creerPaquet(std::string  nom , std::string  categorie);

        void  afficherVerso();

        void  afficherRecto();

        void evaluerCarte(int note , int idUtilisateur);


        void partagerPaquet();

};

#endif // UTLISATEUR_H
