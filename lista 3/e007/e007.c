/*Faça um programa que tenha como entrada um conjunto de numeros inteiros. Calcular e 
imprimir:
a) A media dos numeros lidos;
b) O maior número;
c) O menor número.*/

#include <stdio.h>
#define CON 0

int main() {
    int a, numero, maior, menor;
    double quantidade, soma, media;

    a = 1;
    quantidade = 0;
    soma = 0;

    // Inicialize maior e menor com o primeiro número inserido
    printf("Insira o %do número inteiro ou insira 0 para sair: ", a);
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    a++;

    do {
        // Definindo a quantidade de termos
        if (numero != CON)
            quantidade++;

        // Somando os termos
        soma += numero;

        // Definindo o maior e o menor
        if (numero > maior && numero != CON)
            maior = numero;
        if (numero < menor && numero != CON)
            menor = numero;

        printf("Insira o %do número inteiro ou insira 0 para sair: ", a);
        scanf("%d", &numero);
        a++;
    } while (numero != CON);

    // Fazendo a média, dividindo os termos somados pela quantidade
    if (quantidade != 0)
        media = soma / quantidade;
    else
        media = 0;

    printf("\nA média dos números lidos é %.1lf", media);

    // Imprimindo o maior e o menor
    printf("\nO maior número é %d.", maior);
    printf("\nO menor número é %d.", menor);

    return 0;
}
