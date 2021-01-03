#include <stdio.h>
#include <stdlib.h>


/*--les variable on voit l'adresse--*/
/*
int main()
{
    int age = 31;

    printf("La variable age vaut: %d\n", age);
    printf("L'adresse de la variable age est : %p", &age);
    return 0;
}
*/

/*----Adresse et valeur------*/
/*
int main ()
{
    int karimi = 10;
    int *pointeurSurAge;
    pointeurSurAge = &karimi;

    printf("adresse de la variable age Je veux la valeur de la variableage %p\n", &karimi);
    printf("valeur de la variable age Je veux l'adresse à laquelle se trouve la variableage %d\n ", karimi);
    printf("adresse du pointeur pointeurSurAge %p\n", &pointeurSurAge);

    printf("valeur du pointeur pointeurSurAge Je veux la valeur depointeurSurAge» (cette valeur étant une adresse) %p\n", pointeurSurAge);
    printf("Valeur du pointeur avec * Je veux la valeur de la variable qui se trouve à l'adresse contenue danspointeurSurAge %d\n", *pointeurSurAge);
}
*/

/*------Envoyer un pointeur a une function -------*/
/*
void triplePointeur(int *pointeurSurNombre);

int main ()
{
    int nombre = 0;

    printf("Rentre un nombre\n");
    scanf("%d",&nombre);

    triplePointeur(&nombre);
    printf("La valeur est multiplié par 3 et elle vaut %d\n", nombre);
    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
     *pointeurSurNombre *= 3;
}
*/

/*------ exercise pointeur--------*/

void decoupeMinutes(int *h, int *m);

int main ()
{
    int heures = 0, minutes = 0;

    printf("indique le nombre de minutes pour le traduire un heure\n");
    scanf("%d", &minutes);

    decoupeMinutes(&heures, &minutes);
    printf("%d heures et %d minute\n", heures, minutes);

    return 0;
}

void decoupeMinutes(int *h, int*m)
{
    *h = *m /60;
    *m = *m %60;
}
