/**
* \file a_qui_le_tour.c
* \brief Page permettant de savoir quel joueur doit jouer
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

/**
*\fn t_joueur choix_joueur(void)
*\brief Fonction permettant de savoir quel joueur doit jouer
*/
t_joueur choix_joueur(void){
	if (nb_tour % 2 == 0) return joueur1;
	else return joueur2;
}

/**
*\fn t_joueur premier_joueur(void)
*\brief Fonction permettant de savoir qui du joueur 1 ou du joueur 2 va commencer a jouer
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
