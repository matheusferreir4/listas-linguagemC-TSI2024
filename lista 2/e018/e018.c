/* Faça um algoritmo que tenha como entrada a idade de uma pessoa e informe a sua situação
perante a Justiça Eleitoral:
• não eleitor (abaixo de 16 anos);
• eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
• eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive)*/

#include <stdio.h>

    int main (){

    int a;

    printf ("\nInsira sua idade:");
    scanf ("%d", &a);

    if (a < 16){
        printf ("\nVocê não é elegível para votar");

    } else if (a >= 18 && a <= 65){
        printf ("\nVocê é elegível para votar");

    } else if (a >= 16 && a <= 18){
        printf ("\nSeu voto é facultativo.");

    } else if (a > 65){
        printf ("\nSeu voto é facultativo.");

    }

    return 0;
}