#include <stdio.h>
#include <stdlib.h>

int lecture()
{
    FILE * fp = NULL;
    char lettre;

    fp = fopen("datas.txt", "rt");

    if (fp == NULL)
    {
        printf("Pbme Open Fichier");
        return 1;
    }



    fseek(fp, -10, SEEK_END);
    do
    {
        fread(&lettre, sizeof(lettre), 1, fp);
        if (!feof(fp))
        {
            printf("\n%c", lettre);
        }


    }while(!feof(fp));

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Close Fichier");
        return 2;
    }
}



int ecriture()
{
    FILE * fp = NULL;
    char lettre;

    fp = fopen("datas.txt", "wt");

    if (fp == NULL)
    {
        printf("Pbme Fichier");
        return 1;
    }

    for(lettre = 'a'; lettre <= 'z'; lettre++)
    {
        fwrite(&lettre, sizeof(char), 1, fp);
    }

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Fichier");
        return 2;
    }
}


int main()
{
    int val = ecriture();
     val = lecture();



    return val;
}
