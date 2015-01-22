/**
* \file header.h
* \brief Page contenant les defintions de tout ce qui est nécéssaire au tic tac toe
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/

#include <stdlib.h>
#include <stdio.h>
#define N 3 //definition de la taille de la matrice

/**
* \enum t_case
* \brief definition d'une énumération de type t_case representant le contenu des cases de la table de jeu (rond pour joueur 2 et croix pour joueur 1)
*/
typedef enum {vide, croix, rond} t_case;

/**
* \enum t_joueur
* \brief definition d'une énumération de type t_joueur permettant de connaitre le joueur en cours de jeu 
*/
typedef enum {joueur1, joueur2} t_joueur;

extern t_case table[N][N]; //definition de la matrice servant a contenir les croix et les ronds des 2 joueurs 
extern int nb_tour; //definition du nombre de tour total passé

void aleatoire(void);
int verif_saisie(int petit, int grand);
void affichage_table(void);
void affiche_entrer(int tmp);
void affiche_tour(t_joueur joueur);
t_joueur choix_joueur(void);
t_joueur premier_joueur(void);
void init_table(void);
void victoire(void);
int fin_jeu(void);
int verif_colonnes(void);
int verif_lignes(void);
int verif_diagonales(void);
void remplir_table(t_joueur joueur);
int casevide(int x, int y);
