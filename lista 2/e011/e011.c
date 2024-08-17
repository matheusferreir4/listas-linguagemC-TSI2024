/*Escrever um algoritmo que lê um valor inteiro e calcula qual o menor número possível de notas
de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de
notas necessárias.*/

#include <stdio.h>

int main (){

    int a, b, c, d, e, f;

    printf ("\nInsira um número inteiro:");
    scanf ("%d", &a);

    b = a / 100;
    printf ("\n\nEsse valor pode ser decomposto em %d notas de 100", b);

    c = b / 50;
    printf ("\n\nEsse valor pode ser decomposto em %d notas de 50", c);

    d = c / 10;
    printf ("\n\nEsse valor pode ser decomposto em %d notas de 10", d);

    e = d / 5;
    printf ("\n\nEsse valor pode ser decomposto em %d notas de 5", e);

    f = e / 1;
    printf ("\n\nEsse valor pode ser decomposto em %d notas de 1", f);


    return 0;
}