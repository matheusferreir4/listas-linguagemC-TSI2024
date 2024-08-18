/*Faça um programa que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Imprimir o vetor
resultante. */

#include <stdio.h>

int main (){

  int primeiro_vetor[10], segundo_vetor[10], resultado_vetores[10];

  //leitura do primeiro vetor
  printf ("\nDigite 10 números para o primeiro vetor: ");
  for (int i = 0; i < 10; i++){
    printf("\nprimeiro_vetor[%d]: ", i);
    scanf("%d", &primeiro_vetor[i]);
  }

  //leitura do segundo vetor
  printf ("\nDigite 10 números para o segundo vetor: ");
  for (int i = 0; i < 10; i++){
    printf("\nsegundo_vetor[%d]: ", i);
    scanf("%d", &segundo_vetor[i]);
}

  //multiplicação dos elementos de mesmo índice
  for (int i = 0; i < 10; i++){
    resultado_vetores[i] = primeiro_vetor[i] * segundo_vetor[i];
  }

  printf("\nVetor resultante da multiplicação dos elementos de mesmo índice: ");
  for (int i = 0; i < 10; i++){
    printf("\nresultado_vetores[%d]: %d", i, resultado_vetores[i]);
  }

  return 0;
}