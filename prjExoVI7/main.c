#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LG_VERBE 20

int main()
{
    char verbe[LG_VERBE + 1];
    char * pronoms[6] = {"je", "tu", "il/elle/on", "nous", "vous", "ils/elles"};
    char * terminaisons[6] = {"e", "es", "e", "ons", "ez", "ent"};
    char * adterm;
    char ch[100 + 1 ]="\0";
    do
    {
        printf("\nSaisir un verbe du premier groupe : ");
        gets(verbe);
        adterm = verbe + strlen(verbe) - 2;

        printf("\nTerminaison : %s", adterm);
    }while(strcmp(adterm, "er") != 0);

    for(int i=0; i < 6; i++)
    {
        strcpy(adterm, terminaisons[i]);
        //1
        strcpy(ch, pronoms[i]); //affecvtation de chaine
        strcat(ch, " ");    //concatenation vers ch
        strcat(ch, verbe);
        printf("\n%s", ch);

        //2
        printf("\n%s %s", pronoms[i], verbe);
    }















    return 0;
}
