/*Faça um algoritmo que leia as três notas de uma aluno. Calcular a média ponderada do aluno,
considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostrar a média
calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se
a média for menor que 5. */

#include <stdio.h>
#define NUM 10

int main (){

    float a, b, c, d;

    printf ("\nInsira a primeira nota:");
    scanf ("%f", &a);

    printf ("\nInsira a segunda nota:");
    scanf ("%f", &b);

    printf ("\nInsira a terceirta nota:");
    scanf ("%f", &c);

    if (a > c && a > b){
        d = ((a * 4 ) + (b * 3) + (c * 3))/NUM ;
        printf ("\nSua nota é: %.1f", d);

    } else if (c > b && c > b){
        d = ((c* 4 ) + (b * 3) + (a* 3))/NUM ;
        printf ("\nSua nota é: %.1f", d);

    } else if (b > a && b > c){
        d = ((b* 4 ) + (c * 3) + (a* 3))/NUM ;
        printf ("\nSua nota é: %.1f", d);

    }

    if (d >= 5){
        printf ("\nVocê foi aprovado.");

    } else if (d <= 5) {
        printf ("\nVocê foi reprovado.");
        
    }



    return 0;
}