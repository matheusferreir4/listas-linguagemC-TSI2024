/*Implemente uma função para calcular o mdc de dois números naturais >0. Implemente um programa
para testar a função*/

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

int main(){
  int a, b;

  printf("Digite dois números naturais: ");
  while(scanf("%d %d", &a, &b) != 2){
    printf("Entrada inválida. Digite dois números naturais: ");
    while(getchar() != '\n');
  }

  if(a <= 0 || b <= 0){
    printf("\nOs números devem ser naturais e maior que zero.\n");
    return 1;
  }

  int resultado = mdc(a, b);
  printf("\nO mdc de %d e %d é %d.\n", a, b, resultado);

  return 0;
}

