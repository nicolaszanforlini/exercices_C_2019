#include <stdio.h>
#include <string.h>
#include "entete.h"


void ajouter(void)
{
    FILE * fp = NULL;

    S_PERS persToAdd;

    printf("\nSaisir le nom : ");
    __fpurge(stdin);
    gets(persToAdd.nom);

    printf("\nSaisir le prénom : ");
     __fpurge(stdin);
    gets(persToAdd.pren);

    printf("\nSaisir l'age : ");
     __fpurge(stdin);
    scanf("%d", &persToAdd.age);

    fp =  fopen("datas.txt", "a+t");
    if (fp == NULL)
    {
        printf("Pbme Open Fichier");
        return 1;
    }

    fwrite(&persToAdd, sizeof(S_PERS), 1, fp);

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Fermeture Fichier");
        return 2;
    }



}

void rechercher(void)
{

    printf("\n ---------- rechercher ------------\n");

    FILE * fp = NULL;
    S_PERS persToRead;


    char nomRech[LG + 1];

    printf("Saisir le nom recherché : ");
     __fpurge(stdin);
    gets(nomRech);


     __fpurge(stdin);
    fp = fopen("datas.txt", "rt");

    if (fp == NULL)
    {
        printf("Pbme Open Fichier");
        return 1;
    }

    do
    {
        fread(&persToRead, sizeof(persToRead), 1, fp);

        printf("\nTaille en octets : %d", sizeof(S_PERS));
        if (!feof(fp))
        {
            if(strcmp(nomRech, persToRead.nom) == 0)
            {
                printf("\nNom %s Prenom %s Age : %d",
                    persToRead.nom,
                    persToRead.pren,
                    persToRead.age);
            }
        }


    }while(!feof(fp));

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Close Fichier");
        return 2;
    }





}

void lister(FILE ** fp)
{
    printf("\n ---------- lister ------------\n");

    //FILE * fp = NULL;
    S_PERS persToRead;

    fp = fopen("datas.txt", "rt");

    if (fp == NULL)
    {
        printf("Pbme Open Fichier");
        return 1;
    }

    do
    {
        fread(&persToRead, sizeof(persToRead), 1, fp);
        printf("\nTaille en octets : %d", sizeof(S_PERS));
        if (!feof(fp))
        {
            printf("\nNom %s Prenom %s Age : %d",
                persToRead.nom,
                persToRead.pren,
                persToRead.age);
        }


    }while(!feof(fp));

    int rep = fclose(fp);
    if (rep !=  0)
    {
        printf("Pbme Close Fichier");
        return 2;
    }


}
