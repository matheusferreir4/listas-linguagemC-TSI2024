/*Faça um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos*/

#include <stdio.h>

int main (){

    int d;

    printf ("\nInsira a sua idade:");
    scanf ("%d", &d);

    if (d >= 4 &&  d <= 7){
        printf ("\nVocê se classifica como infantil A");

    } else  if (d >= 8 &&  d <= 10){
        printf ("\nVocê se classifica como infantil B");

    } else  if (d >= 11 &&  d <= 13){
        printf ("\nVocê se classifica como juvenill A");

    } else  if (d >= 14 &&  d <= 17){
        printf ("\nVocê se classifica como juvenil B");

    } else  if (d >= 18){
        printf ("\nVocê se classifica como adulto");

    }
    return 0;
}