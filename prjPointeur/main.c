#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b;
    int *p = NULL;

    p =  &a;

    printf("\n*p : %d", *p);
    printf("\np : %d", p);
    printf("\n&a : %d", &a);

    b= *p + 10;
    printf("\nb: %d", b);
    printf("\n&b : %d", &b);

    p++;
    printf("\np++ : %d", p++);
    printf("\n*p : %d", *p);

    printf("\n-------------------\n");
    int tab[5]={10,20,30,40,50};
    for(int i=0; i< 5; i++)
    {
        printf("\n%d", tab[i]);
        printf("\n%d", &tab[i]);
    }

    printf("\n-------------------\n");
    printf("\n&tab[0] : %d tab : %d ", &tab[0], tab );
    printf("\n%d",  *tab);
    printf("\n%d", *tab + 1);
    printf("\n%d", *(tab + 1));

    printf("\n-------- Parcours avec pointeurs-----------\n");
    int *ptab =NULL;

    for(ptab = tab; ptab < tab + 5 ; ptab++)
    {
        printf("\n%d", *ptab);
    }





    return 0;
}
