/**
* \file engine.c
* \brief Page contenant le moteur
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/
#include "header.h"

void main()
{
	t_joueur joueur_depart;
	aleatoire(); //on initialise le srand
	init_table(); // on initialise la matrice
	joueur_depart = premier_joueur(); // on détermine qui du joueur 1 ou du joueur 2 commence
	
	affichage_table(); // on affiche la matrice vide pour commencer le jeu
	
	while(!gagnant())
	{
		
	}
	
}
