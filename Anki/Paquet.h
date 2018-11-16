#ifndef PAQUET_H
#define PAQUET_H
#include <iostream>
#include <vector>


class Paquet
{
private :
    std::string nom;
    std::string categorie;
    int etat;


public:
    Paquet();

    void ajouterCarte(Carte c);
    std::string creerCarte(std::string recto , std::string verso);
    std::string validerPaquet();
    std::vector<Carte> getListeCartes();
    std::string afficherVerso();
    void validerCarte(int etat);
    std::string reviserPaquet();
    void ordonnerCartes();
    std::string afficherRecto();
    void evaluerCarte(int note , int idUtilisateur);
    std::string getAvisValidation();
    std::string setEtat(int etat);


};

#endif // PAQUET_H
