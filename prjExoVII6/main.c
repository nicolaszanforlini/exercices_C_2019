#include <stdio.h>
#include <stdlib.h>
#include "entete.h"

int main()
{
    struct personne p;

    remplit(&p);

    printf("\n%s embauché, le %02d %02d %02d",
            p.nom, p.date_embauche.jour,
             p.date_embauche.mois,
             p.date_embauche.annee);

    printf("\n%s en poste, le %02d %02d %02d",
            p.nom, p.date_poste.jour,
             p.date_poste.mois,
             p.date_poste.annee);

    return 0;
}
