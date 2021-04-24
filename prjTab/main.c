#include <stdio.h>
#include <stdlib.h>
#define DIM 5
#define LG 20

int main()
{

    int nb=5;
    int tab[DIM]={10,20,30,40,50+2};
    char nom[LG + 1];

    /*for(int i=0; i < DIM; i++)
    {
        tab[i] = i*10;

    */

    tab[3]= LG + 50;


    for(int i=0; i < DIM; i++)
    {
        printf("\nindice %d \t: %d", i, tab[i]);

    }

    printf("sizeof de tab : %d", sizeof(tab));
    printf("sizeof (taille en octets ) de tab : %d", sizeof(nom));
    /*
        int = 32 bits = 4 octets
        int tab[5] => 4 octets * 5

    */


    for(int i=0; i < LG; i++)
    {
        printf("\nindice %d \t: %c", i, nom[i]);

    }






    return 0;
}
