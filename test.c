#include <stdio.h>
#include "truc.h"
#include "pile.h"
#include "fonctionsTab.h"

void compare(int i, int n, int T[])
{
    printf("Tableau initial : ");
    afficherTab(T,n);
    printf("i : %d n : %d \n",i,n);
    printf("-------------------------------- \n");
    printf("Truc recursif : \n");
    truc_rec(i,n,T);
    printf("-------------------------------- \n");
    printf("Truc iteratif : \n");
    truc_iter(i,n,T);
}


