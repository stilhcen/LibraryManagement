#ifndef LIVRE_H
#define LIVRE_H

#include <string>
#include <iostream>

class Livre {
private:
    std::string titre;
    std::string auteur;
    float prix;
    int stock;

public:
    Livre();
    Livre(const std::string& t, const std::string& a, float p, int s);
    ~Livre();

    // Getters
    std::string getTitre() const;
    std::string getAuteur() const;
    float getPrix() const;
    int getStock() const;

    // Setters
    void setPrix(float nouveauPrix);
    void ajouterStock(int nombre);
    bool retirerStock(int nombre);

    void afficherInfo() const;
    void comparerPrix(const Livre& autreLivre) const;
};

#endif
