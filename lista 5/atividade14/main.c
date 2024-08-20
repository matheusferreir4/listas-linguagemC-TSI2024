/*Escreva uma função que calcule a soma dos n primeiros termos da série
S = -1 3 3 -5 - 5 - 5 7 7 7 7 - 9 - 9 -9 -9 -9 11 11 11 11 11 11 …
*/

#include <stdio.h>

// Função para calcular a soma dos n primeiros termos da série
int caucularSoma(int n){
  int soma = 0;
  int termo = -1;
  int repeticoes = 1;
  int contador = 0;

  while(contador < n){
    for (int i = 0; i < repeticoes; i++){
      soma += termo;
      contador++;
    }
    repeticoes++;
    termo = (termo > 0) ? -(termo + 2) : (termo - 2);
  }
  return soma;
}

int main(){
  int n;

  printf("Digite o valor de n: ");
  while(scanf("%d", &n) != 1){
    printf("Entrada inválida. Digite um número inteiro: ");
    setbuf(stdin, NULL);
  }
  int soma = caucularSoma(n);
  printf("\nA soma dos %d primeiros termos da série é: %d\n", n, soma);

  return 0;
}