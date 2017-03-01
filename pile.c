#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

pile_t * initpile(int tmax) {
    pile_t * pPile = NULL;
    pPile = (pile_t *) malloc(sizeof(pile_t));
    if (pPile != NULL) {
        pPile->tmax = tmax;
        pPile->taille = 0;
        pPile->liste = (int *) malloc(tmax * sizeof(int));
    }
    return pPile;
}

int est_vide(pile_t * pPile){
    int bool = 0;
    if (pPile->taille == 0){
        bool = 1;
    }
    return bool;
}

int empile(pile_t * pPile, int elt){
    int code = 1;
    if (pPile->taille == pPile->tmax){
        code = 0;
    }
    else{
        pPile->liste[taille] = elt;
        pPile->taille ++;
    }
    return code;
}

int depile(pile_t * pPile, int * elt){
    int code = 1;
    if (pPile->taille == 0){
        code = 0;
    }
    else{
        *elt = pPile->liste[taille];
        pPile->taille --;
    }
    return code;
}