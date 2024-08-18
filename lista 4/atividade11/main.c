/*Faça um programa que a partir de dois vetores v1 e v2 de 10 posições de valores
inteiros, estando-os ordenados, gere um terceiro vetor v3 de inteiros que será formado pelos
elementos de v1 e v2 . O vetor v3 deve ficar ordenado.*/

#include <stdio.h>

#define SIZE 10
#define TOTAL_SIZE 20

void merge(int v1[], int v2[], int v3[], int size){
  int i = 0, j = 0, k = 0;

  while (i < size && j < size){
    if (v1[i] < v2[j]){
      v3[k++] = v1[i++];
    } else{
      v3[k++] = v2[j++];
    }
  }
  while (i < size){
    v3[k++] = v1[i++];
  }
  while (j < size){
    v3[k++] = v2[j++];
  }
}

int main(){
  int v1[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  int v2[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int v3[TOTAL_SIZE];

  merge(v1, v2, v3, SIZE);

  printf("Vetor v3: ");
  for (int i = 0; i < TOTAL_SIZE; i++ ){
    printf("%d ", v3[i]);
  }
  printf("\n");

  return 0;
}