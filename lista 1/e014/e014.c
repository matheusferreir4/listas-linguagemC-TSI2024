/*) Faça um algoritmo que efetue o cálculo da quantidade de litros de combustível gastos em uma
viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo gasto na
viagem e a velocidade média.

Distância = Tempo x Velocidade. 
Litros = distancia / 12.

O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de Litros
utilizados na viagem.*/

#include <stdio.h>
#define NUM 12

int main (){

    float a, b, c, d;

    printf ("\nInsira sua velocidade média:");
    scanf ("%f", &a);

    printf ("\nInsira o tempo gasto:");
    scanf ("%f", &b);

    c = b * a;
    printf ("\nA distância percorrida foi %.1f km.", c);

    d = c / NUM;
    printf ("\nVocê utilizou %.1f litros de gasolina.", d);

    return 0;
}