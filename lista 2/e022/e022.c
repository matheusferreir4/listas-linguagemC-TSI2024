/*Faça um algoritmo que leia os dígitos (somente os quatro números) de uma placa de veículo, e
através do último algarismo da placa (algarismo da casa das unidades) determine o mês para
pagamento do IPVA do veículo.
Algarismo Mês
1, 2 Janeiro
3, 4 Fevereiro
5, 6, 7 Março
8 Abril
9, 0 Mai*/

#include <stdio.h>
#define NUM 10

int main (){

    int a, b;

    printf ("\nInsira a placa (somente os quatro números) do seu veículo:");
    scanf ("%d", &a);

    b = a % NUM;
    if (b == 1 || b == 2){
        printf ("\nVocê deve pagar seu IPVA em janeiro.");

    } else if (b == 3 || b == 4){
        printf ("\nVocê deve pagar seu IPVA em fevereiro.");
 
    } else if (b == 5 || b == 6 || b == 7){
        printf ("\nVocê deve pagar seu IPVA em março.");

    } else if (b == 8){
        printf ("\nVocê deve pagar seu IPVA em abril.");

    }  else if (b == 9 || b == 0){
        printf ("\nVocê deve pagar seu IPVA em maio.");

    } 


    return 0;
}