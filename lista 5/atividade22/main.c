/*Implementar uma função para calcular o sen(X). O valor do seno de X será calculado pela soma dos 
n primeiros termos da série a seguir:
sen( X ) = X - X
3 + X
5
- X7
 + X
9 ….
3! 5! 7! 9!*/

#include <stdio.h>
#include <math.h>

// Função para calcular o fatorial de um número
long long calcularFatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

// Função para calcular o seno de um número x usando a série de Taylor
double calcularSeno(double x, int n){
  double seno = 0.0;
  for(int i = 0; i < n; i++){
    int sinal = (i % 2 == 0) ? 1 : -1;
    int expoente = 2 * i + 1;
    double termo = pow(-1, i) * pow(x, expoente) / calcularFatorial(expoente);
    seno += termo;
  }
  return seno;
}

int main(){
  double x;
  int n;

  printf("Digite o valor de x: ");
  while(scanf("%lf", &x) != 1){
    printf("Entrada inválida. Digite um número real: ");
    while(getchar() != '\n');
  }

  printf("Digite o valor de n: ");
  while(scanf("%d", &n) != 1){
    printf("Entrada inválida. Digite um número inteiro: ");
    while(getchar() != '\n');
  }

  double seno = calcularSeno(x, n);
  printf("\nO seno de %.2lf é aproximadamente %.6lf\n", x, seno);

  return 0;
}