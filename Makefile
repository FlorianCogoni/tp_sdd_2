all : tp2

tp2 : pile.o testsPile.o fonctionsTab.o truc.o testsTruc.o main.o
	gcc -Wall -Wextra –ansi -pedantic -o tp2 pile.o main.o truc.o fonctionsTab.o testsTruc.o

pile.o : pile.c pile.h
	gcc -Wall -Wextra –ansi -pedantic -o pile.o -c pile.c

testsPile.o : testsPile.c testsPile.h pile.h
	gcc -Wall -Wextra –ansi -pedantic -o testsPile.o -c testsPile.c
	
fonctionsTab.o : fonctionsTab.c fonctionsTab.h pile.h
	gcc -Wall -Wextra –ansi -pedantic -o fonctionsTab.o -c fonctionsTab.c
	
truc.o : truc.c truc.h fonctionsTab.h pile.h
	gcc -Wall -Wextra –ansi -pedantic -o truc.o -c truc.c

testsTruc.o : testsTruc.c testsTruc.h truc.h fonctionsTab.h pile.h
	gcc -Wall -Wextra –ansi -pedantic -o testsTruc.o -c testsTruc.c

main.o : main.c pile.h testsPile.h truc.h fonctionsTab.h pile.h testsTruc.h
	gcc -Wall -Wextra –ansi -pedantic -o main.o -c main.c

clean :
	rm -rf *.o

mrproper : clean
	rm -rf tp2
