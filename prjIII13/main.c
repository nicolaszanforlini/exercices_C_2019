#include <stdio.h>
#include <stdlib.h>

int main()
{
   float note, noteMin, noteMax;
   int cpt, nbMin, nbMax;


   noteMax=0;
   noteMin=21;
   nbMin=nbMax=0;


   do
   {
        printf("donnez une note (-1 pour finir) : ");
        scanf("%f", &note);

        if (note == -1) {break; }

            if ((note<0) || (note > 20))
            {
                printf("Note invalide !!!");
                continue ;
            }


            if (note > noteMax)
            {
                noteMax=note;
                nbMax=0;
            }

            if (note == noteMax)
            {
                nbMax++;
            }

            if (note < noteMin)
            {
                noteMin=note;
                nbMin=0;
            }

            if (note == noteMin)
            {
                nbMin++;
            }

   }while(note != -1);

    if (nbMax != 0)
    {
        printf("\nnote maximale : %f attribué %d fois", noteMax, nbMax);
        printf("\nnote minimale : %f attribué %d fois", noteMin, nbMin);
    }


    return 0;
}
