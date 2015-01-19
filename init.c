/*
*
*
*
*
*/

#define N 3 //definition de la taille de la matrice

typedef enum {vide, croix, rond} t_case;

typedef enum {joueur1, joueur2} t_joueur;

t_case table[N][N]; //definition de la matrice servant a contenir les croix et les ronds des 2 joueurs 
int nb_tour; //definition du nombre de tour total passé

t_joueur premier_joueur(void){

	int tmp;
	tmp = rand() % 100;
	
	if (tmp % 2 == 0) return joueur1;
	
	else joueur2;
}

void vide_jeu(void){
	int i = 0, j = 0;
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			table[i][j] = vide;
		}
	}
}

//fonction qui renvoi le joueur qui doit jouer
t_joueur choix_joueur(void){
	
}
