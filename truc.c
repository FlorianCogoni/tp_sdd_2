/*
 ______________________________________________________________________________________
|                                                                                      |
|                              ___________________                                     |
|                             |                   |                                    |
|                             |      truc.c       |                                    |
|                             |___________________|                                    |
|                                                                                      |
|______________________________________________________________________________________|

	Ce fichier contient les fonctions truc_rec et truc_iter.

*/

#include <stdio.h>
#include <stdlib.h>
#include "stdio.h"
#include "pile.h"
#include "fonctionsTab.h"



/*---------------------------------------------------------------------
 
 Cette procédure renvoie toutes les permutations des n-i+1 derniers 
éléments d'un tableau T de taille n. Pour cela, elle effectue une 
récursion.

*/

void truc_rec (int i, int n, int T[])
{
    int j;
    if (i == n)					/* si i=n, on affiche T */
    {
        afficherTab(T,n);
    }
    else
    {
        for (j=i; j<=n; j++)
        {
            echange(T,i,j);			/* l'échange permet les permutations */
            truc_rec(i+1,n,T);		/* on appelle récursivement truc(i+1) */
            echange(T,i,j);
        }
    }
}



/*---------------------------------------------------------------------
 
 Cette procédure renvoie toutes les permutations des n-i+1 derniers 
éléments d'un tableau T de taille n. Elle est itérative

*/

void truc_iter(int i, int n, int T[])
{
    int codeEmp,codeDep;
	int j = i, fin = 0;
    pile_t * pPile = initPile(n);
    
    while (!estVide(pPile) || !fin)		/* tant que la pile est pleine ou que ce n'est pas fini */
    {
		if (i<=n && j<=n)		/* on peut encore augmenter i et j */
		{
			codeEmp = empile(pPile, j);		/* on empile les j */
            if(!codeEmp)				/* si l'empilage ne s'est pas bien passé */
            {
                printf("erreur d'empilage \n");
                fin = 1;
            }
			echange(T,i,j);
			i++;		/* on incrémente i */
			j=i;		/* comme au début de chaque appel récursif, j doit prendre la valeur de i */
		}
		else
		{
			if (i==n+1)			/* on affiche le tableau dans le cas où i > n*/
			{
				afficherTab(T,n);
			}
			if (!estVide(pPile)) 	/* la pile est non vide, il reste des j à dépiler */
			{
				codeDep = depile(pPile, &j);
                if(!codeDep)			/* si le dépilage ne s'est pas bien passé */
                {
                    printf("erreur de depilage \n");
                    fin = 1;
                }
				i--;	/* on décrémente i pour l'échange */
				echange(T,i,j);
				j++;
			}
			else
			{
				fin = 1;		/* la pile est vide, on a fini */
			}
		}
	}
	libererPile(pPile);
}
