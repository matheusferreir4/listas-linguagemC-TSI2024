/*Implementar uma função para calcular o cos(X). O valor do cosseno de X será calculado pela soma
dos n primeiros termos da série a seguir:
cos( X ) = 1 - X
2
 + X
4
- X6 + X
8 ….
2! 4! 6! 8!*/

#include <stdio.h>
#include <math.h>

// Função para calcular o fatorial de um número
long long calcularFatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * calcularFatorial(n - 1);
}

// Função para calcular o cosseno de um número usando a série de Taylor
double calcularCosseno(double x, int n){
    double cosseno = 1.0;
    for(int i = 1; i < n; i++){
        int sinal = (i % 2 == 0) ? -1 : 1;
        int expoente = 2 * i;
        double termo = pow(x, expoente) / calcularFatorial(expoente);
        cosseno += termo;
    }
    return cosseno;
}

int main(){
    double x;
    int n;

    printf("Digite o valor de x: ");
    while(scanf("%lf", &x) != 1){
        printf("Entrada inválida. Digite um número real: ");
        while(getchar() != '\n');
    }

    printf("Digite o valor de n: ");
    while(scanf("%d", &n) != 1){
        printf("Entrada inválida. Digite um número inteiro: ");
        while(getchar() != '\n');
    }

    double cosseno = calcularCosseno(x, n);
    printf("\nO cosseno de %.2lf é aproximadamente %.6lf\n", x, cosseno);

    return 0;
}