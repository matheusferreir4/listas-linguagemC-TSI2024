/* Faça um malgoritmo que calcule o peso idela de uma pessoa usando as seguintes fórmulas:
 homens: (72.7*altura) -58
 mulheres: (62.1*altura) – 44.7*/
#include <stdio.h>

int main (){

    int a;

    float  b, c;

    printf ("\nInsira 1 se você for um Homem e 2 se você for uma Mulher:");
    scanf ("%d", &a);

    printf ("\nInsira sua altura:");
    scanf ("%f", &b);

    switch (a){

    case 1: c = (72.7 * b) - 58 ;
    printf ("\nSua peso ideal é %.1f kg.", c);
    break;
    
    default: c = (62.1 * b) -44.7;
    printf ("\nSua peso ideal é %.1f kg.", c);
    break;

    }

    return 0;
}