#include <stdio.h>
#include <stdlib.h>
#define NBL 3
#define NBC 4

int main()
{
   float t[NBL][NBC] = {{10,20,30,40},{100,200,300,400},{1000,2000,3000,4000}};
   double som =0.0;

   //Tableau
   for(int i=NBL-1; i >= 0; i--)
   {
    for(int j=NBC-1; j >= 0; j--)
    {
        printf("\nt[%d][%d] : %f", i, j , t[i][j] );
        som+= t[i][j];
    }
   }

   printf("\nSomme : %lf", som);

   printf("\n----------------------\n");
   //Pointeur
   float *pt =NULL;

   for(som=0, pt = t[0] + ((NBL*NBC) -1) ; pt >= t[0]; pt--)
   {
        printf("\n%f : ", *pt);
        som+=(*pt);

   }

    printf("\nSomme : %lf", som);




    return 0;
}
