#include <stdio.h>
#include <stdlib.h>

int main()
/*---------------consdition if else-----------*/
{  /*
    int age=0;

    printf("Quelle age avez-vous?\n");
    scanf("%d", &age);

    if (age == 18)
    {
        printf("Bonne annif !\n");
    }
    else if (age > 18)
    {
        printf("Vous etes majeur\n");
    }
    else
    {
        printf("Aga gaa aga gaaa \n");
    }
    */

    /*int age = 0, argent = 0;

    printf("Quelle age avez-vous?\n");
    scanf("%d", &age);
    printf("commbien avez vous sur votre compte?\n");
    scanf("%d", &argent);

    if(age > 30 || argent > 10000)
    {
        printf("Bienvenue chez PicsouBanq !\n");
    }
    else
    {
        printf("Hors de ma vue, miserable !!!\n");
    }
    return 0;*/

    /*int age = 0;

    printf("quelle age avez-vous\n");
    scanf("%d",&age);

    if(!(age<18))
    {
        printf("Tu es majeur car tu as %d\n", age);
    }
    else
    {
        printf("Tu es mineur car tu as %d\nd", age);
    }*/
    /*--------------------------*/
    //condition booléens
/*
    int age = 20;
    int majeur = 0;

    majeur = age ==10;
    printf("Majeur vaut:%d",majeur);
*/

/*-----------------*/
//switch

  /*  int age = 0;

    printf("quelle age avez vous?\n"),
    scanf("%d",&xage);

    switch (age)
{
case 2:
  printf("Salut bebe !");
  break;
case 6:
  printf("Salut gamin !");
  break;
case 12:
  printf("Salut jeune !");
  break;
case 16:
  printf("Salut ado !");
  break;
case 18:
  printf("Salut adulte !");
  break;
case 68:
  printf("Salut papy !");
  break;
default:
  printf("Je n'ai aucune phrase de prete pour ton age  ");
  break;
}*/

//exercise

    int choixMenu = 0;

    printf("===Menu===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Becon\n");
    printf("4. Big Mac\n");
    printf("Quelle est votre choix? indiqué le numéro du menu\n");
    scanf("%d", &choixMenu);

    switch(choixMenu)
    {
    case 1:
        printf("vous avez choisi %d. Royal Cheese\n", choixMenu);
        break;
    case 2:
        printf("vous avez choisi %d. Mc Deluxee\n", choixMenu);
        break;
    case 3:
        printf("vous avez choisi %d. Mc Becon\n", choixMenu);
        break;
    case 4:
        printf("vous avez choisi %d. Big Mac\n", choixMenu);
        break;
    default:
        printf("Il n'est pas dans la liste\n");
        break;
    }
    return 0;
}
