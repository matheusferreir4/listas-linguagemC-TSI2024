/*Faça um algoritmo que leia uma temperatura em graus Fahrenheit e converta / mostre em graus
centígrados.
Centígrados = (Fahrenheit – 32) * 5 / 9.*/

#include <stdio.h>

int main (){

    float a, b;

    printf ("\nInsira a temperatura em farenheir:");
    scanf ("%f", &a);

    b = ((a - 32) * 5) / 9;
    printf ("\nEssatemperatura em celcius é %.1f graus", b);

    return 0;
}