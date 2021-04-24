#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val=0;
    double som=0;
    do
    {
        printf("Saisir une valeur : ");
        scanf("%d", &val);
    }
    while(val < 0);

    for(int i=1; i <= val; i++)
    {
        som += 1/(double)i;
        if (i==1)
            printf("1 ");
        else
            printf(" + 1/%d ", i);
    }

    printf(" = %lf", som);
    return 0;
}
