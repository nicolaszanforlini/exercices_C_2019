#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main()
{
       /*
        On considere un tableau a une dimension de dimension 5,
        affiche la valeur maximale
       */
        int tab[DIM]={-10,-200,-30,-40,-50+2};
        int max = tab[0];

        for(int i=0; i < DIM; i++)
        {
            if (tab[i] > max)
            {
                max = tab[i];
            }
        }

        printf("La max est : %d", max);







    return 0;
}
