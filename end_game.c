/**
* \file end_game.c
* \brief Page permettant de verifier la fin de jeu
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

/**
*\fn void victoire(void)
*\brief Fonction permettant d'afficher le joueur gagnant
*/
void victoire(void){
	nb_tour = (nb_tour - 1) % 2;
	
	if (nb_tour == 0) printf("Félicitation au joueur 1 pour avoir remporté la partie !");
	
	else printf("Félicitation au joueur 2 pour avoir remporté la partie !");
}

/**
*\fn int fin_jeu(void)
*\brief Fonction permettant de verifier si la partie est fini
*/
//renvoi 1 si fin de jeu 
int fin_jeu(void){
	/*if(verif_colonnes() == 1){
		return 1;
	}*/
	verif_lignes();
	verif_diagonales();
	return 0;
}

//renvoi 1 si il y a une colonne bonne, 0 sinon
int verif_colonnes(void){
	/*int x = 0, y = 1;
	for(x = 0; x < N; x++){
		
	}*/
	return 0;
}

//renvoi 1 si il y a une ligne bonne, 0 sinon
int verif_lignes(void){
	/*int x = 0, y = 1;
	for(x = 0; x < N; x++){
		
	}*/
	return 0;
}

//renvoi 1 si il y a une diagonale bonne, 0 sinon
int verif_diagonales(void){
	/*int x = 0, y = 1;
	for(x = 0; x < N; x++){
		
	}*/
	return 0;
}
