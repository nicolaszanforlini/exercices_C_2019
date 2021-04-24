#include <stdio.h>
#include <stdlib.h>
#include "entete.h"


int main()
{
    FILE *fichier=NULL;
printf("%s", __FILE__);
printf("%s", __DATE__);
printf("%s", __TIME__);
printf("%s", __VERSION__);

    char choix='\0';
    do
    {
        printf("\n--------- MENU PRINCIPAL---------\n");
        printf("\n\tA - Ajouter \n");
        printf("\n\tR - Rechercher \n");
        printf("\n\tP - Afficher tout le fichier \n");
        printf("\n\tQ - Quitter \n");

        printf("Votre choix : ");
        __fpurge(stdin);
        choix = getchar();


        switch(choix)
        {
            case 'A':
            case 'a':
                ajouter();
                break;

            case 'R':
            case 'r':
                rechercher();
                break;
            case 'P':
            case 'p':
                lister(fichier);
                break;
            case 'Q':
            case 'q':
                printf("\nFin\n");
                break;
            default:
                printf("\nOption Invalide\n");
                break;
        }


    }while (choix != 'Q' && choix != 'q');


    return 0;
}
