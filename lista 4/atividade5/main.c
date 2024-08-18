/*Faça um programa que leia um vetor de 80 elementos inteiros. Encontre e mostre o
menor elemento e sua(s) posição(ões) no vetor.*/

#include <stdio.h>

void ler_vetor(int vetor[], int tamanho){
  printf("\nDigite %d elementos inteiros:\n", tamanho);
  for (int i = 0; i < tamanho;i++){
    printf("Elemento %d: ", i+1);
    while (scanf("%d", &vetor[i]) != 1){
      printf("\nEntrada inválida. Digite novamente o elemento %d: ", i+1);
      setbuf(stdin, NULL);
    }
  }
}

void encontra_menor_elemento(int vetor[], int tamanho, int *menor_elemento, int posicoes[], int *cont){
  *menor_elemento = vetor[0];
  *cont = 0;

  for (int i = 0; i < tamanho; i++){
    if (vetor[i] < *menor_elemento){
      *menor_elemento = vetor[i];
      *cont = 0;
      posicoes[*cont] = i;
      (*cont)++;
    } else if (vetor[i] == *menor_elemento){
      posicoes[*cont] = i;
      (*cont)++;
    }
  }
}

int main (){
  int vetor[80];
  int menor_elemento, posicoes[80], cont = 0;
  ler_vetor(vetor, 80);
  encontra_menor_elemento(vetor, 80, &menor_elemento, posicoes, &cont);

  printf("\nMenor elemento: %d", menor_elemento);
  for (int i = 0; i < cont; i++){
    printf("\nPosição %d: %d", posicoes[i]+1, posicoes[i]);
  }
  return 0;
}