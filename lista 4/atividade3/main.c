/*Fazer um programa que: 
a) leia um conjunto de valores correspondentes a 80 notas dos alunos de uma turma (de
0 a 10); 
b) calcule a freqüência absoluta e a freqüência relativa de cada nota; 
c) imprima uma tabela contendo os valores das notas (de 0 a 10) e suas respectivas
freqüências absoluta e relativa.*/

#include <stdio.h>

int main(){
  int notas[80];
  int frequencia_absoluta[11] = {0};
  float frequencia_relativa[11] = {0};

  for (int i = 0; i < 80; i++){
    int resultado;
    do{
      printf("\nDigite a nota do aluno %d: ", i+1);
      resultado = scanf("%d", &notas[i]);
      while (getchar() != '\n'); // Limpa o buffer de entrada
    } while (notas[i] < 0 || notas[i] > 10);
    frequencia_absoluta[notas[i]]++;
  }

  //calculando a frequencia relativa
  for (int i = 0; i < 10; i++){
    frequencia_relativa[i] = (float) frequencia_absoluta[i] / 80;
  }

  //mostrando a tabela de frequencia absoluta e relativa
  printf("\nNota\tFrequencia Absoluta\tFrequencia Relativa\n");
  for (int i = 0; i < 10; i++){
    printf("%d\t%d\t\t\t%.2f\n", i, frequencia_absoluta[i], frequencia_relativa[i]);
  }
  return 0;
}