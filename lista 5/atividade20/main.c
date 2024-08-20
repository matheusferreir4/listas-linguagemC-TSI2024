/*Escreva uma função para calcular a soma 
S = 1 + 1 + 1 + … + 1 + 1
 2 32 N
N-1 N
N*/

#include <stdio.h>

int calcularSoma(int n){
  int soma = 0;

  for(int i = 1; i <= n; i++){
    soma += 1.0 / i;
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