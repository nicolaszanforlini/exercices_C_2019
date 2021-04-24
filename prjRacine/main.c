#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double val=0.0;
    double res=0.0;
    do
    {
        printf("\nDonnez un nombre positif : ");
        scanf("%lf", &val);

        if (val < 0)
        {
            printf("\npositif svp \n");
            continue;
        }
        if (val == 0)
            //goto etiquette;
            break;

        res=sqrt(val);
        printf("Racine carre : %lf", res);


    }while(val != 0);

    return 0;
/*
tag:
    ptintf("tag");

etiquette:
    printf("Fin");
    goto tag
*/





}
