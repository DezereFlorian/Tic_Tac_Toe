/**
* \file header.h
* \brief Page contenant les defintions de tout ce qui est nécéssaire au tic tac toe
* \author triodebeignets
* \version 1.0
* \date 19 Janvier 2014
*/

#include <stlib.h>
#include <stdio.h>
#define N 3 //definition de la taille de la matrice

typedef enum {vide, croix, rond} t_case;

typedef enum {joueur1, joueur2} t_joueur;

t_case table[N][N]; //definition de la matrice servant a contenir les croix et les ronds des 2 joueurs 
int nb_tour; //definition du nombre de tour total passé
