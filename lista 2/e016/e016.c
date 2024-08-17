/*Escreva um algoritmo para determinar se uma pessoa esta com um peso adequado. Essa
situação é determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a
relação entre o peso e o quadrado da altura do indivíduo. A situação do peso é determinada pela
tabela abaixo:
Condição Situação
IMC abaixo de 20 Abaixo do peso
IMC de 20 até 25 Peso Normal
IMC de 25 até 30 Sobre Peso
IMC de 30 até 40 Obeso 
IMC de 40 e acima Obeso Mórbido*/

#include <stdio.h>
#include <math.h>

int main (){

    float a, b, c;

    printf ("\nInsira o seu peso:");
    scanf ("%f", &a);

    printf ("\nInsira a sua altura:");
    scanf ("%f", &b);

    c = a / pow (b, 2);

    if (c < 20){
        printf ("\nVocê está abaixo do peso.");

    } else if (c > 20 && c <=25){
        printf ("\nPeso normal");

    } else if (c > 25 && c <= 30){
        printf ("\nVocê está com sobre peso");

    } else if (c > 30 && c <= 40){
        printf ("\nVocê está obeso.");

    } else if (c > 40){
        printf ("\nVocê está obeso mórbido.");

    }

    return 0;
}