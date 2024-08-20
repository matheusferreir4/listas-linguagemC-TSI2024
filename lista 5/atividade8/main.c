/*Escrevar uma função que verifique quantas vezes um número inteiro x é divisível por um número
inteiro y. A função deve retornar -1 caso não seja possível calcular. Escreva também um algoritmo
para testar tal funçã0*/

#include <stdio.h>

// Função para verificar quantas vezes um número x é divisível por um número y
int verificarDivisibilidade(int x, int y){
    if(y == 0){
        return -1; // Não é possível calcular divisibilidade por 0
    }
    int contador = 0;
    while(x % y == 0){
        contador++;
        x /= y;
    }
  return contador;
}

int main(){
    int x, y;
    printf("Digite o valor de x: ");
    while(scanf("%d", &x) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }
    printf("Digite o valor de y: ");
    while(scanf("%d", &y) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }
    int resultado = verificarDivisibilidade(x, y);
    if(resultado == -1){
        printf("\nNão é possível calcular divisibilidade por 0.\n");
    } else{
        printf("\nO número %d é divisível %d vezes por %d.\n", x, resultado, y);
    }
    return 0;
}