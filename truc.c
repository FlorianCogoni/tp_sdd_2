#include <stdio.h>
#include <stdlib.h>
#include "stdio.h"
#include "pile.h"
#include "fonctionsTab.h"

#define TAILLE 100

void truc_rec (int i, int n, int T[]){
    int j;
    if (i == n){
        afficherTab(T,n);
    }
    else{
        for (j=i; j<=n; j++){
            echange(T,i,j);
            truc_rec(i+1,n,T);
            echange(T,i,j);
        }
    }
}

void truc_iter(int i, int n, int T[])
{
    int codeEmp,codeDep;
    pile_t * pPile = initPile(TAILLE);
    int j = i;
    int fin = 0;
    while(!fin)
    {
        while (i <= n)
        {
            echange(T, i, j);
            codeEmp = empile(pPile, j);
            if(!codeEmp)
            {
                printf("erreur d'empilage \n");
                fin = 1;
                break;
            }
            i = i+1;
            j = i;
        }
        afficherTab(T,n);
        while(!fin && j<=n)
        {
            if (estVide(pPile))
            {
                fin = 1;
            } else
            {
                codeDep = depile(pPile,&j);
                if(!codeDep)
                {
                    printf("erreur depilage \n");
                    fin = 1;
                    break;
                }
                i = i-1;
                echange(T,i,j);
                j = j+1;
            }
        }
    }
}

/*
void truc_iter(int i, int n, int T[])
{
    int j = i, fin = 0;
    pile_t * pPile = initPile(50);
    while (!fin)
    {

		while (i <= n)
		{
			echange(T,i,j);
			empile(pPile, j);
			i ++;
			j = i;
		}
		
		afficherTab(T,n);
		
		if (!estVide(pPile))
		{
			depile(pPile, &j);
			i --;
			echange(T,i,j);
			j ++;
		}
		else
		{
			fin = 1;
		}
		
		
		while (j<n)
		{
			if (!estVide(pPile))
			{
				depile(pPile, &j);
				i --;
				echange(T,i,j);
				j ++;
			}
			else
			{
				fin = 1;
			}
			
		}
		
    }
}*/
