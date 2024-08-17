/*O BB concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo
médio no último ano. Fazer um algoritmo que leia o saldo médio de um cliente e calcule o valor do
crédito de acordo com a tabela a seguir. Imprimir uma mensagem informando o saldo médio e o
valor de crédito.
Saldo Médio Percentual
De 0 a 500 Nenhum crédito
De 501 a 1000 30% do valor do saldo médio
De 1001 a 3000 40% do valor do saldo médio
Acima de 3001 50% do valor do saldo médio*/

#include <stdio.h>

int main (){

    float a, b;

    printf ("\nInsira seu saldo médio:");
    scanf ("%f", &a);

    if (a >= 0 && a <= 500){
        printf ("\nNenhum crédito.");

    } else if (a >=501 && a <= 1000){
        b = a * 0.3;
        printf ("\nSeu crédito será de %.2f", b);

    } else if (a >=1001 && a <= 3000){
        b = a * 0.4;
        printf ("\nSeu crédito será de %.2f", b);
        
    } else if (a >= 3001){
        b = a * 0.5;
        printf ("\nSeu crédito será de %.2f", b);
        
    }

    return 0;
}