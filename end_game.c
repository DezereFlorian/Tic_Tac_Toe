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
*\brief Fonction permettant de verifier si la partie est finie
*/
//renvoi 1 si fin de jeu 
int fin_jeu(void){
	if(verif_colonnes() || verif_lignes() || verif_diagonales())
		return 1;
	else
		return 0;
}

//renvoi 1 si il y a une colonne bonne, 0 sinon
int verif_colonnes(void){
	int x = 1,y;
	for(y = 0; y < N; y++){
		if(table[x][y] == croix && table[x-1][y] == croix && table[x+1][y] == croix)
		{
			return 1;
		}
		else if(table[x][y] == rond && table[x-1][y] == rond && table[x+1][y] == rond)
			return 1;
		else
			return 0;
	}
	return 0;
}

//renvoi 1 si il y a une ligne bonne, 0 sinon
int verif_lignes(void){
	int x = 0, y = 1;
	for(x = 0; x < N; x++){
		if(table[x][y] == croix && table[x][y-1] == croix && table[x][y+1] == croix)
		{
			return 1;
		}
		else if(table[x][y] == rond && table[x][y-1] == rond && table[x][y+1] == rond)
			return 1;
		else
			return 0;
	}
	return 0;
}

//renvoi 1 si il y a une diagonale bonne, 0 sinon
int verif_diagonales(void){
	int x = 1, y = 1;
	if(table[x][y] == croix && table[x+1][y-1] == croix && table[x-1][y+1] == croix)
		return 1;
	else if(table[x][y] == rond && table[x-1][y-1] == rond && table[x+1][y+1] == rond)
		return 1;
	else if(table[x][y] == croix && table[x-1][y-1] == croix && table[x+1][y+1] == croix)
		return 1;
	else if(table[x][y] == rond && table[x+1][y-1] == rond && table[x-1][y+1] == rond)
		return 1;
	else
		return 0;	
}
