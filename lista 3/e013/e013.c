/*Escreva um programa que calcule a média aritmética das 3 notas dos alunos de uma classe. O 
programa deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for 
igual a zero.*/

#include <stdio.h>
#define CON 3

int main (){

    int id, a = 1;
    double media, notas, b;

    do {

        printf ("\nInsira um ID ou 0 p/sair:");
        scanf ("%d", &id);

        if (id == 0)
        break;

        if (id != 0)

        do {
        printf ("\nInsira a %da nota.", a);
        scanf ("%lf", &notas);

        a++;

        //Calculando média
        b += notas;

        media = b / CON;
        
        } while (a <= 3);

        printf ("\nA média desse aluno é %.2lf.", media);

    } while (1);

    return 0;
}



