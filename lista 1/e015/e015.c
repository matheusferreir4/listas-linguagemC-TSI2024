/*Antes do racionamento de energia ser decretado, quase ninguém falava em quilowatts; mas,
agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se que 100 quilowatts de
energia custa um sétimo do salário mínimo, fazer um algoritmo que calcule e imprima:
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%*/

#include <stdio.h>
#define QW 202
#define DES 0.1

int main (){

    float a, b, c;

    printf ("\nInsira quantos KW (acima de 100) você gastou em sua residencia:");
    scanf ("%f", &a);

    if (a >= 100){

    b = a * QW;
    printf ("\nVocê deve pagar %.2f reais.", b);

    c = b * DES;
    printf ("\nMas graas ao nosso desconto, você deve pagar %.2f reais.", c);

    } else {
        printf ("\nERROR.");

    }

    return 0;
}