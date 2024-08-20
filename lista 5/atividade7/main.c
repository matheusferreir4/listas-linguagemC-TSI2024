/*Questão 07
Escreva uma função que verifique se um número inteiro é primo. No caso positivo, a função deve
retornar 1, caso contrário zero.*/

#include <stdio.h>

// Função para verificar se um número é primo
int verificarPrimo(int num){
    if(num <= 1){
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0; // Se o número for divisível por algum número entre 2 e a raiz quadrada do número, não é primo
        }
    }
    return 1; // Não encontrou diviisores, é primo
}

int main(){
    int num;

    printf("Digite um número inteiro: ");
    while(scanf("%d", &num) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }
    if(verificarPrimo(num)){
        printf("\n%d é um número primo.\n", num);
    } else{
        printf("\n%d não é um número primo.\n", num);
    }

    return 0;
}