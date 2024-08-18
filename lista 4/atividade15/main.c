/* Determinada empresa de turismo fez uma pesquisa na última temporada de verão, junto
a turistas em Minas Gerais. Foram solicitados os seguintes dados de cada turista
entrevistado: cidade histórica de preferência e renda mensal. Faça um programa que leia
estes dados e forneça as seguintes informações:
a) qual a cidade preferida pelo maior número de turistas; 
b) média da renda mensal dos turistas; 
c) número de turistas e renda média por cidade de preferência. 
Obs.: Cidades históricas de Minas Gerais:
Ouro Preto, Mariana, Tiradentes, Diamantina, Sabará, São João Del Rei, São Tomé das
Letras, Santa Bárbara, Caeté e Congonhas. */

#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 11
#define NUM_TURISTAS 100

typedef struct {
    char cidade[30];
    float renda_mensal;
} Turista;

const char* cidades_historicas[NUM_CIDADES] = {
    "Ouro Preto", "Mariana", "Tiradentes", "Diamantina", "Sabara","Sabará", "São João Del Rei", "São Tomé das Letras", "Santa Bárbara",           "Caeté", "Congonhas"
};

void ler_dados_turistas(Turista turistas[], int *num_turistas){
  printf("\nQuantos turistas foram entrevistados? ");
  while(scanf("%d", num_turistas) != 1){
    printf("Entrada inválida. Digite um número inteiro: ");
    setbuf(stdin, NULL);
  }

  for(int i = 0; i < *num_turistas; i++){
    printf("\nDados do turista %d:\n", i + 1);
    printf("Cidade histórica de preferência: ");
    while(scanf("%s", turistas[i].cidade) != 1){
      printf("Entrada inválida. Digite uma cidade histórica: ");
      setbuf(stdin, NULL);
    }
    printf("Renda mensal: ");
    while(scanf("%f", &turistas[i].renda_mensal) != 1){
      printf("Entrada inválida. Digite um número: ");
      setbuf(stdin, NULL);
    }
  }
}

void calcular_estatisticas(Turista turistas[], int num_turistas){
  int num_turistas_por_cidade[NUM_CIDADES] = {0};
  float soma_renda[NUM_CIDADES] = {0.0};
  int num_turistas_total = 0;
  float soma_renda_total = 0.0;

  for(int i = 0; i < num_turistas; i++){
    for(int j = 0; j < NUM_CIDADES; j++){
      if(strcmp(turistas[i].cidade, cidades_historicas[j]) == 0){
        num_turistas_por_cidade[j]++;
        soma_renda[j] += turistas[i].renda_mensal;
        break;
      }
    }
    num_turistas_total++;
    soma_renda_total += turistas[i].renda_mensal;
  }

  // a) qual a cidade preferida pelo maior número de turistas
  int max_turistas = 0;
  char cidade_preferida[30];
  for(int i = 0; i < NUM_CIDADES; i++){
    if(num_turistas_por_cidade[i] > max_turistas){
      max_turistas = num_turistas_por_cidade[i];
      strcpy(cidade_preferida, cidades_historicas[i]);
    }
  }
  printf("\nCidade preferida pelo maior número de turistas: %s\n", cidade_preferida);

  // b) média da renda mensal dos turistas
  float media_renda = soma_renda_total / num_turistas_total;
  printf("Média da renda mensal dos turistas: %.2f\n", media_renda);

  // c) número de turistas e renda média por cidade de preferência
  for(int i = 0; i < NUM_CIDADES; i++){
    if (num_turistas_por_cidade[i] > 0){
      printf("\nNúmero de turistas em %s: %d\n", cidades_historicas[i], num_turistas_por_cidade[i]);
      printf("Renda média por cidade de preferência: %.2f\n", soma_renda[i]);
    }
  }
}

int main(){
  Turista turistas[NUM_TURISTAS];
  int num_turistas;

  ler_dados_turistas(turistas, &num_turistas);
  calcular_estatisticas(turistas, num_turistas);

  return 0;
}