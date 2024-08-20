/*Escreva uma função que calcule a soma dos n primeiros termos da série de Fibonacci. 
S = 1 1 2 3 5 8 13 21 ..*/

#include <stdio.h>

// Função para calcular a soma dos n primeiros termos da série de Fibonacci

int calcularSomaFibonacci(int n){
  int soma = 0, temp, a = 0, b = 1;

  for(int i = 0; i < n; i++){
    soma += b;
    temp = b;
    b = a + b;
    a = temp;
  }
  return soma;
}

int main(){
  int n;

  printf("Digite o valor de n: ");
  while(scanf("%d", &n) != 1){
    printf("Entrada inválida. Digite um número inteiro: ");
    while(getchar() != '\n');
  }

  int soma = calcularSomaFibonacci(n);
  printf("\nA soma dos %d primeiros termos da série de Fibonacci é: %d\n", n, soma);

  return 0;
}

  