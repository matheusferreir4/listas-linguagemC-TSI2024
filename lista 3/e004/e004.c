/*Faça um programa que imprima todos os números múltiplos de 5, no intervalo
fechado de 1 a 500.*/

#include <stdio.h>
#define CONA 500
#define CONB 100


int main (){

    int a = 1;

    printf ("\nOs números múltiplos de 5, no intervalo fechado de 1 a 500 são:");

    while (a <= CONA){

        if (a <= CONB)
            printf ("\n%d", a * 5);


        a++;
    }

    return 0;
}