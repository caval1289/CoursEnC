#include <stdio.h>
#include <stdlib.h>
#include <math.h>    //librérie pour les math

int main()
{
    int resulta = 0, nombre1 = 0, nombre2=0;     // calcul de 2 variable

    printf("Entrez une valeur\n");
    scanf("%d",&nombre1);
    printf("Entrez une autre valeur\n");
    scanf("%d",&nombre2);
    resulta = nombre1 + nombre2;
    printf("Le reponse est %d + %d = %d", nombre1, nombre2,resulta);

    return 0;

    /*-------------------------------------------------------------------------------------------------------------*/

   /* int resulta = 2;

    resulta +=4;                            //incrementation
    printf("Le resulta est %d\n",resulta);
    resulta -=3;                            //decrementation
    printf("Le resulta est %d\n",resulta);
    resulta *=5;
    printf("Le resulta est %d\n",resulta);
    resulta /=3;
    printf("Le resulta est %d\n",resulta);
    resulta %=3;
    printf("Le resulta est %d\n",resulta);

    return 0;*/

    /*-------------------------------------------------------------------------------------------------------------*/

    /*
    double absolu = 0, nombre = -27;

    absolu = fabs(nombre);  //Cette fonction retourne la valeur absolue d'un nombre, c'est-à-dire |x| (c'est la notation mathématique)
    printf("%lf\n", absolu);


    double dessus = 0, nombre1 = 52.71;

    dessus = ceil(nombre1);  // Cette fonction renvoie le premier nombre entier après le nombre décimal qu'on lui donne
    printf("%lf\n",dessus);

    double resultat = 0, nombre2 = 2;

    resultat = pow(nombre2,3);  //Cette fonction permet de calculer la puissance d'un nombre
    printf("%lf\n", resultat); //resultat vaudra 2^3 = 8

    double resultat1 = 0, nombre3 = 100;

    resultat1 = sqrt(nombre3);
    printf("%lf\n", resultat1);

    return 0;
*/
}
