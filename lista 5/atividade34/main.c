/*Faça uma função arctan que recebe o número real x pertencente ao intervalo
fechado[0,1] e devolve uma aproximação do arco tangente de x (em radianos)
através da série série arctan(x) = x – x3
 + x
5
 - x
7
 + x
9
...
 3 5 7 9
incluindo todos os termos da série até
x
a<0,0001
Um programa para testar tal função deve ser implementado.
*/

#include <stdio.h>
#include <math.h>

// Função para calcular o arco tangente usando a série de Taylor
double arctan(double x){
  double termo = x;
  double resultado = termo;
  int n = 1;

  while(fabs(termo) >= 0.0001){
    termo = ((-1) * termo * x * x) / ((2 * n) * (2 * n + 1));
    resultado += termo;
    n++;
  }
  return resultado;
}

int main(){
  double x;

  printf("Digite o valor de x (entre 0 e 1): ");
  while(scanf("%lf", &x) != 1 || x < 0 || x > 1){
    printf("Entrada inválida. Digite um valor entre 0 e 1: ");
    setbuf(stdin, NULL);
  }

  double resultado = arctan(x);
  printf("O arco tangente de %.2lf é aproximadamente %.4lf radianos.\n", x, resultado);

  return 0;
}