/*Faça um algoritmo que tenha como entrada a idade, cor dos olhos, cor do cabelo e sexo de uma
pessoa. Deve ser impresso o nome do grupo onde a pessoa se encaixa:
Grupo 1 – idade inferior a 20, cabelo preto, sexo masculino e olho azul ou verde
Grupo 2 – idade entre 20 e 30, qualquer sexo, cabelo loiro, ruivo ou verde
Grupo 3 – qualquer idade, qualquer sexo, olho preto, cabelo branco
Grupo 4 – Quem não se encaixe em nenhum dos grupos anteriores*/

#include <stdio.h>

int main (){

    int a, b, c, d;

    printf ("\nInsira sua idade:");
    scanf ("%d", &a);

    printf ("\nInsira 1 p/ olho azul, 2 p/ olho verde, 3/ olho preto, 4 p/ olho castanho:");
    scanf ("%d", &b);

    printf ("\nInsira 1 p/ cabelo loiro, 2 p/ cabelo preto, 3 p/ cabelo ruivo, 4 p/ cabelo branco:");
    scanf ("%d", &c);

    printf ("\nInsira 1 p/ Homem cis e 2 p/ Mulher cis 3 p/ outro:");
    scanf ("%d", &d);

    if ((a < 20) && (b == 1 || b == 2) && (c == 2) && (d == 1)){
        printf ("\nVocê pertence ao grupo 1.");

    } else if ((a >= 20 && a <= 30) && (b == 2) && (c == 2 || c == 4) && (d == 1 || d == 2 || d == 3)){
        printf ("\nVocê pertence ao grupo 2.");
        
    } else if ((a > 0) && (b == 3) && (c == 4) && (d > 0)){
        printf ("\nVocê pertence ao grupo 3.");
        
    } else {
        printf ("\nVocê pertence ao grupo 4.");

    }

    return 0;
}