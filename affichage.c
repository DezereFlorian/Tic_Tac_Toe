/**
* \file affichage.c
* \brief Page permettant l'affichage de la matrice 
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

/**
* \fn affichage_table(void)
* \brief Fonction permettant d'afficher la table de jeu 
*/
void affichage_table(void){
	int i = 0, j = 0;
	
	for (i = 0; i < N; i++){
		printf("\n-----------------\n");
		for (j = 0; j < N; j++){
			printf("|");
			switch (table[i][j]){
				case vide: printf(" "); break;
				
				case croix: printf("X"); break; 
				
				case rond: printf("O"); break;
			}
		}
		printf("|");
	}
}
