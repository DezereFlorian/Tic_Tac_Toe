tic_tac_toe : main.o bilbilotheque.o engine.o
	@gcc -o tic_tac_toe bilbilotheque.o engine.o main.o
   
bilbilotheque.o : bilbilotheque.c
	@gcc -c bilbilotheque.c -Wall
   
main.o : main.c
	@gcc -c main.c -Wall
       
engine.o : engine.c header.h
	@gcc -c engine.c -Wall
       
clean :
	rm *.o *~ 
