/*Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo.
Supor que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e
escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos. ( se a > b + c não
formam triângulo algum, se a é o maior).*/

#include <stdio.h>
#include <math.h>
#define RAIZ 1.73205081

int main() {
    int a, b, c, d;

    printf("Insira o valor do lado 'a': ");
    scanf("%d", &a);

    printf("\nInsira o valor do lado 'b': ");
    scanf("%d", &b);

    printf("\nInsira o valor do lado 'c': ");
    scanf("%d", &c);

    // Verificar se os lados formam um triângulo
    if (a < b + c && b < a + c && c < a + b) {
        // Triângulo equilátero
        if (a == b && b == c) {
            printf("\nEsse é um triângulo equilátero.");

            d = (int)(pow(a, 2) * RAIZ / 4);
            printf("\nA área desse triângulo é %d", d);
        }
        // Triângulo isósceles
        else if (a == b || a == c || b == c) {
            printf("\nEsse é um triângulo isósceles.");

            if (a == b) {
                d = (int)((c * sqrt(pow(a, 2) - pow(b, 2) / 4)) / 2);
            } else if (a == c) {
                d = (int)((b * sqrt(pow(a, 2) - pow(c, 2) / 4)) / 2);
            } else {
                d = (int)((a * sqrt(pow(b, 2) - pow(c, 2) / 4)) / 2);
            }
            printf("\nA área desse triângulo é %d", d);
        }
        // Triângulo escaleno
        else {
            printf("\nEsse é um triângulo escaleno.");

            int p = (a + b + c) / 2;
            d = (int)sqrt(p * (p - a) * (p - b) * (p - c));
            printf("\nA área desse triângulo é %d", d);
        }
    } else {
        printf("\nOs valores lidos não formam um triângulo.");
        printf("\nValores inseridos: a = %d, b = %d, c = %d", a, b, c);
    }

    return 0;
}