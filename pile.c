#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

pile_t * initPile(int tmax) 
{
    pile_t * pPile = NULL;						
    pPile = (pile_t *) malloc(sizeof(pile_t));
    if (pPile != NULL) 
    {
        pPile->tmax = tmax;
        pPile->taille = 0;
        pPile->liste = (int *) malloc(tmax * sizeof(int));
    }
    return pPile;
}


void libererPile(pile_t * pPile)
{
	free(pPile->liste);
	free(pPile);
}


int estVide(pile_t * pPile)
{
    int bool = 0;
    if (pPile->taille == 0)
    {
        bool = 1;
    }
    return bool;
}

int empile(pile_t * pPile, int elt)
{
    int code = 0;
    if (pPile->taille == pPile->tmax)
    {
        printf("\npile pleine\n");
    }
    else
    {
        pPile->liste[pPile->taille] = elt;
        pPile->taille += 1;
        code = 1;
    }
    return code;
}

int depile(pile_t * pPile, int * elt)
{
    int code = 0;
    if (!estVide(pPile))
    {
        *elt = pPile->liste[pPile->taille - 1];
        pPile->taille -= 1;
        code = 1;
    }
    else
    {
        printf("\npile vide\n");
    }
    return code;
}

void afficherPile(pile_t * pPile)
{
    int i;
    int * cour = pPile->liste;
    printf("\ntaille max de la pile : %d\n",pPile->tmax);
    printf("taille de la pile     : %d\n",pPile->taille);
    printf("pile                  : ");
    for (i=0;i<pPile->taille;i++)
    {
        printf("%d ", (*cour));
        cour ++;
    }
    printf("<- sommet de la pile\n\n");
}
