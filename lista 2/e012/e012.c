/*Escrever um algoritmo que lê o número de identificação, as 3 notas obtidas por um aluno nas 3
verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de
aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento Conceito
≥9,0 A
≥7,5 e < 9,0 B
≥6,0 e < 7,5 C
≥4,0 e < 6,0 D
< 4,0 E*/

#include <stdio.h>

int main (){

    int a, b, c, d, me, ma;

    printf ("Insira o seu ID:");
    scanf ("%d", &a);

    printf ("\nInsira a primeira nota:");
    scanf ("%d", &b);

    printf ("\nInsira a segunda nota:");
    scanf ("%d", &c);

    printf ("\nInsira a terceira nota:");
    scanf ("%d", &d);

    me = (b + c + d) / 2;

    ma = (b + (c * 2) + (d * 3) + me) / 7;
    if (ma >= 9){
        printf ("\nO aluno obteve conceito A.");

        printf ("\nVocê foi aprovado.");

    } else   if (ma >= 7.5 && ma < 9 ){
        printf ("\nO aluno obteve conceito B.");

        printf ("\nVocê foi aprovado.");
        
    } else   if (ma >= 6.0 && ma < 7.5 ){
        printf ("\nO aluno obteve conceito C.");

        printf ("\nVocê foi aprovado.");
        
    } else   if (ma >= 4.0 && ma < 6 ){
        printf ("\nO aluno obteve conceito D.");

        printf ("\nVocê foi reprovado.");
        
    } else   if (ma < 4.0 ){
        printf ("\nO aluno obteve conceito E.");

         printf ("\nVocê foi reprovado.");  
        
    }


    return 0;
}