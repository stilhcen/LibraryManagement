#include "Bibliotheque.h"
#include <iostream>

void Bibliotheque::ajouterLivre(const Livre& livre) {
    livres.push_back(livre);
}

void Bibliotheque::afficherLivres() const {
    if (livres.empty()) {
        std::cout << "La bibliothèque est vide.\n";
        return;
    }
    for (size_t i = 0; i < livres.size(); ++i) {
        std::cout << "------ Livre " << i + 1 << " ------\n";
        livres[i].afficherInfo();
        std::cout << "-----------------------\n";
    }
}

void Bibliotheque::chercherLivreParTitre(const std::string& titre) const {
    for (const auto& livre : livres) {
        if (livre.getTitre() == titre) {
            std::cout << "Livre trouvé:\n";
            livre.afficherInfo();
            return;
        }
    }
    std::cout << "Livre non trouvé.\n";
}

void Bibliotheque::retirerLivreParTitre(const std::string& titre) {
    for (auto it = livres.begin(); it != livres.end(); ++it) {
        if (it->getTitre() == titre) {
            livres.erase(it);
            std::cout << "Livre retiré.\n";
            return;
        }
    }
    std::cout << "Livre non trouvé.\n";
}
