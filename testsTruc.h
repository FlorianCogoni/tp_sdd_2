/*
 ______________________________________________________________________________________
|                                                                                      |
|                              ___________________                                     |
|                             |                   |                                    |
|                             |   testsTruc.h     |                                    |
|                             |___________________|                                    |
|                                                                                      |
|______________________________________________________________________________________|

	Ce fichier contient le prototype de la fonction compare, ainsi que les tableaux de tests.
*/

#ifndef TESTS_TRUC
#define TESTS_TRUC

void compare(int i, int n, int T[]);

int T1[3] = {1,2,3};		/* tableau de base */
int T2[1] = {1};			/* tableau à 1 élément, le tableau de 0 élément est interdit par la norme Ansi */
int T3[5] = {1,2,3,4,5};	/* tableau de longueur 5, un tableau plus grand serait possible mais deviendrait illisible pour la comparaison */

#endif
