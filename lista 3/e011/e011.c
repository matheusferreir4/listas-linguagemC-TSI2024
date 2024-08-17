/*Construir um programa que calcule a média aritmética de vários valores inteiros positivos. O 
final da leitura acontecerá quando for lido um valor negativo.*/

#include <stdio.h>
#define CON 0

int main (){

    int a = 1, b; 
    double media, c, d;

    do {
        printf ("\nInsira o %do número inteiro positivo ou um valor negativo p/sair:", a);
        scanf ("%d", &b);

        //Calculando a média
        if (b > CON){
        c++;
        d += b;

        media = d / c;
        }

        a++;
        
    } while (b > CON);

    printf ("\nA média dos valores inseridos é %.2lf.", media);

    return 0;
}