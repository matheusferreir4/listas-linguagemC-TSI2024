/*Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. O
algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total,
usando a tabela abaixo: 
Código do produto Preço unitário 
1001 5,40 
1324 7,00
6548 2,37 
3987 5,32 
7623 6,45*/

#include <stdio.h>

int main (){

    int c, q;
    float f;

    printf ("Insira o código:");
    scanf ("%d", &c);

    printf ("\nInsira a quantidade:");
    scanf ("%d", &q);

    if (c == 1001){
        f = q * 5.40;
        printf ("\nO cliente deve pagar %.1f reais", f);

    } else if (c == 1324){
        f = q * 7.00;
        printf ("\nO cliente deve pagar %.1f reais", f);

    } else if (c == 6548){
        f = q * 2.37;
        printf ("\nO cliente deve pagar %.1f reais", f);

    } else if (c == 3987){
        f = q * 5.32;
        printf ("\nO cliente deve pagar %.1f reais", f);

    } else if (c == 7623){
        f = q * 6.45;
        printf ("\nO cliente deve pagar %.1f reais", f);

    } else {
        printf ("\nCódigo inválido.");
        
    }

    return 0;
}