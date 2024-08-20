/*Escreva uma função que calcule x^y, usando apenas multiplicações. Onde x pode ser um valor em
ponto flutuante e y um inteiro maior ou igual a zero.*/

#include <stdio.h>

// Função para calcular x^y
double potencia(double x, int y){
  if(y == 0){
    return 1; // Caso base: x^0 = 1
  }
  double resultado = 1;
  for(int i = 0; i < y; i++){
    resultado *= x;
  }
  return resultado;
}

int main(){
  double x;
  int y;

  printf("Digite o valor de x: ");
  while(scanf("%lf", &x) != 1){
    printf("Entrada inválida. Digite um número em ponto flutuante: ");
    while(getchar() != '\n');
  }
  printf("Digite o valor de y (inteiro maior ou igual a zero): ");
  while(scanf("%d", &y) != 1 || y < 0){
    printf("Entrada inválida. Digite um número inteiro maior ou igual a zero:");
    while(getchar() != '\n');
  }

  double resultado = potencia(x, y);
  printf("\n%lf elevado a %d é igual a %lf.\n", x, y, resultado);

  return 0;
}