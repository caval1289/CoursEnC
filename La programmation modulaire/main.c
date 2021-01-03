#include <stdio.h>
#include <stdlib.h>
#include "function.h"

//double aireRectangle (double larg, double haut);


int main()
{
    double largeur = 0.0, hauteur = 0.0;

    printf("Entre la largeur du rectangle\n");
    scanf("%lf", &largeur);
    printf("Entre l'hauteur du rectangle\n");
    scanf("%lf", &hauteur);
    printf("La largeur %f et la hauteur %f. Aire = %f",largeur, hauteur, aireRectangle(largeur,hauteur));
    return 0;
}


