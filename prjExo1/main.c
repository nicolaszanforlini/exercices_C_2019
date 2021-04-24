#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbArt;
    double prixHt;
    float tva = 0;
    double totalTTC=0;

    printf("Saisir le Nb d'articles : ");
    scanf("%d", &nbArt);

    printf("Saisir le prix HT : ");
    scanf("%lf", &prixHt);

    printf("Saisir le taux de TVA (%): ");
    scanf("%f", &tva);

    totalTTC =  (nbArt * prixHt) * (1 + (tva/100));
    printf("Total TTC %lf", totalTTC);


    return 0;
}
