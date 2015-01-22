/**
* \file remplissage.c
* \brief Page permettant de remplir la table de jeu avec des ronds ou des croix
* \author triodebeignets
* \version 1.0
* \date 21 Janvier 2014
*/
#include "header.h"

/**
*\fn void casevide(int x, int y)
*\brief Fonction permettant de vérifier si la case est bien vide
*\param int x, int y indiquent la ligne et la colonne
*/
int casevide(int x, int y)
{
	if(table[x][y] == vide)
		return 1;
	else
		return 0;
}

/**
*\fn void remplir_table(t_joueur joueur)
*\brief Fonction permettant de remplir une case de la table par le joueur
*\param t_joueur joueur permet de savoir quel joueur joue
*/
void remplir_table(t_joueur joueur){
	int x = 0, y = 0;
	affiche_entrer(2);
	do{
		printf("Entrez les coordonnees de la case dans laquelle vous voulez jouer (entre 1 et 3): ");
		x = verif_saisie(1,3) - 1;
		y = verif_saisie(1,3) - 1;
	}
	while(casevide(x,y));
		
	if(joueur == joueur1) table[x][y] = croix;
	else table[x][y] = rond;
	
	nb_tour++;
}
