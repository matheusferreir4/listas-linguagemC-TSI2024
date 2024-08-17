/*Faça um algoritmo para calcular a soma dos n primeiros termos de uma P.G.*/

#include <stdio.h>
#include <math.h>

int main (){

    int p, a1, q, n;

    printf ("\nInsira 'a1':");
    scanf ("%d", &a1);

    printf ("\nInsira 'q':");
    scanf ("%d", &q);

    printf ("\nInsira 'n':");
    scanf ("%d", &n);

    p = pow (a1, n) * pow (q, ((n * (n - 1)) / 2));
    printf ("\nA soma dos n primeiros termos é %d.", p);

    return 0;
}