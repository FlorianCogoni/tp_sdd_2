#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

void testsPile()
{
	int elt, code;
	pile_t * pPile = NULL;
	
	printf("\nTEST INITIALISATION\n");
	printf("----------------------------------------------------\n");
	
	printf("\n * pile initialisée de taille 5, vide :\n");
	pPile = initPile(5);
	afficherPile(pPile);
	
	printf("\n * test estVide :\n\n");
	printf("%d\n", estVide(pPile));
	
	
	
	printf("\nTESTS EMPILAGE\n");
	printf("----------------------------------------------------\n");
	
	printf("\n * on empile 1 :\n");
	code = empile(pPile, 1);
	printf("\ncode = %d\n", code);
	afficherPile(pPile);
	
	printf("\n * puis on empile 2,3,4,5 :\n");
	code = empile(pPile, 2);
	printf("\ncode = %d\n", code);
	code = empile(pPile, 3);
	printf("\ncode = %d\n", code);
	code = empile(pPile, 4);
	printf("\ncode = %d\n", code);
	code = empile(pPile, 5);
	printf("\ncode = %d\n", code);
	afficherPile(pPile);
	
	printf("\n * si on essaie d'empiler 6,7 :\n");
	code = empile(pPile, 6);
	printf("code = %d\n", code);
	code = empile(pPile, 7);
	printf("code = %d\n", code);
	afficherPile(pPile);
	
	printf("\n * test estVide :\n\n");
	printf("%d\n", estVide(pPile));
	
	
	
	printf("\nTESTS DEPILAGE\n");
	printf("----------------------------------------------------\n");
	
	printf("\n * on dépile 5 :\n\n");
	code = depile(pPile,&elt);
	printf("code = %d\nélément dépilé : %d\n",code,elt);
	afficherPile(pPile);
	
	printf("\n * puis on dépile 4,3,2 :\n\n");
	code = depile(pPile,&elt);
	printf("\ncode = %d\nélément dépilé : %d\n",code,elt);
	code = depile(pPile,&elt);
	printf("\ncode = %d\nélément dépilé : %d\n",code,elt);
	code = depile(pPile,&elt);
	printf("\ncode = %d\nélément dépilé : %d\n",code,elt);
	afficherPile(pPile);
	
	printf("\n * puis on le dernier élément :\n\n");
	code = depile(pPile,&elt);
	printf("code = %d\nélément dépilé : %d\n",code,elt);
	afficherPile(pPile);
	
	printf("\n * test estVide :\n\n");
	printf("%d\n\n", estVide(pPile));
	
	printf("\n * si on continue de dépiler (2 fois) :\n");
	code = depile(pPile,&elt);
	printf("code = %d\n",code);
	code = depile(pPile,&elt);
	printf("code = %d\n",code);
	afficherPile(pPile);
	
	
	
	printf("\nTESTS LIBERATION\n");
	printf("----------------------------------------------------\n");
	
	printf("\n * si on libère la pile :\n");
	libererPile(pPile);
	afficherPile(pPile);
	empile(pPile,1);
	afficherPile(pPile);
	printf("la taille max n'est plus 5 et la pile est bien vide\n\n");
}
