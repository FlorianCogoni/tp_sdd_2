/*
 ______________________________________________________________________________________
|                                                                                      |
|                              ___________________                                     |
|                             |                   |                                    |
|                             |      main.c       |                                    |
|                             |___________________|                                    |
|                                                                                      |
|______________________________________________________________________________________|

	Ce fichier utilise les fichiers de tests et les synthétise.

*/


#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "fonctionsTab.h"
#include "truc.h"
#include "testsTruc.h"
#include "testsPile.h"

int main()
{
    testsPile();
    
    printf("\n\n\n                     TESTS TRUC             \n");
    printf("\n----------------------------------------------------\n");
    
    compare(1,3,T1);	/* i=1, n=3, T=[1,2,3] cas de la consigne */
    printf("\n \n");
    
    
    compare(0,3,T1);	/* i=0, n=3, T=[1,2,3] cas limite (voir explication de la taille de la pile dans truc.c) : truc va chercher en dehors du tableau pour ses permutations */
    printf("\n \n");
    
    
    compare(3,3,T1);	/* i=3, n=3, T=[1,2,3] cas limite (i=n) : 1 seul affichage sans permutation*/
    printf("\n \n");
    
    
    compare(1,4,T1);	/* i=1, n=4, T=[1,2,3] n est trop grand, truc va chercher un élément supplémentaire pour constituer le tableau */
    printf("\n \n");
    
    
    compare(1,2,T1);	/* i=1, n=2, T=[1,2,3] n est trop petit, truc fait ses permutations sur un tableau de taille 2 */
    printf("\n \n");
    
    
    compare(-1,3,T1);	/* i=-1, n=3, T=[1,2,3] cas dégénéré : d'après la taille de la pile (n+1), truc_iter ne peut pas empiler, mais truc_rec n'est pas empêché d'aller chercher d'autres éléments pour faire ses permutations */
    printf("\n \n");
    
    
    compare(1,1,T2);	/* i=1, n=1, T=[1]  cas le plus simple : pas de permutations sur un tableau de taille 1 */
    printf("\n \n");
    
    
    compare(4,6,T2);	/* i=4, n=6, T=[1] n est trop grand, de même que i. Des permutations sont effectuées sur des éléments hors tableau */
    printf("\n \n");
    
    
    compare(3,5,T3);	/* i=3, n=5, T=[1,2,3,4,5] cas général : les permutations sont effectuées sur les 3 derniers éléments 3, 4 et 5 */
    printf("\n \n");
    
    
    compare(0,0,T3);	/* i=0, n=0, T=[1,2,3,4,5] cas où il ne se passe rien */
    
    printf("\n----------------------------------------------------\n");
    printf("\n                        FIN TESTS \n");
    return 0;
}
