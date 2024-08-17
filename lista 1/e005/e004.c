/*Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro termo(a1).
Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.A., dado a razão e o
primeiro termo.
an = a1 + (n − 1) × r*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int an, a1, n, r;

    printf ("\nInsira o primeiro termo:");
    scanf ("%d", &a1);

    printf ("\nInsira o número de termos:");
    scanf ("%d", &n);

    printf ("\nInsira a razão:");
    scanf ("%d", &r);

    an = a1 + (n - 1) * r;
    printf ("\nO termo geral dessa PA é: %d", an);

    if (r > 0){
        printf("\nA progressão é crescente.");
    }else if (r < 0){
        printf("\nA progressão é decrescente.");
    }else{
        printf("\nA razão é zero, todos os termos são iguais.");
    }

    return 0;
}