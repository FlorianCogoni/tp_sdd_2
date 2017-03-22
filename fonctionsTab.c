#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "fonctionsTab.h"


void echange(int T[], int i, int j){
    int temp = T[i-1];
    T[i-1] = T[j-1];
    T[j-1] = temp;
}

void afficherTab(int T[], int n)
{
    int j;
    for (j=0; j<n; j++)
        {
        printf("%d ", T[j]);
        }
    printf("\n");
}

int empileTab(pile_t * pPile, int T[], int n)
{
    int i, code = 0;
    for (i=0;i<n;i++)
    {
        code = empile(pPile,T[i]);
    }
    return code;
}

int depileTab(pile_t * pPile, int T[], int n)
{
    int i, code = 1;
    int * cour;
    for (i=0;i<n;i++)
    {
        cour = depile(pPile);
        if (cour == NULL)
        {
            code = 0;
        }
        else
        {
            T[i] = *cour;
        }
    }
    return code;
}
