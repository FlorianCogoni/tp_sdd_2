#include "stdio.h"
#include "pile.h"

void echange(int T[], int i, int j){
    int temp = T[i];
    T[i] = T[j];
    T[j] = temp;
}

void truc_rec (int i, int n, int T[]){
    int j;
    if (i == n){
        for (j=0; j<n; j++){
            printf("%d \n", T[j]);
        }
    }
    else{
        for (j=i; j<n; j++){
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
    pile_t * p=initpile(TAILLE);
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
        while (!est_vide(p))
        {
            for (k=n-1;k<=0;k--)
                {
                    depile(p,e);
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


int main () {
    int T[] = {1,2,3};
    truc_rec (1,3,T);
    truc_iter(1,3,T);
    return 0;
}
