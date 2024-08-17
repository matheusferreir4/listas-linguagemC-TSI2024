#include <stdio.h>

int main (){

    int g, h, i;

    double a = 2.5 , b = 3.20 , c = 3.5 , d = 4.10, e = 6.0, f = 2.0;

    printf ("\nInsira um código de 100 - 105:");
    scanf ("%d", &g);

    if (g < 100 && g > 105){
        printf ("\nCódigo inválido.");

    } else if (g == 100){
        printf ("\nInsira a quantidade desejada:");
        scanf ("%d", &h);

        i = h * a;
        printf ("\nVocê deve pagar %d raeis", i);

    } else if (g == 101){
        printf ("\nInsira a quantidade desejada:");
        scanf ("%d", &h);

        i = h * b;
        printf ("\nVocê deve pagar %d raeis", i);

    } else if (g == 102){
        printf ("\nInsira a quantidade desejada:");
        scanf ("%d", &h);

        i = h * c;
        printf ("\nVocê deve pagar %d raeis", i);

    } else if (g == 103){
        printf ("\nInsira a quantidade desejada:");
        scanf ("%d", &h);

        i = h * d;
        printf ("\nVocê deve pagar %d raeis", i);

    } else if (g == 104){
        printf ("\nInsira a quantidade desejada:");
        scanf ("%d", &h);

        i = h * e;
        printf ("\nVocê deve pagar %d raeis", i);

    } else if (g == 105){
        printf ("\nInsira a quantidade desejada:");
        scanf ("%d", &h);

        i = h * f;
        printf ("\nVocê deve pagar %d raeis", i);

    }

    

    return 0;
}