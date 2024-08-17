/*Faça um programa que imprima os 100 primeiros inteiros positvos pares*/

#include <stdio.h>

int main (){

    int a = 1;

    printf ("\nOs 100 primeiros inteiros positivos pares são:");

    while (a <= 100){

        if (a % 2 == 0)
        printf ("\n%d", a);

        a++;
    }

    return 0;
}