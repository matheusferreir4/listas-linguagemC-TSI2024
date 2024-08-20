/*Implemente uma função que calcule a maior e a menor diferença entre dois elementos
consecutivos de um vetor de inteiros. A função deve retornar 1 de a maior diferença for diferente da
menor diferença e 0 em caso contrário. Um programa para testar tal função também deve ser
implementado*/

#include <stdio.h>
#include <stdlib.h>

// Função para calcular a maior e a menor diferença entre dois elementos consecutivos
int calcularDiferença(int *vetor, int tamanho, int *maiorDiferenca, int *menorDiferenca){
    if(tamanho < 2){
        return 0; // Não há diferença entre dois elementos consecutivos
    }

  *maiorDiferenca = abs(vetor[1] - vetor[0]);
  *menorDiferenca = abs(vetor[1] - vetor[0]);

  for(int i = 1; i < tamanho - 1; i++){
    int diferencaAtual = abs(vetor[i + 1] - vetor[i]);
    if(diferencaAtual > *maiorDiferenca){
      *maiorDiferenca = diferencaAtual;
    } 
    if(diferencaAtual < *menorDiferenca){
      *menorDiferenca = diferencaAtual;
    }
  }
  return (*maiorDiferenca != *menorDiferenca) ? 1 : 0;
}

int main(){
  int vetor[] = {1, 3, 7, 2, 8, 10};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int maiorDiferenca, menorDiferenca;

  int resultado = calcularDiferença(vetor, tamanho, &maiorDiferenca, &menorDiferenca);

  printf("\nResultado: %d\n", resultado);
  printf("Maior diferença: %d\n", maiorDiferenca);
  printf("Menor diferença: %d\n", menorDiferenca);

  return 0;
}