// Morpion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Partie.h"
#include <iostream>


int main()
{
	std::string nom;
	Joueur* j1;
	Joueur* j2;
	
    std::cout << "Bienvenue dans le jeu du Morpion" << std::endl;
	
	std::cout << "Veuillez entrer le nom du joueur 1" << std::endl;
	std::cin >> nom;
	j1 = new Joueur(nom);

	std::cout << "Veuillez entrer le nom du joueur 2" << std::endl;
	std::cin >> nom;
	j2 = new Joueur(nom);

	do {
		std::cout << j1->nom << " a " << j1->score << " points" << std::endl;
		std::cout << j2->nom << " a " << j2->score << " points" << std::endl;
		
		do {
			std::cout << "Voulez vous jouer une partie ? (o/n)" << std::endl;
			std::cin >> nom;
		}while(nom != "o" && nom != "n");

		if(nom == "o") {
			Partie partie(j1, j2);
			partie.initialiserPartie();
		}
	} while (nom == "o");

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
