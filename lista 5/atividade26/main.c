/*Questão 26
Implemente uma função que troque os valores dos parametros a e b, ou seja, a recebe o valor de b e
b recebe o valor de a.*/

#include <stdio.h>

void trocarValores(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int a, b;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  printf("Digite o valor de b: ");
  scanf("%d", &b);

  trocarValores(&a, &b);
  
  printf("\nValores antes da troca:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}
