/**
* \file init.c
* \brief Page permettant l'initialisation du jeu
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

/**
*\fn premier_joueur(void)
*\brief Fonction permettant de savoir qui du joueur 1 ou du joueur va commencer a jouer
*/
t_joueur premier_joueur(void){

	int tmp;
	tmp = rand() % 100;
	
	if (tmp % 2 == 0) {
		nb_tour = 0;
		return joueur1;
	}
	else {
		nb_tour = 1;
		return joueur2;
	}
}
/**
*\fn init_table(void)
*\brief Fonction permettant de passer a l'etat vide la matrice du jeu 
*/
void init_table(void){
	int i = 0, j = 0;
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			table[i][j] = vide;
		}
	}
}
