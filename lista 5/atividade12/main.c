/*Um número é dito ser regular caso sua decomposição em fatores primos apresenta apenas potências
de 2, 3 e 5. Faça uma função que verifique se um número é (retorne 1) ou não (retorne 0) regular.
Escreva também um programa para testar tal função.*/

#include <stdio.h>

// Função para verificar se um número é regular
int verificarRegular(int num){
  if(num <= 0){
    return 0; // Números negativos não são regular
  }

  // Remove todos os números 2, 3 e 5 da decomposição
  while(num % 2 == 0){
    num /= 2;
  }

  while(num % 3 == 0){
    num /= 3;
  }

  while(num % 5 == 0){
    num /= 5;
  }

  return num == 1; // Se o número é 1, é regular
}

int main(){
  int num;

  printf("Digite um número inteiro: ");
  while(scanf("%d", &num) != 1){
    printf("Entrada inválida. Digite um número inteiro: ");
    setbuf(stdin, NULL);
  }

  if(verificarRegular(num)){
    printf("\nO número %d é regular.\n", num);
  } else{
    printf("\nO número %d não é regular.\n", num);
  }

  return 0;
}