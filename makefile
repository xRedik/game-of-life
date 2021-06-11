all : gamelife

clean :
	rm *.o gamelife

doc:
	doxygen

dist:
	tar -czvf gameoflife.tar.gz *.c *.h makefile Doxyfile

game.o: game.h game.c
	gcc -c game.c

board.o: board.h board.c
	gcc -c board.c

gamelife : main.c game.h game.o board.h board.o
	gcc -o gamelife main.c game.o board.o