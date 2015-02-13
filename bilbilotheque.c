/**
* \file bilbilotheque.c
* \brief Page contenant les definitons des fonctions importantes a tous les programmes
* \author triodebeignets
* \version 1.0
* \date 22 Janvier 2014
*/
#include "header.h"

/**
*\fn void aleatoire (void)
*\brief Fonction permettant de creer l'aleatoire
*/
void aleatoire (void){
	 srand(time(NULL));
}

/**
*\fn int verif_saisie (int petit, int grand)
*\brief Fonction permettant de verifier si la saisie de l'utilisateur est correcte
*\param int petit, int grand paramètre pour verifier si le nombre entrer n'est pas trop grand ou trop petit
*\return renvoi le nombre entrer par l'utilisateur
*/
int verif_saisie (int petit, int grand){
	int output = 0;
	scanf("%i", &output);
	while (output < petit || output > grand){
		printf("Entrez une valeur correcte, qui soit comprise entre %i et %i : ",petit, grand);
		scanf("%i",&output);
	}
	return output;
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
