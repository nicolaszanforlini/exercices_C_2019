#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LG 20

int main()
{
    char nom[LG +1] =  "toto";
    char texte[40 + 1]="\0";
    printf("%s", nom);


    char pren[] = "steeve";
    printf("%s", pren);

    //printf("Saisir votre nom : ");
    //scanf("%s", nom);
    //printf("%s", nom);

    //fgets(nom, 20, stdin);
    printf("%s", nom);


    strcpy(texte , nom);
    printf("apres affecttation : %s", texte);


    char *ch = "hello";
    printf("%s", ++ch);


    printf("Saisir votre adresse :");
    char adresse[100+1];
    gets(adresse);
    printf("%s", adresse);

    //gets()

    char c = 'A';
    putchar(c);

    puts(nom);
    int i=0;

    int lg = strlen(adresse);
    printf("\n lg : %d", lg);
    printf("\n");
    while(adresse[i] != '\0')
    {
        putchar(adresse[i++]);
        printf("\n");
    }




    return 0;
}
