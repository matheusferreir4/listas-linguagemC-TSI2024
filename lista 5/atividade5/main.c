/*Ecreva uma função para calcular o número de arranjos de n elementos s a s. Retornar -1 se não for
possível calcular tal arranjo.*/

#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int num){
  if(num == 0 || num == 1){
    return 1;
  }
  unsigned long long resultado = 1;
  for(int i = 2; i <= num; i++){
    resultado *= i;
  }
  return resultado;
}

// Função para calcular o número de arranjos de n elementos s a s
long long arranjos(int n, int s){
  if(n < 0 || s < 0 || n < s){
    return -1; // Não é possível calcular arranjos com números negativos
  }
    return fatorial(n) / fatorial(n - s);
}

int main(){
    int n, s;
    printf("Digite o valor de n: ");
    while(scanf("%d", &n) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }
    printf("Digite o valor de s: ");
    while(scanf("%d", &s) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }

    long long resultado = arranjos(n, s);
    if(resultado == -1){
        printf("\nNão é possível calcular arranjos com número negativos ou n < s.\n");
    } else{
        printf("\nO número de arranjos de %d elementos tomados %d a %d é: %lld\n", n, s, s, resultado);
    }

    return 0;
}