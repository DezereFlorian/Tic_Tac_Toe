/**
* \file engine.c
* \brief Page contenant le moteur
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

t_case table[N][N];
int nb_tour = 0;

void main(){
	int fini = 0;
	t_joueur joueur;
	aleatoire();
	init_table(); // on initialise la matrice
	joueur = premier_joueur(); // on détermine qui du joueur 1 ou du joueur 2 commence
	
	while(fini == 0){
		affichage_table();
		joueur = choix_joueur();
		affiche_tour(joueur);
		remplir_table(joueur);
		fini = fin_jeu();
	}
	victoire();
}
