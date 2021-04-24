#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;
    int val;
    printf("Hello world!\n");

    printf("Saisir un nombre : ");
    scanf("%d", &val);


    printf("Saisir un caractere : \n");
    __fpurge(stdin);
    scanf("%c", &car);


    return 0;
}
