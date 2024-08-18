#include <stdio.h>
#include <stdlib.h>

// Função para imprimir um vetor
void imprimir_vetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
}

// Função para calcular a união de X e Y
void uniao(int X[], int Y[], int Z[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    Z[i] = X[i];
    Z[i + tamanho] = Y[i];
  }
}

// Função para calcular a soma de X e Y
void soma(int X[], int Y[], int Z[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    Z[i] = X[i] + Y[i];
  }
}

// Função para calcular o produto de x e y
void produto(int X[], int Y[], int Z[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    Z[i] = X[i] * Y[i];
  }
}

// Função para calcular a diferença de X e Y
void diferenca(int X[], int Y[], int Z[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    Z[i] = X[i] - Y[i];
  }
}

// Função para calcular a intersecção de X e Y
void interseccao(int X[], int Y[], int Z[], int *tamanhoZ) {
  int k = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (X[i] == Y[j]) {
        Z[k++] = X[i];
        break;
      }
    }
  }
  *tamanhoZ = k;
}

int main() {
  int X[10], Y[10], Z[20];
  int tamanhoZ;

  // Entrada dos vetores X e Y
  printf("Digite os elementos do vetor X(10 elementos):\n");
  for (int i = 0; i < 10; i++) {
    while (scanf("%d", &X[i]) != 1) {
      printf("Entrada inválida. Digite novamente: ");
      setbuf(stdin, NULL);
    }
  }

  printf("Digite os elementos do vetor Y(10 elementos):\n");
  for (int i = 0; i < 10; i++) {
    while (scanf("%d", &Y[i]) != 1) {
      printf("Entrada inválida. Digite novamente: ");
      setbuf(stdin, NULL);
    }
  }

  // Calculo da união de X e Y
  uniao(X, Y, Z, 10);
  printf("A união de X e Y é: ");
  imprimir_vetor(Z, 20);

  // Calculo da diferença de X e Y
  diferenca(X, Y, Z, 10);
  printf("A diferença de X e Y é: ");
  imprimir_vetor(Z, 10);

  // Calculo a soma de X e Y
  soma(X, Y, Z, 10);
  printf("A soma de X e Y é: ");
  imprimir_vetor(Z, 10);

  // Calculando o produto de X e Y
  produto(X, Y, Z, 10);
  printf("O produto de X e Y é: ");
  imprimir_vetor(Z, 10);

  // Calculando a intersecção de X e Y
  interseccao(X, Y, Z, &tamanhoZ);
  printf("A intersecção de X e Y é: ");
  imprimir_vetor(Z, tamanhoZ);

  return 0;
}