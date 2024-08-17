/*Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo
para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que
realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de
menor valor fossem distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada
fosse R$ 87,00, o algoritmo deveria indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma
nota de R$ 5,00 e duas notas de R$ 1,00. 

Escreva um algoritmo que receba o valor da quantia
solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima.
Obs.: Notas disponíveis: R$50,00 , R$20,00, R$10,00, R$5,00 e R$1,00.*/

#include <stdio.h>

int main (){
    
    //entrada
    int a, b, c, d, e; 

    //saída
    int f, g, h, i;

    printf ("\nInsira o primeiro digito:");
    scanf ("%d", &a);

    printf ("\nInsira o segundo digito:");
    scanf ("%d", &b);

    printf ("\nInsira o terceiro digito:");
    scanf ("%d", &c);

    printf ("\nInsira o quarto digito:");
    scanf ("%d", &d);

    printf ("\nVocê deseja retirar %d%d%d%d reais? (1-sim) (2-não):", a, b, c, d);
    scanf ("%d", &e);

    switch (e){
    case 1:

    f = a * 1000;
    f = f / 50;

    printf ("\nVocê deve receber %d notas de 50.", f);

    g = b * 100;
    g = g / 20;

    printf ("\nVocê deve receber %d notas de 20.", g);

    h =  c * 10;
    h = h / 10;

    printf ("\nVocê deve receber %d notas de 10.", h);

    if (d >= 0 && d < 5){
        i = d * 1;
        i = i / 1;

        printf ("\nVocê deve receber %d notas de 1.", i);

    } else if (d == 5){
        printf ("\nVocê deve receber uma nota de 5.");

    } else if (d > 5 && d <= 9){
        i = d - 5;
        i = i / 1;

        printf ("\nVocê deve receber uma nota de 5 e %d notas de 1.", i);

    }
   

    break;

    case 2:
    printf ("\nFinalize a operação e insira seus dados novamente.");

    break;
    
    default:
    printf ("\nCódigo inserido inválido, finalize a operação e insira seus dados novamente.");

    break;
    }
    
    return 0;
}