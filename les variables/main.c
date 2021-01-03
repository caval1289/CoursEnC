#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*-----Boucle while-----*/
  /*  int nombreEntre = 0;

    while(nombreEntre != 47)
    {
        printf("Entre le nombre 47!\n");
        scanf("%d", &nombreEntre);
    }
    printf("Vous avez rentré le nombre 47");
    return 0;*/

    /*---------------------------------------*/
   /* int compteur = 1;

    while(compteur < 11)
    {
        printf("On compte %d\n", compteur);
        compteur++;

    }
    printf("Le programme a bien compte jusqu'a 10 ");
    return 0;*/

    /*------Boucle infini-----*/
   /* while(1)
    {
        printf("boucle infini!!!!!\n");
    }

    return 0;*/


    /*-----do while-----*/

/*    int compteur = 1;

    printf("Rentre un nombre entre 1 et 10\n");
    scanf("%d", &compteur);
    do{
        printf("On compte %d\n",compteur);
        compteur++;
      }while(compteur<11);
        return 0;*/

    /*----for------*/

    int compteur;

    printf("Rentre un nombre entre 1 et 10\n");
    scanf("%d",&compteur);

    for(; compteur < 11; compteur++)
    {
        printf("On compte de %d\n",compteur);
    }
    return 0;
}
