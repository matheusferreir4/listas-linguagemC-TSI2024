/*Escreva uma função para calcular a soma dos N primeiros termos da série 
S = X - X + X - X + X ….
 1! 2! 3! 4!*/

#include <stdio.h>

//Função para calcular o fatorial de um número
int calcularFatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

// Função para calcular a soma dos N primeiros termos da série
int calcularSoma(int n, int x){
    int soma = 0;
    for(int i = 0; i < n; i++){
        int termo = x / calcularFatorial(i);
        if(i % 2 == 0){
            termo = -termo;
        }
        soma += termo;
    }
    return soma;
}

int main(){
    int n, x;

    printf("Digite o valor de n: ");
    while(scanf("%d", &n) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }

    printf("Digite o valor de x: ");
    while(scanf("%d", &x) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }

    int soma = calcularSoma(n, x);
    printf("\nA soma dos %d primeiros termos da série é: %d\n", n, soma);

    return 0;
}
