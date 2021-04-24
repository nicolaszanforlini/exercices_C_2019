#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cpt=0;
    int val=0;
    long som=10;

    for(cpt=0, som=0; cpt < 3; cpt++, val++)
    {
        som += cpt;
    }
    printf("Somme : %ld val : %d", som, val);

    cpt=0;
    while (cpt < 5)
    {
        printf("Saisir une valeur poisitve");
        scanf("%d", &val);

        if (val < 0)
        {
            printf("Positif svp");
            continue;
        }

        som+=val;
        if (som > 100)
            break;


        cpt++;

    }
    printf("Somme : %ld", som);




}
