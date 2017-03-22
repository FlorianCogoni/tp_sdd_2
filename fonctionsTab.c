#include <stdio.h>
#include "pile.h"


void echange(int T[], int i, int j){
    int temp = T[i];
    T[i] = T[j];
    T[j] = temp;
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
    for (i=0;i<n;i++)
    {
        T[i] = depile(pPile);
        if (T[i] == NULL)
        {
            code = 0;
        }
    }
    return code;
}
