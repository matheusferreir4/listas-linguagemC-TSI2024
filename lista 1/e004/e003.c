// Faça um algoritmo ara resolver um sistema de equações do primeiro grau.

#include <stdio.h>
#include <stdlib.h>

int main (){

    //ax + b = c
    int ax, b, c, R;

    printf ("\nInsira o termo que acompanha 'x':");
    scanf ("%d", &ax);

    printf ("\nInsira o segundo termo:");
    scanf ("%d", &b);

    printf ("\nInsira o terceiro termo:");
    scanf ("%d", &c);

    R = (c - b) / ax;
    printf ("\nA resolução para essa equaçaõ simples é: %d", R);

    return 0;
}
