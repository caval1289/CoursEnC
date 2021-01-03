#include <stdio.h>
#include <stdlib.h>

/*--- Exercise 1-----*/

void inisialisationTab (int tab[], int val);
int sommeTableau(int tab[], int tailleTab); //exercice 1
double moyenneTableau(int tab[], int tailleTab); //exercice 2
void copie(int tabOriginal[], int tabCopie[], int tailleTab); //exercice 3

int main()
{
    int tableau[4], tableauCopie[4];

  printf("Entre 4 chiffre\n");
  inisialisationTab(tableau, 4);

  printf("Les sommes rentre sont:\n");
  sommeTableau(tableau,4);// exercise1
  moyenneTableau(tableau,4);//exercise 2
  copie(tableau,tableauCopie,4);
    return 0;
}

void inisialisationTab (int tab[], int val)
{
    int i = 0;

    for (i= 0; i < 4; i++)
    {
        printf("Entre un nombre au clavier\n");
        scanf("%d", &val);
        tab[i]= val;
    }
}

  /*----- Exercice 1 ----*/
int sommeTableau(int tab[], int tailleTab)
{
    int i = 0, total = 0;

    for (i =0; i< tailleTab; i++)
    {
     printf("%d\n",tab[i]);
    }

    for (i=0; i < tailleTab ; i++)
    {
       total = total +tab[i];
    }

  return printf("Le total de c'est chiffre est: %d\n",total);
}

/*----- Exercice 2 -------*/
double moyenneTableau(int tab[], int tailleTab)
{
    int i = 0, cpt = 0;
    double somme =0.0;

    for (i = 0; i < tailleTab; i++)
    {
        //printf("%d\n",tab[i]);
        cpt++;
        somme = somme +tab[i];
    }
    somme = somme/ cpt;
    return printf("La moyenne est : %f\n", somme);
}

/*----- Exercice 3 ------*/
void copie(int tabOriginal[], int tabCopie[], int tailleTab)
{
    int i = 0;
    for(i=0; i < tailleTab; i++)
    {
        printf("Valeur origine %d\n", tabOriginal[i]);
        tabCopie[i] = tabOriginal[i];
    }

     for(i=0; i < tailleTab; i++)
    {
        printf("Valeur copier %d\n", tabCopie[i]);
    }
}
