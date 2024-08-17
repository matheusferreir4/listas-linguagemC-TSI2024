/*Faça um algoritmo que calcule a área de uma parede retangular e mostre também o menor
número de latas de tintas a serem compradas para pintá-la tendo o menor desperdício possível.
Consumo de tinta é 3,0 l/m2
.
As medidas são inteiras*/

#include <stdio.h>
#define LATA 3.01

int main (){

    int a, b, c, d;

    printf ("Insira a largura dessa parede:");
    scanf ("%d", &a);

    printf ("\nInsira o comprimento dessa parede:");
    scanf ("%d", &b);

    c = a * b;
    printf ("\nA área dessa parede é: %d", c);

  d = c / LATA;
  printf ("\nAfim de gastar a menor quantidade possível, você vai precisar de %d metros quadrados de tinta.", d);

    return 0;
}