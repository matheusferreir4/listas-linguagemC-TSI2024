/*Implemente uma função para calcular a soma dos divisores de um inteiro >0. Implemente um
programa para testar a função.*/

#include <stdio.h>

// Função para calcular a soma dos divisores de um número 
int somaDivisores(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int n;

    printf("Digite um número inteiro maior que zero: ");
    while(scanf("%d", &n) != 1){
        printf("Entrada inválida. Digite um número inteiro maior que zero: ");
        while(getchar() != '\n');
    }

    if(n <= 0){
        printf("\nO número deve ser maior que zero.\n");
        return 1;
    }

    int resultado = somaDivisores(n);
    printf("\nA soma dos divisores de %d é %d.\n", n, resultado);

    return 0;
}