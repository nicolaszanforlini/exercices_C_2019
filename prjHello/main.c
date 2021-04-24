#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    coçmmentaire sur
    plusiers lignes
    */

    //DECLARATIONS

    //byte val1;
    short cpt;
    int val;
    long val2;

    float note; //reel
    double cumul;

    char etat;
    const float pi =3.14;

    int i=0, h=10;



    //pi=3.2;
    //Init
    val=10;
    cpt=0;

    note=17.5;
    cumul=100.0;
    etat = 'A';


    printf("Message de \"Steeve\"");



    float x = 3/2.0f;
    double y = 2.0;


    printf("x : %3.2f", x);

    int rest = 3%2;
    printf("\nreste : %d", rest);

    char car = 'a';
    car = car +1;
    printf("\ncar: %c", car);

    int num =1;
    printf("\n%d", num);
    printf("\n%3d", num);
    printf("\n%03d", num);

    char lettre = 'K';
    printf("\n%c", lettre);
    printf("\n%d", lettre);
    printf("\n%X", lettre);
    printf("\n%o", lettre);
    printf("x : %f", x);
    printf("x : %06.2f", x);

    printf("\nHello world!\n"); //Affiche Hello world \n : retrou a la ligne

    float noteEleve=0;
    printf("Saisie une note : ");
    scanf("%f", &noteEleve);
    printf("\nNote : %06.2f", noteEleve);

    printf("\n%c, Note : %06.2f  ", lettre, noteEleve);








    return 0;

}
