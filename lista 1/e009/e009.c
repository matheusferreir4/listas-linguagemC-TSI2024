/*Construa um algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro a e o último
an*/

#include <stdio.h>

int main (){

    int sn, a1, an, n;

    printf ("\nInsira o primeiro termo dessa P.A:");
    scanf ("%d", &a1);

    printf ("\nInsira o termo geral dessa P.A:");
    scanf ("%d", &an);

    printf ("\nInsira a posição do termo nessa P.A:");
    scanf ("%d", &n);

    sn = ((a1 + an) * n) / 2;
    printf ("\nO resultado é %d.", sn);

    return 0;
}