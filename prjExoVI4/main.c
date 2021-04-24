#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * jour[7] = { "lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    int posJour;

    printf("Saisir le n° du jour de la semaine : ");
    scanf("%d", &posJour);

    printf("%s", jour[posJour -1]);





    return 0;
}
