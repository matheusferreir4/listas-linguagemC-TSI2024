#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATOS 50
#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    int votos;
} Candidato;

void inicializarCandidatos(Candidato candidatos[], int numCandidatos) {
    for (int i = 0; i < numCandidatos; i++) {
        candidatos[i].votos = 0;
    }
}

int encontrarCandidato(Candidato candidatos[], int numCandidatos, char nome[]) {
    for (int i = 0; i < numCandidatos; i++) {
        if (strcmp(candidatos[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    Candidato candidatos[MAX_CANDIDATOS];
    int numCandidatos = MAX_CANDIDATOS;
    int numEleitores;
    char nomeVoto[MAX_NOME];

    printf("Digite o nome dos %d candidatos:\n", numCandidatos);
    for (int i = 0; i < numCandidatos; i++) {
        printf("Candidato %d: ", i + 1);
        scanf("%s", candidatos[i].nome);
    }

    inicializarCandidatos(candidatos, numCandidatos);

    printf("Digite o número de eleitores: ");
    scanf("%d", &numEleitores);

    printf("Digite o nome do candidato em quem cada eleitor votou:\n");
    for (int i = 0; i < numEleitores; i++) {
        printf("Eleitor %d: ", i + 1);
        scanf("%s", nomeVoto);
        int indice = encontrarCandidato(candidatos, numCandidatos, nomeVoto);
        if (indice != -1) {
            candidatos[indice].votos++;
        } else {
            printf("Candidato não encontrado!\n");
        }
    }

    int maxVotos = 0;
    for (int i = 0; i < numCandidatos; i++) {
        if (candidatos[i].votos > maxVotos) {
            maxVotos = candidatos[i].votos;
        }
    }

    printf("Candidato(s) vencedor(es):\n");
    for (int i = 0; i < numCandidatos; i++) {
        if (candidatos[i].votos == maxVotos) {
            printf("%s com %d votos\n", candidatos[i].nome, candidatos[i].votos);
        }
    }

    return 0;
}