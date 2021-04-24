#include <stdio.h>
#include <stdlib.h>

int main()
{

  float note = 5.5;



  if (note >= 10)
  {
    printf("Vous etes admis(e)");

  }
  else
  {
   printf("Vous etes recalé(e)");
  }

  char situfam = 'c';
  switch (situfam)
  {
    case 'C':
    case 'c':
        printf("Célib");
        break;
    case 'M':
        printf("Marié(e)");
        break;
    case 'D':
        printf("Divorcé(e)");
        break;
    default:
        printf("Cas invlaide");
        break;


  }






}
