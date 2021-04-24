#include <stdio.h>
#include <stdlib.h>

#define NBL 2
#define NBC 3
int main()
{
    int t[2][3] = {{100, 200, 300}, {50,150,250}};

    for(int i=0; i < NBL; i++)
    {
        for(int j =0; j< NBC; j++)
        {
            printf("\nt[%d][%d] = %d", i , j , t[i][j]);
        }
    }
    printf("\n-------------------------\n");
    int * pt = NULL;

    for(pt = &t[0][0]; pt < t[0] +  (NBL*NBC); pt++)
    {
        printf("\n%d", *pt);
    }
    return 0;
}
