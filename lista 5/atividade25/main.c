/*Implementar uma função que retorne o mdc e o mmc de dois números naturais maiores que zero.*/

#include <stdio.h>

// Função para calcular o máximo divisor comum (MDC) usando o algoritmo de Euclides
int calcularMDC(int a, int b){
  while(b != 0){
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Função para calcular o mínimo múltiplo comum usando MDC
int calcularMMC(int a, int b){
  return (a * b) / calcularMDC(a, b);
}

int main(){
  int a, b;
  printf("Digite dois números naturais maiores que zero:\n");
  while(scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0){
    printf("Entrada inválida. Digite dois números naturais maiores que zero:\n");
    setbuf(stdin, NULL);
  }

  int mdc = calcularMDC(a, b);
  int mmc = calcularMMC(a, b);

  printf("\nO MDC de %d e %d é: %d\n", a, b, mdc);
  printf("O MMC de %d e %d é: %d\n", a, b, mmc);

  return 0;
}