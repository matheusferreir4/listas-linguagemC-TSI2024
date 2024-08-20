/* Escreva uma função para calcular a soma dos N primeiros termos da série 
S = 1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ...*/

#include <stdio.h>

int calcularSoma(int n){
  int soma = 0;
  int valor = 1;
  int repeticoes = 0;

  for (int i = 1; i <= n; i++){
    soma += valor;
    repeticoes++;
    if (repeticoes == 2){
      valor++;
      repeticoes = 0;
    }
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