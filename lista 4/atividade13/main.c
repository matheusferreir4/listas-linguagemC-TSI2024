/* Faça um programa que inverta a ordem dos elementos de um vetor, ou seja, o primeiro
passa a ser o último e o último passa a ser o primeiro e assim por diante. Não é permitido
usar um vetor auxiliar.*/

#include <stdio.h>

#define TAMANHO 10

void inverter_vetor(int vetor[], int tamanho){
  int inicio = 0;
  int fim = tamanho - 1;

  while (inicio < fim){
    // troca os elementos nas posicoes 'inicio' 'fim'
    int temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    inicio++;
    fim--;
  }
}

int main(){
  int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Vetor original: ");
  for (int i = 0; i < TAMANHO; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");

  inverter_vetor(vetor, TAMANHO);

  printf("Vetor invertido: ");
  for (int i = 0; i < TAMANHO; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}