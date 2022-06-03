#pragma once
#include <string>
#include <iostream>

class Joueur {
public:
	std::string nom;
	int score = 0; 

	explicit Joueur(std::string const& nom);

	explicit Joueur();

	int jouer() const;
};	