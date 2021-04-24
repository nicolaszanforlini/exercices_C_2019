#include <stdio.h>
#include <stdlib.h>
#include "entete.h"


int main()
{
    S_POINT tab[DIM]= {
                        {'A', 10,10},
                        {'B', -10,10},
                        {'K', 10,100},
                        {'Y', 20,30},
                        {'Z', 0,1}
                        };

    FILE * fichier =NULL;

    ecrire(&tab[0], DIM);

    lire(fichier);
    return 0;
}
