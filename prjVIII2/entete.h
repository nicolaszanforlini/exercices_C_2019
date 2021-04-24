#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED
#define LG 25

struct Personne
{
    char nom[LG + 1];
    char pren[LG + 1];
    int age;

};

typedef struct Personne S_PERS;


void ajouter(void);
void rechercher(void);
void lister(FILE **);



#endif // ENTETE_H_INCLUDED
