#pragma once
#include "Joueur.h"
#include <vector>

enum class Etat {
	vide = ' ',
	cercle = 'o',
	croix = 'x'
};

class Partie {
private : 
	Joueur* j1;
	Joueur* j2;
	std::vector<Etat> tableau = std::vector<Etat>(9,Etat::vide);

	void tour();

	bool verifierVictoire(Etat e) const;

	void afficherPartie() const;

	void terminerPartie(Joueur* vainqueur) const;

public:
	
	explicit Partie(Joueur* j1, Joueur* j2);

	void initialiserPartie();

	~Partie();
};