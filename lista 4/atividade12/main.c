/* Faça um programa que determine a posição da última ocorrência do valor máximo e a
posição da primeira ocorrência do valor mínimo em um vetor de inteiros de 100 elementos*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

int encontrar_posicao_maximo(int vetor[], int tamanho){
  int max = INT_MIN;
  int posicao_max = -1;

  for (int i = 0; i < tamanho; i++){
    if (vetor[i] >= max){
      max = vetor[i];
      posicao_max = i;
    }
  }
  return posicao_max;
}

int encontrar_posicao_minimo(int vetor[], int tamanho){
  int min = INT_MAX;
  int posicao_min = -1;

  for (int i = 0; i < tamanho; i++){
    if (vetor[i] <= min){
      min = vetor[i];
      posicao_min = i;
    }
  }
  return posicao_min;
}

int main(){
  int vetor[TAMANHO];
  // Preenche o vetor com valores aleatórios
  for (int i = 0; i < TAMANHO; i++){
    vetor[i] = rand() % 1000;
  }
  int pos_max = encontrar_posicao_maximo(vetor, TAMANHO);
  int pos_min = encontrar_posicao_minimo(vetor, TAMANHO);

  printf("Posição do maior valor: %d\n", pos_max);
  printf("Posição do menor valor: %d\n", pos_min);

  return 0;
}