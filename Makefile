all : tp2

tp2 : pile.o fonctionsTab.o truc.o main.o
	gcc -o tp2 pile.o main.o

pile.o : pile.c pile.h
	gcc -o pile.o -c pile.c
	
fonctionsTab.o : fonctionsTab.c fonctionsTab.h pile.c pile.h
	gcc -o fonctionsTab.o -c fonctionsTab.c
	
truc.o : truc.c truc.h fonctionsTab.c fonctionsTab.h pile.c pile.h
	gcc -o truc.o -c truc.c

main.o : main.c pile.h truc.c truc.h fonctionsTab.c fonctionsTab.h pile.c pile.h
	gcc -o main.o -c main.c

clean :
	rm -rf *.o

mrproper : clean
	rm -rf tp2
