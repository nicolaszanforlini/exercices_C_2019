#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED
#define DIM 5
#include <stdio.h>
#include <stdlib.h>

struct spoint
{
    char nom;
    int x,y;
};

typedef struct spoint S_POINT;

void ecrire(S_POINT *, int );
void lire(FILE **);

#endif // ENTETE_H_INCLUDED
