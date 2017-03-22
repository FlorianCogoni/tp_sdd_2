#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

pile_t * initPile(int tmax) {
    pile_t * pPile = NULL;
    pPile = (pile_t *) malloc(sizeof(pile_t)); /* est-ce que c'est pas un des trucs qu'il a reproché ? */
    if (pPile != NULL) {
        pPile->tmax = tmax;
        pPile->taille = 0;
        pPile->liste = (int *) malloc(tmax * sizeof(int));
    }
    return pPile;
}

int estVide(pile_t * pPile){ /* J'ai changé le nom par cohérence */
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
        pPile->liste[pPile->taille] = elt;
        pPile->taille += 1;
    }
    return code;
}

int * depile(pile_t * pPile){
    int * adresseElt = NULL;
    if (pPile->taille > 0)
    {
        adresseElt = pPile->liste[pPile->taille];
        pPile->taille -= 1;
    }
    return adresseElt;
}
