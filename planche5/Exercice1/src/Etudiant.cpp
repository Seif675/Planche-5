#include "Etudiant.h"
#include <iostream>

int Etudiant::matriculeCounter = 1;
Etudiant::Etudiant() : matricule(matriculeCounter++) {
    nom = "";
    nbrNotes = 0;
    tabNotes = nullptr;
}
Etudiant::Etudiant(const std::string& nom, int nbrNotes) : matricule(matriculeCounter++) {
    this->nom = nom;
    this->nbrNotes = nbrNotes;
    tabNotes = new float[nbrNotes];
}
Etudiant::~Etudiant() {
    delete[] tabNotes;
}
Etudiant::Etudiant(const Etudiant& other) : matricule(matriculeCounter++) {
    this->nom = other.nom;
    this->nbrNotes = other.nbrNotes;
    tabNotes = new float[nbrNotes];
    for (int i = 0; i < nbrNotes; i++) {
        tabNotes[i] = other.tabNotes[i];
    }
}
int Etudiant::getMatricule() const {
    return matricule;
}
std::string Etudiant::getNom() const {
    return nom;
}
int Etudiant::getNbrNotes() const {
    return nbrNotes;
}
float* Etudiant::getTabNotes() const {
    return tabNotes;
}
void Etudiant::setNom(const std::string& nom) {
    this->nom = nom;
}
void Etudiant::setNbrNotes(int nbrNotes) {
    this->nbrNotes = nbrNotes;
    delete[] tabNotes;
    tabNotes = new float[nbrNotes];
}
void Etudiant::setTabNotes(float* notes) {
    delete[] tabNotes;
    tabNotes = notes;
}
void Etudiant::saisie() {
    for (int i = 0; i < nbrNotes; i++) {
        std::cout << "Note " << i + 1 << ": ";
        std::cin >> tabNotes[i];
    }
}
void Etudiant::affichage() const {
    std::cout << "Matricule: " << matricule << ", Nom: " << nom << ", Nombre de notes: " << nbrNotes << "\n";
    std::cout << "Notes: ";
    for (int i = 0; i < nbrNotes; i++) {
        std::cout << tabNotes[i] << " ";
    }
    std::cout << "\n";
}
float Etudiant::moyenne() const {
    float somme = 0;
    for (int i = 0; i < nbrNotes; i++) {
        somme += tabNotes[i];
    }
    return somme / nbrNotes;
}
bool Etudiant::admis() const {
    return moyenne() >= 10;
}
bool Etudiant::comparer(const Etudiant& e1, const Etudiant& e2) {
    return e1.moyenne() == e2.moyenne();
}
