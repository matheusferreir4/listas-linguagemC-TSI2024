/*O jogo da trilha consta de um tabuleiro com 80 casas, numeradas de um a
80. A cada round todos os jogadores,um de cada vez, que tiverem direito, jogam dois dados(que
podem somar de 2 a 12 ) e avançam o número de casas a partir da sua posição atual, correspondente
a soma dos dados. Vence o jogo o jagador que ultrapassar a última casa (80) primeiro.
Faça um programa que leia o nome(que é único) de cada jogador. O número de jogadore deve ser
maior ou igual a dois e menor ou igual a 10
Preencha um vetor com as 10 posições que indicam armadilhas. Os valores que podem ser
armazenados devem estar no intervalo fechado de 1 a 80 e não pode possuir valores permitidos.
Caso o jogador chegue uma casa que significa armadilha, o mesmo fica uma rodada de castigo, ou 
seja, sem poder jogar os dados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_JOGADORES 10
#define MAX_CASAS 80
#define MAX_ARMADILHAS 10

typedef struct {
    char nome[50];
    int posicao;
    int castigo;
} Jogador;

void inicializarArmadilhas(int armadilhas[]){
  for(int i = 0; i < MAX_ARMADILHAS; i++){
    armadilhas[i] = rand() % MAX_CASAS + 1;
  }  
}

int verificarArmadilha(int posicao, int armadilhas[]){
  for(int i = 0; i < MAX_ARMADILHAS; i++){
    if(posicao == armadilhas[i]){
      return 1;
    }
  }
  return 0;
}

int main(){
  srand(time(NULL));
  
  int numJogadores;
  Jogador jogadores[MAX_JOGADORES];
  int armadilhas[MAX_ARMADILHAS];

  printf("Digite o número de jogadores (2 a 10): ");
  while(scanf(" %d", &numJogadores) != 1){
    printf("Entrada inválida. Digite um número inteiro entre 2 e 10: ");
    setbuf(stdin, NULL);
  }
  if(numJogadores < 2 || numJogadores > MAX_JOGADORES){
    printf("Número de jogadores inválido.\n");
    return 1;
  }

  for(int i = 0; i < numJogadores; i++){
    printf("Digite o nome do jogador %d: ", i + 1);
    while(scanf(" %s", jogadores[i].nome) != 1){
      printf("Entrada inválida. Digite um nome válido: ");
      setbuf(stdin, NULL);
    }
    jogadores[i].posicao = 0;
    jogadores[i].castigo = 0;
  }

  inicializarArmadilhas(armadilhas);

  int jogoTerminado = 0;
  while(!jogoTerminado){
    for(int i = 0; i < numJogadores; i++){
      if(jogadores[i].castigo > 0){
        jogadores[i].castigo--;
        continue;
      }

      int dado1 = rand() % 6 + 1;
      int dado2 = rand() % 6 + 1;
      int somaDados = dado1 + dado2;

      jogadores[i].posicao += somaDados;

      if(jogadores[i].posicao > MAX_CASAS){
        printf("\nO jogador %s ultrapassou a última casa.\n", jogadores[i].nome);
        jogoTerminado = 1;
        break;
      }

      if(verificarArmadilha(jogadores[i].posicao, armadilhas)){
        printf("\nO jogador %s caiu em uma armadilha e perdeu uma rodada.\n", jogadores[i].nome);
        jogadores[i].castigo = 1;
      }

      printf("\nO jogador %s jogou os dados e obteve %d e %d. Sua posiçao atual é %d.\n", jogadores[i].nome, dado1, dado2, jogadores[i].posicao);
    }
  }
  return 0;
}