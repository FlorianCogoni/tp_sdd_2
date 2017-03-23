#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "fonctionsTab.h"
#include "truc.h"
#include "testsTruc.h"
#include "testsPile.h"

int main()
{
    testsPile();
    printf("\n--------------------------------------- \n");
    printf("TESTS TRUC \n");
    compare(1,3,T1);
    printf("\n \n");
    compare(0,3,T1);
    printf("\n \n");
    compare(3,3,T1);
    printf("\n \n");
    compare(-1,3,T1);
    printf("\n \n");
    compare(1,4,T1);
    printf("\n \n");
    compare(1,2,T1);
    printf("\n \n");
    compare(1,1,T2);
    printf("\n \n");
    compare(4,6,T3);
    printf("\n--------------------------------------- \n");
    printf("\n FIN TESTS \n");
    return 0;
}
