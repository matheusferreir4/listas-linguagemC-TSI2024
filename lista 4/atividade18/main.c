#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float maiorDiferenca(float vetor[], int n) {
    if (n < 2) {
        printf("O vetor deve ter pelo menos dois elementos.\n");
        return -1;
    }

    float maior_diferenca = fabs(vetor[1] - vetor[0]);
    for (int i = 1; i < n - 1; i++) {
        float diferenca = fabs(vetor[i + 1] - vetor[i]);
        if (diferenca > maior_diferenca) {
            maior_diferenca = diferenca;
        }
    }
    return maior_diferenca;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    while(scanf("%d", &n) != 1){
        printf("Entrada inválida. Digite um valor válido: ");
            setbuf(stdin, NULL);
    }

    float vetor[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        while(scanf("%f", &vetor[i]) != 1){
            printf("Entrada inválida. Digite um valor válido: ");
                setbuf(stdin, NULL);
        }
    }

    float resultado = maiorDiferenca(vetor, n);
    if (resultado != -1) {
        printf("A maior diferença entre dois elementos consecutivos é: %.2f\n", resultado);
    }

    return 0;
}
