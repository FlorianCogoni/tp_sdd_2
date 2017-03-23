#include <stdio.h>
#include <stdlib.h>
#include "stdio.h"
#include "pile.h"
#include "fonctionsTab.h"

void truc_rec (int i, int n, int T[])
{
    int j;
    if (i == n)
    {
        afficherTab(T,n);
    }
    else
    {
        for (j=i; j<=n; j++)
	{
            echange(T,i,j);
            truc_rec(i+1,n,T);
            echange(T,i,j);
        }
    }
}

void truc_iter(int i, int n, int T[])
{
    int j = i, fin = 0;
    pile_t * pPile = initPile(n);
    while (!estVide(pPile)  || !fin)
    {
	if (i<=n && j<=n)
	{
		empile(pPile, j);
		echange(T,i,j);
		i++;
		j=i;
	}
		else
		{
			if (i==n+1)
			{
				afficherTab(T,n);
			}
			if (!estVide(pPile))
			{
				depile(pPile, &j);
				i--;
				echange(T,i,j);
				j++;
			}
			else
			{
				fin = 1;
			}
		}
	}
	libererPile(pPile);
}
