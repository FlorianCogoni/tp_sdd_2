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
    compare(1,3,T1);
    printf("\n \n");
    compare(0,0,T2);
    printf("\n \n");
    compare(1,1,T3);
    printf("\n \n");
    compare(3,5,T4);
    printf("\n \n");
    compare(5,5,T4);
    printf("\n \n");
    compare(4,3,T1);
    printf("\n \n");
    compare(1,10,T1);
    printf("\n \n");
    compare(0,3,T1);
    printf("\n \n");
    compare(-1,3,T1);
    printf("\n \n");
    return 0;
}
