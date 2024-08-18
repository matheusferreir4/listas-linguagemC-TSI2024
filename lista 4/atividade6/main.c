/*Faça um programa que leia um vetor G de 20 elementos caracter que representa o
gabarito de uma prova. A seguir, para cada um dos 50 alunos da turma, leia o
vetor de respostas (R) do aluno e conte o número de acertos. Mostre o nº de
acertos do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 12; e
mostre uma mensagem de REPROVADO, caso contrário*/

#include <stdio.h>

#define NUM_ALUNOS 50
#define NUM_QUESTOES 20

// Função para ler o gabarito da prova
void ler_gabarito(char gabarito[]) {
  printf("\nDigite o gabarito da prova (20 caracteres):\n");
  for (int i = 0; i < NUM_QUESTOES; i++) {
    printf("Questão %d: ", i + 1);
    while (scanf(" %c", &gabarito[i]) != 1) {
      printf("\nEntrada inválida. Digite novamente a questão %d: ", i + 1);
      setbuf(stdin, NULL);
    }
  }
}

// Função para ler as respostas dos alunos
void ler_respostas(char respostas[]) {
  printf("\nDigite as respostas dos alunos (20 caracteres):\n");
  for (int i = 0; i < NUM_QUESTOES; i++) {
    printf("Questão %d: ", i + 1);
    while (scanf(" %c", &respostas[i]) != 1) {
      printf("\nEntrada inválida. Digite novamente a questão %d: ", i + 1);
      setbuf(stdin, NULL);
    }
  }
}

// Função para contar o número de acertos
int contar_acertos(char gabarito[], char respostas[]) {
  int acertos = 0;
  for (int i = 0; i < NUM_QUESTOES; i++) {
    if (gabarito[i] == respostas[i]) {
      acertos++;
    }
  }
  return acertos;
}

int main() {
  char gabarito[NUM_QUESTOES];
  char respostas[NUM_QUESTOES];
  int acertos;

  // Leitura do gabarito
  ler_gabarito(gabarito);

  // Leitura das respostas dos alunos
  for (int i = 0; i < NUM_ALUNOS; i++) {
    printf("\nAluno %d:\n", i + 1);
    ler_respostas(respostas);

    // Contagem de acertos
    acertos = contar_acertos(gabarito, respostas);

    // Exibição da mensagem de aprovação ou reprovação
    printf("\nNúmero de acertos: %d", acertos);
    if (acertos >= 12) {
      printf("\nAPROVADO\n");
    } else {
      printf("\nREPROVADO\n");
    }
  }

  return 0;
}