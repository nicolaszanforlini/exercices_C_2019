#include <stdio.h>
#include <stdlib.h>

double operation(float, float, char);

int main()
{
    float nb1, nb2;
    char oper;
    double res=0;

    printf("Operation (+,-,/,*) : ");
    //__fpurge(stdin);
    //oper=getchar();
    scanf("%c", &oper);


    printf("\n%c", oper);
    putchar(oper);

    printf("Nombre 1 : ");
    scanf("%f", &nb1);

    printf("Nombre 2 : ");
    scanf("%f", &nb2);

    res=operation(nb1,nb2,oper);
    printf("Résultat %f %c %f = %lf : ", nb1, oper, nb2, res);


    return 0;
}


double operation(float op1, float op2, char op)
{
    double res=0;

    switch(op)
    {
        case '-':
            res=op1 - op2;
            break;
         case '/':
            if (op2 == 0)
                return 0.0;
            res=op1 / op2;
            break;
        case '*':
            res=op1 * op2;
            break;
        default:
            res=op1 + op2;
            break;
    }
    return res;








}
