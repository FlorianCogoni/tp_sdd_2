/*
 ______________________________________________________________________________________
|                                                                                      |
|                              ___________________                                     |
|                             |                   |                                    |
|                             |   testsPile.c     |                                    |
|                             |___________________|                                    |
|                                                                                      |
|______________________________________________________________________________________|

	Ce fichier contient la fonction de test des fonctions de pile.

*/



#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

/*---------------------------------------------------------------------
 
 Cette fonction teste :
		-initPile
		-empile 
			* empilage normale (pile non pleine)
			* empilage impossible (pile pleine)
		-depile
			* dépilage normale (pile non vide)
			* dépilage impossible (pile vide)
		-estVide
			* sur des piles vides
			* sur des piles non vides
		-libererPile (pour cela on rempilera sur une pile vide, puis on libèrera)
		

*/



void testsPile()
{
	int elt, code;
	pile_t * pPile = NULL;
	
	printf("\nTEST INITIALISATION\n");
	printf("----------------------------------------------------\n");
	
	
	printf("\n * pile initialisée de taille 5, vide :\n");
	printf("\n(une taille négative provoque un core dumped si on l'utilise à l'empilage par exemple)\n");
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
	
	printf("\n * puis dépile on le dernier élément :\n\n");
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
	
	
	
	printf("\nTEST LIBERATION\n");
	printf("----------------------------------------------------\n");
	printf("\n * on rempile 2,3,4,5 :\n");
	code = empile(pPile, 2);
	printf("\ncode = %d\n", code);
	code = empile(pPile, 3);
	printf("\ncode = %d\n", code);
	code = empile(pPile, 4);
	printf("\ncode = %d\n", code);
	code = empile(pPile, 5);
	printf("\ncode = %d\n", code);
	afficherPile(pPile);
	printf("\n * et on libère la pile :\n");
	libererPile(pPile);
	printf("\nla taille max n'est plus 5 et la pile est bien vide\n\n");
	printf("(l'affichage provoque des erreurs Valgrind)");
}
