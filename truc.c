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
    int j,k;
    int *e;
    pile_t * p=initPile(TAILLE);
    int fin = 0;

    while (!fin)
    {
        while (i != n)
        {
            for (j=n-1;j<=0;j--)
            {
                echange(T,i,j);
                for (k=0;k<n;k++)
                {
                    empile(p,T[k]);
                }
                echange(T,i,j);
            }
            i=i+1;
        }
        while (!estVide(p))
        {
            for (k=n-1;k<=0;k--)
                {
                    e = depile(p);
                    T[k]=*e;
                }
            for (j=0;j<n;j++)
                {
            printf("%d",T[j]);
            }
        printf("\n");
        }
    }

}