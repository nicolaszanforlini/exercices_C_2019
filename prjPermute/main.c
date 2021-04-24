#include <stdio.h>
#include <stdlib.h>

void permute(int, int);
void permuteAdr(int *, int *);

int main()
{
    int v1=10, v2=20;
    printf("Avant Appel - v1 : %d v2 : %d\n", v1, v2);
    //permute(&v1, &v2);
    permuteAdr(&v1, &v2);
    printf("Apres Appel - v1 : %d v2 : %d\n", v1, v2);


    int *p;
    p=&v1;
    printf("%d", *p);


    return 0;
}

void permuteAdr(int *p1, int *p2)
{
    int tampon = 0;
    tampon = *p1;
    *p1 = *p2;
    *p2 = tampon;

     printf("Dans fonction  permuteAdr - *p1 : %d *p2 : %d\n", *p1, *p2);
}



void permute(int a, int b)
{
    int tampon=0;
    tampon = a;
    a =b;
    b= tampon;

     printf("Dans fonction  permute - a : %d b : %d\n", a, b);
}


