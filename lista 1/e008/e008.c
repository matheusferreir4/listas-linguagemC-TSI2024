/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas
oferecendo desconto. Faça um algoritmo que possa entrar com o valor de um produto e imprima o
novo valor tendo em vista que o desconto foi de 9%. Além disso, imprima o valor do desconto.*/

#include <stdio.h>

int main (){

    float a, b, c;

    printf ("\nInsira o valor do produto:");
    scanf ("%f", &a);

    b = a - (a * 0.09);
    printf ("\nO novo falor do produto será %.2f reais.", b);

    c = a * 0.09;
    printf ("\nO valor de desconto foi %.2f reais.", c);


    return 0;
}