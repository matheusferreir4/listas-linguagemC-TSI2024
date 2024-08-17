/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão
para o garçom. Faça um algoritmo que leia o valor gasto com despesas realizadas em um
restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.*/

#include <stdio.h>

int main (){

    float a, b; int c;

    printf ("\nInsira seu gasto no restaurante:");
    scanf ("%f", &a);

    b = a * 0.1;
    printf ("\nVocê gostaria de dr uma gorjeta de %.2f reais para o garçom? (1-Sim) (2-Não):", b);
    scanf ("%d", &c);

    switch (c){

    case 1:
    printf ("\nObrigado. Pague %.2f reais na bancada.", a + b);

    break;

    case 2:
    printf ("\nTudo bem. Pague %.2f reais na bancada.", a);

    break;
    
    default:
    printf ("\nCódigo inválido.");

    break;
    }

    return 0;
}