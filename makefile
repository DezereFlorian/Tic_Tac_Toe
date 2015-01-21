tic_tac_toe.exe : bilbilotheque.o affichage.o a_qui_le_tour.o end_game.o engine.o matrice.o
	gcc -o bilbilotheque.c affichage.c a_qui_le_tour.c end_game.c engine.c matrice.c -Wall
	
bilbilotheque.o : bilbilotheque.c
		gcc -o bilbilotheque.o -c bilbilotheque.c -Wall
		
affichage.o : affichage.c 
		gcc -o affichage.o -c affichage.c -Wall
		
a_qui_le_tour.o : a_qui_le_tour.c 
		gcc -o a_qui_le_tour.o -c a_qui_le_tour.c -Wall

end_game.o : end_game.c 
		gcc -o end_game.o -c end_game.c -Wall
		
engine.o : engine.c 
		gcc -o engine.o -c engine.c -Wall
		
matrice.o : matrice.c header.h
		gcc -o matrice.o -c matrice.c -Wall
		
clean:
	rm *.o *~
