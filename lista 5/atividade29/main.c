/*Implemente uma função que converta um inteiro maior ou igual a zero da base 10
 * para a base 2.*/

#include <stdio.h>

// Função para converter um inteiro maior ou igual a zero da base 10 para a base
// 2
void converterParaBinario(int numero) {
  if (numero == 0) {
    printf("0");
    return;
  }

  int binario[32]; // Array para armazenar o número binário
  int indice = 0;

  while (numero > 0) {
    binario[indice] = numero % 2;
    numero /= 2;
    indice++;
  }

  // imrpimir o número binário
  for (int i = indice - 1; i >= 0; i--) {
    printf("%d", binario[i]);
  }
}

int main() {
  int numero;
  printf("Digite um número inteiro maior ou igual a zero: ");
  scanf("%d", &numero);

  if (numero < 0){
    printf("Entrada inválida. O número deve ser maior ou igual a zero.\n");
  } else{
    printf("O número %d em binário é: ", numero);
    converterParaBinario(numero);

    printf("\n");
  }

  return 0;
}
