/*Faça um programa que imprima os 100 primeiros inteiros positivos.*/

#include <stdio.h>

int main (){

    int a = 1;

    printf ("\nOs 100 primeiros inteiros positivos são:");

    while (a <= 100){

        printf ("\n%d", a);
        a++;
    }

    return 0;
}