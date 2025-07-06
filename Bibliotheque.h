#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <vector>
#include <string>
#include "Livre.h"

class Bibliotheque {
private:
    std::vector<Livre> livres;

public:
    void ajouterLivre(const Livre& livre);
    void afficherLivres() const;
    void chercherLivreParTitre(const std::string& titre) const;
    void retirerLivreParTitre(const std::string& titre);
};

#endif
