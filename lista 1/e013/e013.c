/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo para Calcular e
imprimir quantos salários mínimos uma pessoa ganha.*/

#include <stdio.h>
#define SAL 1420.35

int main (){

    float a, b;

    printf ("\nInsira seu salário:");
    scanf ("%f", &a);

    b = a / SAL;
    printf ("\nVocê ganha %.0f salários mínimos.", b);

    return 0;
}