/**
* \file remplissage.c
* \brief Page permettant de remplir la table de jeu avec des ronds ou des croix
* \author triodebeignets
* \version 1.0
* \date 21 Janvier 2014
*/
#include "header.h"

/**
*\fn void remplir_table(t_joueur joueur)
*\brief Fonction permettant de remplir une case de la table par le joueur
*\param t_joueur joueur permet de savoir quel joueur jouer
*/
void remplir_table(t_joueur joueur){
	int x = 0, y = 0;
	affiche_entrer(2);

	printf("Entrez les coordonnees de la case dans laquelle vous voulez jouer (entre 1 et 3): ");
	do{
		x = verif_saisie(1,3) - 1;
		y = verif_saisie(1,3) - 1;
		if (table[x][y] != vide) printf("Cette case est deja pleine... Saisissez d'autres valeurs (toujours entre 1 et 3): ");
	}
	while((table[x][y] != vide));

	if(joueur == joueur1) table[x][y] = croix;
	else table[x][y] = rond;
	
	nb_tour++;
}

/**
*\fn void init_table(void)
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
