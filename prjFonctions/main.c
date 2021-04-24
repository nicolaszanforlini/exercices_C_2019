#include <stdio.h>
#include <stdlib.h>

void affValeur(); //fonction prototype
void affValNb(int);
double carre(int );

//variable globale
int cpt=50;


int main()
{

    int cpt=20;
    printf("\n%d\n", ++cpt);


    affValeur();
    affValNb(5);
    printf("\n%d\n", ++cpt);
    int val = 5;
    double resultat = carre(val);
    printf("resultat : %lf", resultat);
    return 0;
}

double carre(int val)
{
    double res=0;
    res= val * val;
    return res;

}

void affValeur()
{
    printf("Coucou");
}

void affValNb(int nb)
{
    for(int i=0; i < nb; i++)
    {
        printf("\nCoucou %d", i);
        cpt = cpt - i;
        printf("\n---%d", cpt);
    }

}




