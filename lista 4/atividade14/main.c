/*Queremos efetuar a compactação de um vetor V1 de N algarismos 0 e 1 (N=40)
digitado pelo usuário (onde cada algarismo ocupa uma posição do vetor) , de forma que o
vetor resultante V2 possua menos elementos do que o vetor original. A regra de
compactação é a seguinte:
a) o primeiro elemento do vetor V2 é o número de algarismos zero que o vetor V1
contém, a partir do seu início, até o primeiro algarismo um;
b) o próximo elemento do vetor V2 é o número de algarismos um que o vetor V1
contém, a partir do último zero encontrado, até o próximo algarismo zero;
c) o próximo elemento do vetor V2 é o número de algarismos zero que o vetor V1
contém, a partir do último um encontrado, até o próximo algarismo um;
d) repete-se os passos b) e c) até o final do vetor V1.
Exemplo: para o vetor digitado V1 = (0,0,0,1,1,0,1,0,1,1,0)
obtém-se V2 = (3,2,1,1,1,2,1)
Fazer um programa para efetuar esta compactação, recebendo o V1 do usuário e testando
se os algarismos digitados são somente 0’s e 1’s.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMAMHO 40

void compactar_vetor(int v1[], int v2[], int n, int *m){
  int i = 0, j = 0;

  while(i < n){
    int cont = 0;
    int valor_atual = v1[i];
    while(i < n && v1[i] == valor_atual){
      cont++;
      i++;
    }
    v2[j++] = cont;
  }
  *m = j;
}

int main(){
  int v1[TAMAMHO];
  int v2[TAMAMHO];
  int tamanho_v2;

  printf("Digite os %d algarismos do vetor V1 (0 ou 1):\n", TAMAMHO);
  for(int i = 0; i < TAMAMHO; i++){
    while(scanf("%d", &v1[i]) != 1){
      printf("Entrada inválida. Digite um número inteiro (0 ou 1):\n");
      while(getchar() != '\n');
    }
    if(v1[i] != 0 && v1[i] != 1){
      printf("Os algarismos devem ser 0 ou 1.\n");
      return 1;
    }
  }

  compactar_vetor(v1, v2, TAMAMHO, &tamanho_v2);

  printf("Vetor V2:\n");
  for(int i = 0; i < tamanho_v2; i++){
    printf("%d ", v2[i]);
  }
  printf("\n");

  return 0;
}