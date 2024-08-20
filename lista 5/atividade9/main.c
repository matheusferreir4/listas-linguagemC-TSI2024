/*Implemente uma função para verificar se 3 valores numéricos formam um
triângulo. Para formar um triângulo cada lado deve ser menor que a soma dos
outros dois*/

#include <stdio.h>

// Função para verificar se os valores formam um triângulo
int verificarTriangulo(int a, int b, int c) {
  if (a + b > c && a + c > b && b + c > a) {
    return 1; // Os valores formam um triângulo
  } else {
    return 0; // Os valores não formam um triângulo
  }
}

int main() {
  int a, b, c;

    printf("Digite três lados do triângulo: ");
    while(scanf("%d %d %d", &a, &b, &c) != 3){
        printf("Entrada inválida. Digite três lados do triânngulo: ");
        while(getchar() != '\n');
    }
    if (verificarTriangulo(a, b, c)){
        printf("\nOs valores formam um triângulo.\n");
    } else {
        printf("\nOs valores não formam um triângulo.\n");
    }

    return 0;
}