/* Faça um programa que imprima todos os números inteiros de 200 a 100 (em ordem
decrescente).*/

#include <stdio.h>
#define CONA 100
#define CONB 200

int main (){

    int a = 200;

    printf ("\nOs números inteiros de 200 a 100 são:");

    while (a <= CONB && a >= CONA){
        printf ("\n%d", a);

        a--;
    }


    return 0;
}