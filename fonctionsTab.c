/*
 ______________________________________________________________________________________
|                                                                                      |
|                              ___________________                                     |
|                             |                   |                                    |
|                             |  fonctionsTab.c   |                                    |
|                             |___________________|                                    |
|                                                                                      |
|______________________________________________________________________________________|

Ce fichier contient la fonction d'échange d'éléments d'un tableau, et d'affichage 
de tableau.

*/

#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "fonctionsTab.h"



/*---------------------------------------------------------------------
 
 Cette procédure échange 2 éléments d'un tableau T par leurs indices i 
 et j. On considère ici que les indices de T commencent à 1.

*/

void echange(int T[], int i, int j)
{
    int temp = T[i-1];		/* on utilise un entier temporaire pour stocker une des 2 valeurs avant de la changer */
    T[i-1] = T[j-1];
    T[j-1] = temp;
}

/*---------------------------------------------------------------------
 
 Cette procédure affiche un tableau T, n étant la longueur du tableau.

*/

void afficherTab(int T[], int n)
{
    int j;
    for (j=0; j<n; j++)
    {
        printf("%d ", T[j]);
    }
    printf("\n");
}
