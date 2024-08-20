/*Implemente uma função para calcular o mmc de dois números naturais >0. Implemente um programa
para testar a função.*/

#include <stdio.h>

//Função para calcular o mdc usando o algoritmo de Euclides
int mdc(int a, int b){
  while(b != 0){
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Função para calcular o mmc usando a fórmula mmc = (a * b) / mdc
int mmc(int a, int b){
  return (a * b) / mdc(a, b);
}

int main(){
  int a, b;

  // Solicita ao usuário que insira dois números naturais
  printf("Digite dois números naturais: ");
  while(scanf("%d %d", &a, &b) != 2){
    printf("Entrada inválida. Digite dois números naturais: ");
    while(getchar() != '\n');
  }
  // Verifica se os números são maiores que zero
  if(a <= 0 || b <= 0){
    printf("\nOs números devem ser naturais e maiores que zero.\n");
    return 1;
  }

  // Calcula o mmc usando a função mmc
  int resultado = mmc(a, b);
  printf("\nO mmc de %d e %d é %d.\n", a, b, resultado);

  return 0;
}