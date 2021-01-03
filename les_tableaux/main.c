#include <stdio.h>
#include <stdlib.h>

void affiche(int tab[], int tailleTab);
/*----Les tableaux-----*/

int main()
{
    /*int tableau[4], i = 0;

    tableau[0]=10;
    tableau[1]= 23;
    tableau[2]=505;
    tableau[3]=8;*/

    /*voir la position du tableau et l'adresse a la quelle elle est */
    /*printf("%d\n",(tableau[0]));
      printf("%d\n",&tableau[0]);
     printf("%d\n",&tableau[1]);
     printf("%d\n",&tableau[2]);
     printf("%d\n",&tableau[3]);*/

     /*----Parcourire un tableau-----*/

    //Avec une boucle while
   /* while (i < 4)
    {
        printf("%d\n", tableau[i]);
        i++;
    }*/

    // ou avec une boucle for
   /* for (i = 0; i < 4; i++)
    {
        printf("%d\n",tableau[i]);
    }

    return 0;*/

    /*--------------------------------------------------------------------------------*/

    /*----- Initialiser un tableau---------*/


    //int tableau[4], i = 0;
    //int tab[4] = {10,20};


    /*----tab a l'indice 0 vaut 10 a l'indice 1 vaut 20 et a l'indice 2 et 3 valles 0---*/
   /* for(i = 0; i < 4; i++)
    {
         printf("valeur de tab %d\n", tab[i]);
    }*/

/*----boucle pour incérer des  valeurs et les affichers-----*/
   /* for (i=0; i<4; i++)
    {
        //tableau[i] = 0;
        printf("Entré une valeur\n");
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;*/

    /*--- Avec une fonction ----*/

    int tableau [4] = {31, 42, 51};

    affiche(tableau,4);

    return 0;
}

void affiche (int tab[], int tailleTab)
{

    for(int i = 0; i< tailleTab; i++)
    {
        printf("%d\n",tab[i]);
    }
}
