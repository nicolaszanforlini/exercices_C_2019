#include <stdio.h>
#include <stdlib.h>
#include "entete.h"


void ecrire(S_POINT * adr, int dim)
{

    FILE * fp =NULL;

    fp =  fopen("datas.txt", "a+t");
    if (fp == NULL)
    {
        printf("Pbme Open Fichier");
        return 1;
    }

    S_POINT * pt =NULL;

    for(pt = adr; pt < adr + dim; pt++)
    {
        fwrite(pt, sizeof(S_POINT), 1, fp);
    }

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Fermeture Fichier");
        return 2;
    }

}


void lire(FILE ** fp)
{
    printf("\n ---------- lister ------------\n");

    //FILE * fp = NULL;
    S_POINT point;;

    fp = fopen("datas.txt", "rt");

    if (fp == NULL)
    {
        printf("Pbme Open Fichier");
        return 1;
    }

    do
    {
        fread(&point, sizeof(S_POINT), 1, fp);
        //printf("\nTaille en octets : %d", sizeof(S_PERS));
        if (!feof(fp))
        {
            printf("\nPoint %c de coordonnees X : %d  Y : %d",
                        point.nom, point.x, point.y);
        }


    }while(!feof(fp));

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Close Fichier");
        return 2;
    }




}
