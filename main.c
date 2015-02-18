/**
* \file main.c
* \brief Page contenant le code d'execution du tic tac toe
* \author triodebeignets
* \version 1.1
* \date 19 Janvier 2014
*/
#include "header.h"

t_case table[N][N];
int nb_tour = 0;

int main () {
	t_joueur joueur = joueur1;
	aleatoire();
	init_table(); // on initialise la matrice
	multijoueur(joueur);
	affichage_table();
	affiche_entrer(3);
	
	return EXIT_SUCCESS;
}
