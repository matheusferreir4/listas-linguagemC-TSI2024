/*Escreva uma função para calcular a soma dos N primeiros termos da série 
S = 1 4 9 16 25 …*/

#include <stdio.h>

// Função para calcular a soma dos N primeiros termos da série
int calcularSoma(int n){
  int soma = 0;

  for(int i = 0; i < n; i++){
    soma += i * i;
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

  int soma = calcularSoma(n);
  printf("\nA soma dos %d primeiros termos da série é: %d\n", n, soma);

  return 0;
}