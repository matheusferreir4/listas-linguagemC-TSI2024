/*Faça uma função que receba 3 valores representando os lados de um triângulo. A funação deve
calcular e retornar a área. Retorne -1 se os valores não formarem um triângulo. Use a fórmula do
semiperímetro*/

#include <stdio.h>
#include <math.h>

// Fumção para verificar se os valores formam um triângulo
int verificarTriangulo(int a, int b, int c){
  return (a + b > c && a + c > b && b + c > a);
}

// Função para calcular a área do triângulo usando a fórmula de Heron
double calcularAreaTriangulo(int a, int b, int c){
  if(!verificarTriangulo(a, b, c)){
    return -1; // Os valores não formam um triângulo
  }

  double s = (a + b + c) / 2.0; // Semiperímetro
  return sqrt(s * (s - a) * (s - b) * (s - c)); // Fórmula de Heron
}

int main(){
  int a, b, c;

  printf("Digite os valores dos lados do triângulo: ");
  while(scanf("%d %d %d", &a, &b, &c) != 3){
    printf("Entrada inválida. Digite os valores dos lados do triângulo: ");
    setbuf(stdin, NULL);
  }

  double area = calcularAreaTriangulo(a, b, c);
  if(area == -1){
    printf("\nOs valores não formam um triângulo.\n");
  } else{
    printf("\nA área do triângulo é: %.2lf\n", area);
  }

  return 0;
}