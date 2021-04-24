#include <stdio.h>
#include <stdlib.h>
#include "entete.h"

void remplit(struct personne * pPers)
{
    char rep='\0';
    printf("Saisir le nom : ");
    gets(pPers->nom);

    printf("\ndate embauche jj mm aa");
    scanf("%d %d %d",
                    &pPers->date_embauche.jour,
                    &pPers->date_embauche.mois,
                    &pPers->date_embauche.annee
                    );
    printf("date embauche = date poste ?  (O,N)");
    __fpurge(stdin);
    rep=getchar();


    if (!(rep == 'O' || rep == 'o'))
    {
        printf("\ndate poste jj mm aa");
        scanf("%d %d %d",
                        &pPers->date_poste.jour,
                        &pPers->date_poste.mois,
                        &pPers->date_poste.annee
                        );
    }






}
