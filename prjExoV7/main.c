#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define DIM 5

void minMax(int [], int, int *, int *);


int main()
{
    int t[DIM] = {10,-2,60,8,1};
    int min, max;

    min = INT_MAX;
    max = INT_MIN;
    minMax(t, DIM, &min, &max);
    printf("Min %d Max : %d", min, max);
    return 0;

}

void minMax(int t[], int dim, int *pMin, int *pMax)
{
    //*pMin=*pMax=t[0];

    for(int i=0; i < dim; i++)
    {
        if (t[i] > *pMax)
            *pMax= t[i];

        if (t[i] < *pMin)
            *pMin= t[i];
    }
}
