/*
 ______________________________________________________________________________________
|                                                                                      |
|                              ___________________                                     |
|                             |                   |                                    |
|                             |   testsTruc.c     |                                    |
|                             |___________________|                                    |
|                                                                                      |
|______________________________________________________________________________________|

	Ce fichier contient la fonction compare, qui est une fontion test pour truc.

*/

#include <stdio.h>
#include "truc.h"
#include "pile.h"
#include "fonctionsTab.h"


/*---------------------------------------------------------------------
 
 Cette procédure compare l'exécution de truc_rec avec celle de truc_iter

*/

void compare(int i, int n, int T[])
{
    printf("\nTableau initial : ");
    afficherTab(T,n);
    printf("i : %d, n : %d \n",i,n);
    printf("---------------------\n");
    printf("Truc recursif : \n");
    truc_rec(i,n,T);
    printf("----------------------\n");
    printf("Truc iteratif : \n");
    truc_iter(i,n,T);
}
