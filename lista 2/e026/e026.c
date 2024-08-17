/*Escrever um algoritmo para ler um peso na Terra, e o número de um planeta, e imprimir o valor
do seu peso neste planeta segundo a tabela abaixo.
número gravidade relativa g planeta
1 0,37 Mercúrio
2 0,88 Vênus
3 0,38 Marte
4 2,64 Júpiter
5 1,15 Saturno
6 1,17 Urano
Para calcular o peso no planeta use a fórmula
Pi = P terra / 10) * gi*/

#include <stdio.h>

int main (){

    int a; 
    float b, c;

    printf ("\nInsira 1 p/ Mercúrio, 2 p/ Vênus, 3 p/ Marte, 4 p/ Júpiter, 5 p/ Saturno ou 6 p/Urano.");
    scanf ("%d", &a);

    printf ("\nInsira seu peso corporal:");
    scanf ("%f", &b);

    switch (a){

    case 1:
    c = (b / 10) * 0.37;
    printf ("\nSeu peso em Mercúrio seria %.1f", c);

    break;

    case 2: 
    c = (b / 10) * 0.88;
    printf ("\nSeu peso em Vênus seria %.1f", c);

    break;

    case 3: 
    c = (b / 10) * 0.38;
    printf ("\nSeu peso em Marte seria %.1f", c);

    break;

    case 4: 
    c = (b / 10) * 2.64;
    printf ("\nSeu peso em Júpiter seria %.1f", c);

    break;
    
    case 5: 
    c = (b / 10) * 1.15;
    printf ("\nSeu peso em Saturno seria %.1f", c);

    break;

    case 6: 
    c = (b / 10) * 1.17;
    printf ("\nSeu peso em Urano seria %.1f", c);

    break;

    default: 
    printf ("\nCódigo inserido inválido.");

    break;
    }

    return 0;
}