#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct eleve
{
    char nom[20+1];
    float note;
};

struct livre
{
    char titre[20+1];
    float prix;
};

typedef struct livre S_LIVRE;



int main()
{
    struct eleve el1;

    strcpy(el1.nom, "Steeve");
    el1.note = 10.75;

    struct eleve el2 = {"Sandrine", 15};

    printf("Eleve 2 : %s %5.2f", el2.nom, el2.note);

    S_LIVRE book1 = {"Tartuffe", 29.75};
    printf("Livre : %s %5.2f", book1.titre, book1.prix);

    struct eleve *el3 = NULL;
    el3 = &el2;
    el3->note = 17;
    printf("%s %f", el3->nom, el3->note);

    strcpy(el3->nom, "Toto");


   printf("Eleve 3 : %s %f", el3->nom, el3->note);

    return 0;
}
