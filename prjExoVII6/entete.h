#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED
#define LG_NOM 30

struct date
{
    int jour, mois, annee;
};

struct personne
{
    char nom[LG_NOM + 1];
    struct date date_embauche;
    struct date date_poste;
};

void remplit(struct personne *);


#endif // ENTETE_H_INCLUDED
