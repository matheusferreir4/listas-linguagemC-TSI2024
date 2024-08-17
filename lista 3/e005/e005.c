/*Faça um programa que receba quinze números inteiros positivos do usuário e imprima a soma 
da raiz quadrada de cada número.*/

#include <stdio.h>
#include <math.h>
#define CON 15

int main (){

    int a = 1, num; 
    double s = 0.0;

    while (a <= CON){
        printf ("\nInsira o %do número inteiro positivo:", a);
        scanf ("%d", &num);

        a++;

        if (num >= 1)
            s = s + sqrt(num);

    }

     printf ("\nA soma das raízes é %.1lf", s);
    

    return 0;
}