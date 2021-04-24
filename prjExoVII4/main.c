#include <stdio.h>
#include <stdlib.h>
#include "entete.h"

int main()
{
    struct s_point courbe[NP] = {{'X', 10, 10 }, {'Y', 5, 10}, {'Z', 5,3}};
    char ligne[128+1] ="\0";

    affiche(courbe, NP);


    for(int i=0; i< NP; i++)
    {
        printf("\nSaisir le nom du point avec les coordonnees ");
        gets(ligne);
        int nb = sscanf(ligne, "%c %d %d", &courbe[i].c, &courbe[i].x, &courbe[i].y);
        printf("\nNb arguments : %d", nb);
    }

    affiche(courbe, NP);
    return 0;
}


