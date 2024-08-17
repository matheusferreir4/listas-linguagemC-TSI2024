/*Faça um algoritmo que leia um valor de hora (hora:minutos) e informe (calcule) o total de
minutos se passaram desde o início do dia*/

#include <stdio.h>
#define DIA 24
#define MIN 60

int main (){

    int a, b, c;

    printf ("\nInsira que horas são (0-23):");
    scanf ("%d", &a);

    printf ("\nInsira os minutos (0-60):");
    scanf ("%d", &b);

    printf ("\nAgora são %d:%d horas.", a, b);

    c = (a * MIN) + b;
    printf ("\n\nDesde o ínicio do dia, se passaram %d minutos", c);

    return 0;
}