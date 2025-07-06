#include "Livre.h"

Livre::Livre() : titre("Sans titre"), auteur("Inconnu"), prix(0.0), stock(0) {
    std::cout << "Constructeur par défaut appelé\n";
}

Livre::Livre(const std::string& t, const std::string& a, float p, int s)
    : titre(t), auteur(a), prix(p), stock(s) {}

Livre::~Livre() {
    std::cout << "Le livre \"" << titre << "\" a été détruit\n";
}

std::string Livre::getTitre() const { return titre; }
std::string Livre::getAuteur() const { return auteur; }
float Livre::getPrix() const { return prix; }
int Livre::getStock() const { return stock; }

void Livre::setPrix(float nouveauPrix) {
    prix = nouveauPrix;
}

void Livre::ajouterStock(int nombre) {
    stock += nombre;
}

bool Livre::retirerStock(int nombre) {
    if (stock >= nombre) {
        stock -= nombre;
        return true;
    } else {
        std::cout << "Erreur: Stock insuffisant!\n";
        return false;
    }
}

void Livre::afficherInfo() const {
    std::cout << "\nInformations du livre:\n---------------------\n";
    std::cout << "Titre: " << titre << "\nAuteur: " << auteur
              << "\nPrix: " << prix << " €\nStock: " << stock << " unités\n";
}

void Livre::comparerPrix(const Livre& autreLivre) const {
    if (prix < autreLivre.prix) {
        std::cout << "\"" << titre << "\" est moins cher que \""
                  << autreLivre.titre << "\"\n";
    } else if (prix > autreLivre.prix) {
        std::cout << "\"" << autreLivre.titre << "\" est moins cher que \""
                  << titre << "\"\n";
    } else {
        std::cout << "Les deux livres ont le même prix\n";
    }
}
