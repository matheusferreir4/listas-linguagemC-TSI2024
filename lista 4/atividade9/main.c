/*9) Uma locadora de vídeos guarda, em um vetor de 500 posições, a quantidade de
 * filmes retirados por seus clientes durante o ano de 2013.Agora, esta locadora
 * está fazendo uma promoção e, para cada 10 filmes retirados, o cliente tem
 * direito a uma locação grátis.Faça um programa que crie um outro vetor
 * contendo a quantidade de locações gratuitas a que cada cliente tem direito.*/

#include <stdio.h>

// Função para calcular a quantidade de locações gratuitas
void calcular_locacoes_gratuitas(int vetor_filmes[], int vetor_locacoes_gratuitas[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    vetor_locacoes_gratuitas[i] = vetor_filmes[i] / 10;
  }
}

// Função para imprimir o vetor de locações gratuitas
void imprimir_vetor(int vetor_locacoes_gratuitas[], int tamanho) {
  printf("\nQuantidade de locações gratuitaspara cada cliente: ");
  for (int i = 0; i < tamanho; i++) {
    printf("\nCliente %d: %d locações gratuitas", i + 1, vetor_locacoes_gratuitas[i]);
  }
}

int main() {
  int vetor_filmes[500], vetor_locacoes_gratuitas[500], tamanho = 500;

  // entrada dos dados: quantidade de filmes retirados por cada cliente
  printf("\nDigite a quantidade de filmes retirados por cada cliente:");
  for (int i = 0; i < tamanho; i++) {
    while (scanf("%d", &vetor_filmes[i]) != 1) {
      printf("\nErro: entrada inválida. Digite um número inteiro: ");
      while (getchar() != '\n');
    }
  }

  // chamada da função para calcular a quantidade de locações gratuitas
  calcular_locacoes_gratuitas(vetor_filmes, vetor_locacoes_gratuitas, tamanho);

  // chamada da função para imprimir o vetor de locações gratuitas
  imprimir_vetor(vetor_locacoes_gratuitas, tamanho);
  return 0;
}