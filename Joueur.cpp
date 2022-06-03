#include "Joueur.h"

Joueur::Joueur(std::string const& nom):
	nom(nom)
{}

Joueur::Joueur():
	nom("")
{}

int Joueur::jouer() const{

	int tmp;
	std::cout << "A joueur " << nom << " de jouer :" << std::endl << std::endl;
	std::cout << "|" << 1 << "|" << 2 << "|" << 3 << "|" << std::endl;
	std::cout << "|" << 4 << "|" << 5 << "|" << 6 << "|" << std::endl;
	std::cout << "|" << 7 << "|" << 8 << "|" << 9 << "|" << std::endl;
	
	do {
		std::cout << "Choisissez un chiffre entre 1 et 9: ";
		std::cin >> tmp;
		while (!std::cin.good()){
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (tmp < 1 || tmp > 9);
	return tmp-1;
}
