/*Faça um programa que tenha como entrada 30 valores e colocá-los em 2 vetores
conforme forem pares ou ímpares. Cada vetor possui 5 posições. Se algum vetor
estiver cheio, imprimir o seu conteúdo. Terminada a leitura escrever o conteúdo
dos dois vetores. Cada vetor pode ser preenchido tantas vezes quantas forem
necessárias.*/

#include <stdio.h>

int main() {
  int pares[5], impares[5];
  int num, i, j = 0, k = 0;

  for (int i = 0; i < 30; i++) {
    printf("\nDigite um número: ");
    if (scanf("%d", &num) != 1) {
      printf("Erro ao ler o número.\n");
      return 1; // Encerra o programa em caso de erro na leitura
    }

    if (num % 2 == 0) {
      pares[j] = num;
      j++;
      if (j == 5) {
        printf("\nVetor de pares preenchido: ");
        for (int m = 0; m < 5; m++) {
          printf("%d ", pares[m]);
        }
        printf("\n");
        j = 0; // reinicia o índice para reutilizar o vetor
      }
    } else {
      impares[k] = num;
      k++;
      if (k == 5) {
        printf("\nVetor de ímpares preenchido: ");
        for (int m = 0; m < 5; m++) {
          printf("%d ", impares[m]);
        }
        printf("\n");
        k = 0; // reinicia o índice para reutilizar o vetor
      }
    }
  }

  // Imprime o conteúdo restante dos vetores
  if (j > 0) {
    printf("\nConteúdo restante do vetor de pares: ");
    for (int m = 0; m < j; m++) {
      printf("%d ", pares[m]);
    }
    printf("\n");
  }

  if (k > 0) {
    printf("\nConteúdo restante do vetor de ímpares: ");
    for (int m = 0; m < k; m++) {
      printf("%d ", impares[m]);
    }
    printf("\n");
  }

  return 0;
}
