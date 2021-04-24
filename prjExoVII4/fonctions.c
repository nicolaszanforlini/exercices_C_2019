#include <stdio.h>
#include <stdlib.h>
#include "entete.h"

void affiche(struct s_point courbe[], int dim)
{
    for(int i=0; i< dim; i++)
    {
        printf("\nPoint %c de coordonnées %d %d", courbe[i].c, courbe[i].x, courbe[i].y);

    }
}



