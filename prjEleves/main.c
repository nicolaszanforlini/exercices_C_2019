#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nbEleves, cpt;
    float note, noteMin, noteMax, moy;
    double som=0;
    char initiale=' ';
    noteMax=0;
    noteMin=21;

    printf("\nSaisir le nbre d'eleves : ");
    scanf("%d", &nbEleves);

    cpt =0;

    while(cpt < nbEleves)
    {
        printf("Saisir votre initiale");
        //scanf("%c", &initiale);
        __fpurge(stdin); //Permet de vider le buffer sous linux
        //fflush(stdin);

        initiale = getchar();

        printf("\nSaisir le note (0-20) : ");
        scanf("%f", &note);

        if (!((note >= 0) && (note <= 20))) // if ((note < 0) || (note > 20))
        {
            printf("\nNote Invalide !!\n");
            continue;
        }


        som+=note;

        if (note >= 10)
        {
            printf("\nEleve N° %d Vous etes admis(e) \navec la note de %f", cpt+1, note);
        }
        else
        {
            if (note >= 8)
            {
                printf("\nVous etes en rattrapage avec la note de %f", note);
            }
            else
            {
                printf("\nVous etes recalé(e) \navec la note de %f\n", note);
            }
        }

        if (note >  noteMax)
            noteMax = note;

        if (note < noteMin)
            noteMin = note;

        cpt++;

    }
    if (nbEleves > 0)
    {
        moy =som / nbEleves;
        printf("\nMax : %5.2f Min %5.2f Moyenne : %5.2f", noteMax, noteMin, moy);
    }
    else
    {
        printf("Aucun Elève !!");
    }

    return 0;
}
