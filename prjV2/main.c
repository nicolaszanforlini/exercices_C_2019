#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[5] = {10,3,15,-5,12};
    int *pt = NULL;
    int *pMax = NULL;
    int *pMin = NULL;


    pMax = pMin = t;

    for(pt = t + 1; pt < t + 5; pt++)
    {
        if ( *pt > *pMax)
        {
            pMax = pt;
        }
         if ( *pt < *pMin)
        {
            pMin = pt;
        }

    }

    printf("Max :  %d", *pMax);
    printf("Min :  %d", *pMin);

    return 0;
}
