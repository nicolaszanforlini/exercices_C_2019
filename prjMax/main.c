#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2, val3;
    val1=val2=val3=0;

    int max=0;

    printf("Saisir 3 valeurs distinctes");
    scanf("%d %d %d", &val1, &val2, &val3);

    /*if (val1 > val2)
    {
        max=val1;
    }
    else
        max=val2;
    */

    max=(val1>val2)?val1:val2;

    if (val3 > max)
        max = val3;

    printf("Max : %d", max);







}
