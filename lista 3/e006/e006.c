/*Faça um programa que leia 20 números e imprima a soma dos positivos e o total de números negativos.*/

#include <stdio.h>
#define CON 20

int main (){

    int a, b, c, d;

    a = 1;

    c = 0;

    d = 0;

    while (a <= CON){

        //Enquanto a <= CON, o programa repetirá a inserção
        printf ("\nInsira o %do número:", a);
        scanf ("%d", &b);

        a++;

        if (b >= 0)
            //Enquanto houver b >= 0, o programa irá somar os valores positivos adicionando a 'c'
            c = c + b;

        else 
            //Enquanto houver b < 0, o programa somará 1, para contar o total de valores
            d = d + 1;

    }

    printf ("\nA soma dos números positivos é: %d", c);

    printf ("\nO total de números negativos é: %d", d);


    return 0;
}