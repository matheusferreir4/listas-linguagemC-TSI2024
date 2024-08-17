/*Faça um algorimo que entre com a idade de uma pessoa e imprima o valor que ela deverá pagar
por um plano de saúde, segundo a
seguinte tabela:
Idade Valor
Até 10 anos R$ 30,00
Acima de 10 até 29 anos R$ 60,00
Acima de 29 até 45 anos R$ 120,00
Acima de 45 até 59 anos R$ 150,00
Acima de 59 até 65 anos R$ 250,00
maior que 65 anos R$ 400,00*/

#include <stdio.h>

int main (){

    int a;

    printf ("\nInsira a sua idade:");
    scanf ("%d", &a);

    if (a <= 10){
        printf ("\nVocê deverá pagar %d reais", 30);

    } else if (a > 10 && a <= 29){
        printf ("\nVocê deverá pagar %d reais", 60);
        
    } else if (a > 29 && a <= 45){
        printf ("\nVocê deverá pagar %d reais", 120);
        
    } else if (a > 45 && a <= 59){
        printf ("\nVocê deverá pagar %d reais", 150);
        
    } else if (a > 59 && a <= 65){
        printf ("\nVocê deverá pagar %d reais", 250);
        
    } else if (a > 65){
        printf ("\nVocê deverá pagar %d reais", 400);
        
    }

    return 0;
}