/*Dizemos que um número inteiro é um número perfeito se a soma de seus divisores, incluindo 1 (mas
não o próprio número), é igual ao número. Por exemplo, 6 é um número perfeito porque 6 = 1+ 2 +
3. Escreva uma função que determina se um número inteiro >0 é perfeito.. Use esta função em um programa
que determina e imprime todos os números perfeitos entre 1 e 1000.*/

#include <stdio.h>

// Função para verificar se um número é perfeito
int verificarPerfeito(int num){
    int soma = 0;

    // encontrar os divisores do número e somá-los
    for (int i = 1; i < num; i++){
        if (num % i == 0){
            soma += i;
        }
    }
    // verificar se a soma dos divisores é igual ao número
    return soma == num;
}

int main(){
    printf ("\nNúmeros perfeitos entre 1 e 1000:\n");

    for (int i = 1; i <= 1000; i++){
        if (verificarPerfeito(i)){
            printf ("%d ", i);
        }
    }

    return 0;
}
