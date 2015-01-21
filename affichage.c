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
		printf("|\n");
	}
}

/**
*\fn void affiche_entrer(int tmp)
*\brief Fonction permettant l'affichage d'un certain nombre de ligne vide
*\param int tmp nombre de retour chariot à afficher
*/
 void affiche_entrer(int tmp){
 	int i = 0;
 	for (i = 0; i < tmp; i++){
 		printf("\n");
 	}
 }
 
/**
*\fn void afficher_tour(t_joueur joueur)
*\brief Fonction permettant d'afficher quel joueur va jouer
*/
 void affiche_tour(t_joueur joueur){
 	affiche_entrer(3);
 	if (joueur == joueur1) printf("Joueur 1, a vous de jouer.");
 	else printf("Joueur 2, a vous de jouer.");
 	affiche_entrer(2);
 }
