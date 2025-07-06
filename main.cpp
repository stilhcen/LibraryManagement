#include <iostream>
#include "Bibliotheque.h"

int main() {
    Bibliotheque biblio;

    Livre l1("Le Petit Prince", "Antoine de Saint-Exupéry", 12.99, 50);
    Livre l2("1984", "George Orwell", 14.99, 30);
    Livre l3("Start with Why", "Simon Sinek", 10.99, 15);

    biblio.ajouterLivre(l1);
    biblio.ajouterLivre(l2);
    biblio.ajouterLivre(l3);

    std::cout << "Affichage des livres:\n";
    biblio.afficherLivres();

    std::cout << "\nRecherche du livre '1984':\n";
    biblio.chercherLivreParTitre("1984");

    std::cout << "\nRetrait du livre 'Start with Why':\n";
    biblio.retirerLivreParTitre("Start with Why");

    std::cout << "\nAffichage après retrait:\n";
    biblio.afficherLivres();

    return 0;
}
