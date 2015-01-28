tic_tac_toe.exe : bilbilotheque.o affichage.o a_qui_le_tour.o end_game.o engine.o matrice.o
	@gcc -o tic_tac_toe.exe bilbilotheque.o affichage.o a_qui_le_tour.o end_game.o engine.o matrice.o -Wall
	
bilbilotheque.o : bilbilotheque.c
	@gcc -c bilbilotheque.c -Wall
	
affichage.o : affichage.c 
	@gcc -c affichage.c -Wall
		
a_qui_le_tour.o : a_qui_le_tour.c 
	@gcc -c a_qui_le_tour.c -Wall

end_game.o : end_game.c 
	@gcc -c end_game.c -Wall
		
engine.o : engine.c 
	@gcc -c engine.c -Wall
		
matrice.o : matrice.c header.h
	@gcc -c matrice.c -Wall
		
clean : 
	rm *.o 
