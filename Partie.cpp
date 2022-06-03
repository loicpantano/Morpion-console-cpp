#include "Partie.h"

Partie::Partie(Joueur* j1, Joueur* j2) : 
	j1(j1),
	j2(j2)
{}

void Partie::initialiserPartie(){
	tour();
}

void Partie::tour(){
	int tmp;
	do {
		tmp = j1->jouer();
	} while (tableau[tmp] != Etat::vide);
	tableau[tmp] = Etat::cercle;
	
	if (verifierVictoire(Etat::cercle)) {
		terminerPartie(j1);
		return;
	}

	do {
		tmp = j2->jouer();
	} while (tableau[tmp] != Etat::vide);
	tableau[tmp] = Etat::croix;
	
	if (verifierVictoire(Etat::croix)) {
		terminerPartie(j2);
		return;
	}
	

	tour();
}

bool Partie::verifierVictoire(Etat e) const{	
	afficherPartie();
	if (tableau[0] == e && (tableau[1] == e && tableau[2] == e) || (tableau[3] == e && tableau[6] == e) || (tableau[4] == e && tableau[8] == e))
		return true;
	
	if (tableau[4] == e && (tableau[3] == e && tableau[5] == e) || (tableau[1] == e && tableau[7] == e) || (tableau[2] == e && tableau[6] == e))
		return true;
	
	if (tableau[8] == e && (tableau[6] == e && tableau[7] == e) || (tableau[2] == e && tableau[5] == e))
		return true;
	
	return false;
}

void Partie::afficherPartie() const {
	std::cout << "|" << char(tableau[0]) << "|" << char(tableau[1]) << "|" << char(tableau[2]) << "|" << std::endl;
	std::cout << "|" << char(tableau[3]) << "|" << char(tableau[4]) << "|" << char(tableau[5]) << "|" << std::endl;
	std::cout << "|" << char(tableau[6]) << "|" << char(tableau[7]) << "|" << char(tableau[8]) << "|" << std::endl;
}

void Partie::terminerPartie(Joueur* vainqueur) const {
	vainqueur->score++;
	std::cout << vainqueur->nom << " a gagne la partie !" << std::endl;
}

Partie::~Partie() = default;

