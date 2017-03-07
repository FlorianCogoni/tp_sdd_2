all : tp2

tp2 : pile.o main.o
	gcc -o tp2 pile.o main.o

pile.o : pile.c pile.h
	gcc -o pile.o -c pile.c

main.o : main.c pile.h
	gcc -o main.o -c main.c

clean :
	rm -rf *.o

mrproper : clean
	rm -rf tp2
