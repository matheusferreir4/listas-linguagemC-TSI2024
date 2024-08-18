/* Faça um programa que 10 números, sem valores repetidos. Em seguida ler um número
qualquer. Escrever a mensagem ACHEI, se o número estiver entre os 10 números lidos
anteriormente, ou NÃO ACHEI caso contrário.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

// Função para verificar se um número já existe no array
int numero_existe(int numero, int array[], int tamanho){
  for (int i = 0; i < tamanho; i++){
    if (array[i] == numero){
      return 1;
    }
  }
  return 0;
}

int main(){
  int numeros[TAMANHO];
  int numero_User;
  int i = 0;

  // inicializa o gerador de números aleatórios
  srand(time(NULL));

  // gera 10 números aleatórios e os armazena
  while (i < TAMANHO){
    int numero_aleatorio = rand() % 100 + 1; // gera números entre 1 e 100
    if (!numero_existe(numero_aleatorio, numeros, i)){
      numeros[i] = numero_aleatorio;
      i++;
    }
  }

  // exibe os números gerados
  printf("Números gerados: ");
  for (int i = 0; i < TAMANHO; i++){
    printf("%d ", numeros[i]);
  }
  printf("\n");

  //lê o número do usuário
  printf("Digite um número: ");
  while(scanf("%d", &numero_User) != 1){
    printf("Erro: entrada inválida. Digite um número inteiro: ");
    while(getchar() != '\n');
  }

  // verifica se o número está entre os números gerados
  if (numero_existe(numero_User, numeros, TAMANHO)){
    printf("ACHEI\n");
  } else{
    printf("NÃO ACHEI\n");
  }
  return 0;
}
