/*Escreva uma função para verificar se 3 valores formam um triângulo. Deve ser usado passagem de
parâmetro por referência e o tipo de retorno da função deve ser void. Três valores formam um
triângulo se cada valor for menor que a soma dos outros dois.*/

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se 3 valores formam um triângulo
void verificarTriangulo(int *a, int *b, int *c, bool *formaTriangulo){
    if(*a < *b + *c && *b < *a + *c && *c < *a + *b) {
            *formaTriangulo = true;
        } else {
            *formaTriangulo = false;
        }
}

int main(){
    int a, b, c;
    bool formaTriangulo;

    printf("Digite os valores dos lados do triângulo: ");
    while(scanf("%d %d %d", &a, &b, &c) != 3){
        printf("Entrada inválida. Digite três números inteiros: ");
        while(getchar() != '\n');
    }

    verificarTriangulo(&a, &b, &c, &formaTriangulo);

    if(formaTriangulo){
        printf("\nOs valores formam um triângulo.\n");
    } else {
        printf("\nOs valores não formam um triângulo.\n");
    }

    return 0;
}
