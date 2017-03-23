#ifndef PILE
#define PILE

typedef struct pile
{
    int   tmax;
    int   taille;
    int * liste;
} pile_t;

pile_t * initPile(int tmax);
void libererPile(pile_t * pPile);
int estVide(pile_t * pPile);
int empile(pile_t * pPile, int elt);
int depile(pile_t * pPile, int * elt);
void afficherPile(pile_t * pPile);

#endif
