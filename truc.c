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

/*void truc_iter (int i, int n, int T[]){
    int fin = 0;
    init
    while(!fin){

    }
}*/


int main () {
    int T[] = {1,2,3};
    truc_rec (1,3,T);
    return 0;
}