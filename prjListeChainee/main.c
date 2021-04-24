#include <stdio.h>
#include <stdlib.h>

struct lettre
{
    char car;
    struct lettre * suivant;
};

typedef struct lettre S_LETTRE;

int main()
{

    S_LETTRE *pdebut =NULL;
    S_LETTRE * tmp = NULL;
    char caractere='\0';
    char choix='\0';

    do
    {
        printf("\n------------ MENU ---------------\n");
        printf("\n 1 - Afficher la liste \n");
        printf("\n 2 - Ajouter en fin\n");
        printf("\n 3 - Ajouter en tete \n");
        __fpurge(stdin);
        choix = getchar();

        switch(choix)
        {
            case '1':
                tmp = pdebut;
                if(tmp == NULL)
                {
                        printf("\nLa liste est vide !!\n");
                        break;
                }

                while(tmp != NULL)
                {
                    printf("\nCaractere : %c", tmp->car);
                    __fpurge(stdin);
                    tmp = tmp->suivant;

                }

                break;
            case '2':
                printf("Saisir la lettre a ajouter");
                __fpurge(stdin);
                caractere = getchar();

                if (pdebut == NULL)
                {
                    pdebut = (S_LETTRE *)malloc(sizeof(S_LETTRE)); //Allocation d'un élément de type S_LETTRE
                    pdebut->car = caractere;
                    (*pdebut).suivant = NULL;

                }
                else
                {
                    tmp = pdebut;
                    while(tmp->suivant != NULL)
                    {
                        tmp = tmp->suivant;

                    }
                    tmp->suivant =  (S_LETTRE *)malloc(sizeof(S_LETTRE));
                    tmp=tmp->suivant; //Ligne
                    tmp->car = caractere;
                    tmp->suivant = NULL;
                }
                break;
            case '3':
                 printf("Saisir la lettre a ajouter");
                __fpurge(stdin);
                caractere = getchar();


                if (pdebut == NULL)
                {
                    pdebut = (S_LETTRE *)malloc(sizeof(S_LETTRE)); //Allocation d'un élément de type S_LETTRE
                    pdebut->car = caractere;
                    (*pdebut).suivant = NULL;

                }
                else
                {
                    tmp = (S_LETTRE *)malloc(sizeof(S_LETTRE));

                    tmp->car =  caractere;
                    tmp->suivant = pdebut;
                    pdebut = tmp;

                }






                break;
            case 'Q':

                printf("-- Fin --");
                break;

            default:
                printf("\nOption invalide !");
                break;
        }



    }while (choix != 'Q');



/*
    if (pdebut == null)
    {
        pdebut = (S_LETTRE *)malloc(sizeof(S_LETTRE)); //Allocation d'un élément de type S_LETTRE
        pdebut->car = 'A';
        (*pdebut).suivant = NULL;

    }
*/

    //printf(sizeof(S_LETTRE));
    return 0;
}
