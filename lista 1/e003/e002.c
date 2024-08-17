/*Faça um algoritmo que leia quanto você ganha por hora e o número de horas trabalhadas no
mês. Na sequência, calcule e mostre o total do seu salário no referido mês*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    float a, b, c, d;

    printf ("\nInsira quanto você ganha por hora:");
    scanf ("%f", &a);

    printf ("\nInsira quantas horas você trabalha no dia:");
    scanf ("%f", &b);

    printf ("\nInsira quantos dias você trabalha no mês:");
    scanf ("%f", &c);

    d = (a * b) * c;
    printf ("\nVocê ganha no mês %.1f reais", d);

    return 0;
}
