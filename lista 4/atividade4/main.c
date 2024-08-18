/*3) Faça um programa que leia um vetor de 13 elementos inteiros, que é o Gabarito de um
teste da loteria esportiva, contendo os valores 1(coluna 1), 2 (coluna 2) e 3 (coluna do
meio). Leia, a seguir, para cada apostador, o número do seu cartão e um vetor de Respostas
de 13 posições. Verificar para cada apostador o número de acertos, comparando o vetor de
Gabarito com o vetor de Respostas. Escreva o número do apostador e o número de acertos.*/

#include <stdio.h>

// Função para ler o vetor de gabarito
void leitura_gabarito(int vetor_gabarito[]) {
    printf("\nDigite os valores do gabarito (1, 2 ou 3):\n");
    for (int i = 0; i < 13; i++) {
        printf("Posição %d: ", i + 1);
        while (scanf("%d", &vetor_gabarito[i]) != 1) {
            printf("\nEntrada inválida. Digite novamente para a posição %d: ", i + 1);
            setbuf(stdin, NULL);
        }
    }
}

// Função para ler o vetor de respostas
void leitura_respostas(int vetor_respostas[]) {
    printf("\nDigite os valores das respostas (1, 2 ou 3):\n");
    for (int i = 0; i < 13; i++) {
        printf("Posição %d: ", i + 1);
        while (scanf("%d", &vetor_respostas[i]) != 1) {
            printf("\nEntrada inválida. Digite novamente para a posição %d: ", i + 1);
            setbuf(stdin, NULL);
        }
    }
}

// Função para comparar os vetores e contar os acertos
int contar_acertos(int vetor_gabarito[], int vetor_respostas[]) {
    int acertos = 0;
    for (int i = 0; i < 13; i++) {
        if (vetor_gabarito[i] == vetor_respostas[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main() {
    int gabarito[13];
    int num_apostadores;
    int numero_cartao;
    int respostas[13];
    int acertos;

    // Leitura do vetor de gabarito
    leitura_gabarito(gabarito);

    printf("\nDigite o número de apostadores: ");
    while (scanf("%d", &num_apostadores) != 1) {
        printf("\nEntrada inválida. Digite novamente o número de apostadores: ");
        setbuf(stdin, NULL);
    }

    // Processamento do número de apostadores
    for (int j = 0; j < num_apostadores; j++) {
        printf("\nDigite o número do cartão do apostador: ");
        while (scanf("%d", &numero_cartao) != 1) {
            printf("Entrada inválida. Digite novamente o número do cartão do apostador: ");
            setbuf(stdin, NULL); // Limpa o buffer de entrada
        }

        // Lendo as respostas do apostador
        leitura_respostas(respostas);

        // Contagem de acertos
        acertos = contar_acertos(gabarito, respostas);

        // Imprimindo o número do apostador e o número de acertos
        printf("\nNúmero do apostador: %d", numero_cartao);
        printf("\nNúmero de acertos: %d", acertos);
    }

    return 0;
}


