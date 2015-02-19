/**
* \file engine.c
* \brief Page contenant toutes les fonctions necessaires au jeu
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
	
	if (rand() % 100 % 2 == 0) {
		nb_tour = 0;
		return joueur1;
	}
	else {
		nb_tour = 1;
		return joueur2;
	}
}

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
*\fn void victoire_IA(void)
*\brief Fonction permettant d'afficher le joueur gagnant contre l'IA
*/
void victoire_IA(void){
	nb_tour = (nb_tour - 1) % 2;
	
	if (nb_tour == 0) printf("Vous avez perdu contre l'Intelligence Artificielle !");
	
	else printf("Félicitation, vous avez remporté la partie !");
}

/**
*\fn int fin_jeu(void)
*\brief Fonction permettant de verifier si la partie est finie
*/
//renvoie 1 si fin de jeu 
int fin_jeu(void){
	if(verif_colonnes() || verif_lignes() || verif_diagonales())
		return 1;
	else
		return 0;
}

/**
*\fn int verif_match_nul(void)
*\brief Fonction permettant de verifier si la table est remplie sans qu'il y ait de gagnant
*/
//renvoie 1 si il y a match nul, 0 sinon
int verif_match_nul(void)
{
	int x, y;
	for(x=0;x<N;x++)
	{
		for(y=0;y<N;y++)
		{
			if(table[x][y] == vide)
				return 0;
		}
	}
	return 1;
}

/**
*\fn int verif_colonnes(void)
*\brief Fonction permettant de verifier si une colonne de la table de jeu est rempli de même pions
*/
//renvoie 1 si il y a une colonne bonne, 0 sinon
int verif_colonnes(void){
	int x = 1, y = 0;
	for(y = 0; y < N; y++){
		if(table[x][y] == croix && table[x-1][y] == croix && table[x+1][y] == croix)
		{
			return 1;
		}
		else if(table[x][y] == rond && table[x-1][y] == rond && table[x+1][y] == rond)
			return 1;
	}
	return 0;
}

/**
*\fn int verif_lignes(void)
*\brief Fonction permettant de verifier si une colonne de la table de jeu est rempli de même pions
*/
//renvoie 1 si il y a une ligne bonne, 0 sinon
int verif_lignes(void){
	int x = 0, y = 1;
	for(x = 0; x < N; x++){
		if(table[x][y] == croix && table[x][y-1] == croix && table[x][y+1] == croix)
		{
			return 1;
		}
		else if(table[x][y] == rond && table[x][y-1] == rond && table[x][y+1] == rond)
			return 1;
	}
	return 0;	
}

/**
*\fn int verif_diagonales(void)
*\brief Fonction permettant de verifier si une colonne de la table de jeu est rempli de même pions
*/
//renvoie 1 si il y a une diagonale bonne, 0 sinon
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

/**
* \fn affichage_table(void)
* \brief Fonction permettant d'afficher la table de jeu 
*/
void affichage_table(void){
	int i = 0, j = 0;
	
	for (i = 0; i < N; i++){
		printf("\n-------\n");
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
	printf("\n-------\n");
}

/**
*\fn void afficher_tour(t_joueur joueur, int i)
*\brief Fonction permettant d'afficher quel joueur va jouer
*/
 void affiche_tour(t_joueur joueur, int i){
 	affiche_entrer(3);
 	if (i < 0) printf("L'IA va jouer");
 	else if (joueur == joueur1) printf("Joueur 1, a vous de jouer.");
 	else if (joueur == joueur2) printf("Joueur 2, a vous de jouer.");
 	affiche_entrer(2);
 }
 
/**
* \fn void IA_nulle(void)
* \brief Fonction permettant a une IA debutante de jouer un pion
*/
void IA_nulle(void){
	int x = 0, y = 0;
	do {
		x = rand() % 3;
		y = rand() % 3;
	}	
	while (table[x][y] != vide);
	table[x][y] = rond;
}

/**
* \fn void multijoueur(t_joueur joueur)
* \brief Fonction permettant de demander si le joueur veut jouer contre une IA ou avec un ami
* \param joueur permet de savoir qui doit jouer en premier en PvP
*/
void multijoueur(t_joueur joueur){
	int fini = 0;
	int multi = -1;
	affiche_entrer(2);
	printf("Voulez-vous jouer contre une IA ou un partenaire?\n");
	printf("Contre une IA : 1\nContre un partenaire : 2\n");
	scanf("%i", &multi);
	if (multi == 1){
		joueur = premier_joueur();
		joueur = joueur1;
		while(fini == 0){
			affichage_table();
			if(nb_tour % 2 != 0){
				affiche_tour(joueur, 0);
				remplir_table(joueur);
				nb_tour++;
			} else {
				affiche_tour(joueur, -1);
				IA_nulle();
				nb_tour++;
			}
			if(fin_jeu())
			{
				fini = 1;
			}
			else if(verif_match_nul())
			{
				fini = 2;
			}
			else
				fini = fin_jeu();
		}
		if(fini==1)
		{
			affichage_table();
			victoire_IA();
		}
		else
		{
			affichage_table();
			printf("Match nul !");
		}
	} else {
		joueur = premier_joueur(); // on détermine qui du joueur 1 ou du joueur 2 commence
		while(fini == 0){
			affichage_table();
			joueur = choix_joueur();
			affiche_tour(joueur, 0);
			remplir_table(joueur);
			fini = fin_jeu();
			nb_tour++;
			if(fin_jeu())
			{
				fini = 1;
			}
			else if(verif_match_nul())
			{
				fini = 2;
			}
			else
				fini = fin_jeu();
		}
		if(fini==1)
		{
			affichage_table();
			victoire();
		}
		else
		{
			affichage_table();
			printf("Match nul !");
		}
	}
}
