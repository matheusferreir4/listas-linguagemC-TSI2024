/*Faça um algoritmo para calcular a média aritmética das 3 notas de um aluno e mostrar, além do
valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a
mensagem "reprovado", caso contrário. */

#include <stdio.h>

int main (){

    int a, b, c, d;

    printf ("\nInsira a primeira nota:");
    scanf ("%d", &a);

    printf ("\nInsira a segunda nota:");
    scanf ("%d", &b);

    printf ("\nInsira a terecira nota:");
    scanf ("%d", &c);

    d = (a + b + c)/3;
    printf ("\nA média aritmética desse aluno é %d", d);

    if (d >= 6) {
       printf ("\nVocê foi aprovado :)");
       
    } else if (d >= 4 && d < 6){
        printf ("\nVocê está de recuperação :P");

    } else if (d < 4){
        printf ("\nVocê foi reprovado :(");
    }
    



    return 0;
}