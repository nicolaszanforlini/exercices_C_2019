#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main()
{
    int t1[DIM]={0};
    int t2[DIM] = {10, -5, 5, 20, -3};
    int j=0;
    int i;
    for(i=0; i< DIM; i++)
    {
        if (t2[i] > 0)
        {
            t1[j]=t2[i];
            j++;
        }
    }

    for(i=0; i< DIM; i++)
    {
        printf("\n%d : %d", i, t1[i]);
    }

    return 0;
}
