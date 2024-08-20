/*Implementar uma função que receba 3 números inteiros e retorne o maior e o menor valor.*/

#include <stdio.h>

// Função para encontrar o maior e o menor valor entre três números
void encontrarMaiorMenor(int a, int b, int c, int *maior, int *menor){
  *maior = a;
  *menor = a;

  if(b > *maior){
    *maior = b;
  }

  if(b < *menor){
    *menor = b;
  }

  if(c > *maior){
    *maior = c;
  }

  if(c < *menor){
    *menor = c;
  }

}

int main(){
  int a, b, c, maior, menor;

  printf("Digite três números inteiros: ");
  while(scanf("%d %d %d", &a, &b, &c) != 3){
    printf("Entrada inválida. Digite três números inteiros.");
    while(getchar() != '\n');
  }

  encontrarMaiorMenor(a, b, c, &maior, &menor);

  printf("\nO maior valor é: %d\n", maior);
  printf("O menor valor é: %d\n", menor);

  return 0;
}