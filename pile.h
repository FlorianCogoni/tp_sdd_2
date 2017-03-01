#ifndef PILE
#define PILE

typedef struct pile {
    int tmax;
    int taille;
    int liste[];
} pile_t;

pile_t * initpile(int tmax);
int est_vide(pile_t * pPile);
int empile(pile_t * pPile, int elt);
int depile(pile_t * pPile, int * elt);

#endif