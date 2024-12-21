#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

class Etudiant {
private:
    static int matriculeCounter;
    int matricule;
    std::string nom;
    int nbrNotes;
    float* tabNotes;

public:
    Etudiant();
    Etudiant(const std::string& nom, int nbrNotes);
    ~Etudiant();
    Etudiant(const Etudiant& other);
    int getMatricule() const;
    std::string getNom() const;
    int getNbrNotes() const;
    float* getTabNotes() const;
    void setNom(const std::string& nom);
    void setNbrNotes(int nbrNotes);
    void setTabNotes(float* notes);
    void saisie();
    void affichage() const;
    float moyenne() const;
    bool admis() const;
    static bool comparer(const Etudiant& e1, const Etudiant& e2);
};

#endif
