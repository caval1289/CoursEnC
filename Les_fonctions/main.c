#include <stdio.h>
#include <stdlib.h>


/*----- function-----*/
/*
int triple(int nombre)
{
    return 3* nombre;
}

int main()
{
    int nombreEntre = 0, nombreTriple = 0;

    printf("Entrez un nombre...\n");
    scanf("%d", &nombreEntre);

    nombreTriple = triple(nombreEntre);
    printf("Le triple du nombre entre est %d", nombreTriple);

    return 0;
}
*/
/*----Même fonction mais on renvoi directement la fonction au resultat-----*/
/*
int triple( int nombre)
{
    return 3 * nombre;
}

int main()
{
    int nombreEntre = 0;

    printf("Rentre un nombre au clavier\n");
    scanf("%d", &nombreEntre);

    printf("Le triple du nombre entre est %d", triple(nombreEntre));

    return 0;
}
*/

/*-----Convertire un euro en franc belge--------*/

/*
double convertionEuroBEF();
double convertionBEFEuro();

int main ()
{
    double euro = 0.0, BEF =0.0;

    printf("Entre le nombre en € a convertire en BEF\n");
    scanf("%lf", &euro);

    printf("%f € equivaut a %f BEF\n", euro, convertionEuroBEF(euro));

    printf("Entre le nombre BEF a convertire en €\n");
    scanf("%lf", &BEF);

    printf("%f BEF equivaut a %f €", BEF, convertionBEFEuro(BEF));

    return 0;
}

double convertionEuroBEF(double euroAConvertir)
{
    return 40.3399 * euroAConvertir;
}

double convertionBEFEuro(double BEFACOnvertir)
{
    return BEFACOnvertir / 40.3399;
}
*/


/*----Function void-----*/

/*
void punition ();

int main()
{
    int nombreDeLigne = 0;
    printf("Combien de ligne tu as besoin?\n");
    scanf("%d", &nombreDeLigne);

    punition(nombreDeLigne);

    return 0;

}

void punition (int nombreDeLinge)
{
    int i = 0;

    for(i = 0; i < nombreDeLinge; i++)
    {
        printf("Je ne dois pas recopier mon voisin\n");
    }
}
*/

/*----calcule l'aire d'un triangle avec deux parametres*/
/*
void aireRectangle();

int main ()
{
    double largeur = 0.0, hauteur = 0.0;

    printf("On va calculer l'aire d'un rectangle\n");
    printf("Entre la largeur\n");
    scanf("%lf", &largeur);
    printf("Entre la hauteur\n");
    scanf("%lf", &hauteur);

    aireRectangle(largeur, hauteur);

    return 0;
}

void aireRectangle(double lar, double haut)
{
    double aire = 0;

    aire = lar * haut;
    printf("Rectangle de largeur %f et de hauteur %f. Aire = %f\n", lar, haut, aire);
}
*/

/*---- Le menu-----*/
int menu();

int main()
{

    switch (menu())
    {
    case 1:
        printf("Vous avez pris le poulet\n");
        break;
    case 2:
        printf("Vous avez pris les concombres\n");
        break;
    case 3:
        printf("Vous avez pris l'escalope\n");
        break;
    case 4:
        printf("Vous avez pris la surprise du Chef. Vous etes un sacre aventurier dites donc !\n");
        break;
    }

    return 0;
}

int menu()
{
    int choix = 0;


    while(choix < 1 || choix > 4)
    {

        printf("===Menu===\n");
        printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
        printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
        printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
        printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
        printf("Votre choix ?\n");
        scanf("%d", &choix);

        if(choix < 1 || choix > 4)
        {
            printf("Le choix n'est pas bon ooooouuuuuuuuuu recommencer!!!!!!!!\n");
        }
    }



    return choix;
}
