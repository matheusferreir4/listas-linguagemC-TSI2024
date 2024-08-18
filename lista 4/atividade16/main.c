/*)Foram levantados dados relativos a 300 alunos de uma universidade. Para cada aluno
foram obtidos nome, altura e idade. Faça um programa que leia estes dados do teclado e
forneça: 
a) nome dos alunos que têm altura superior à média;
b) número de alunos com mais de 25 anos;
c) quantos alunos tem idade inferior à média de idades;
d) nome dos alunos com idade inferior a 18 anos, que têm altura inferior à média de
alturas.*/

#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 300

typedef struct {
    char nome[50];
    float altura;
    int idade;
} Aluno;

void lerDados(Aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");
        while(scanf("%s", alunos[i].nome) != 1){
            printf("Entrada inválida. Digite um nome: ");
            setbuf(stdin, NULL);
        }
        printf("Altura (em metros): ");
        while(scanf("%f", &alunos[i].altura) !=1){
            printf("Entrada inválida. Digite uma altura (em metros): ");
            setbuf(stdin, NULL);
        }
        printf("Idade: ");
        while(scanf("%d", &alunos[i].idade) != 1){
            printf("Entrada inválida. Digite uma idade: ");
            setbuf(stdin, NULL);
        }
    }
}

float calcularMediaAltura(Aluno alunos[], int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += alunos[i].altura;
    }
    return soma / n;
}

float calcularMediaIdade(Aluno alunos[], int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += alunos[i].idade;
    }
    return soma / n;
}

void alunosAlturaSuperiorMedia(Aluno alunos[], int n, float mediaAltura) {
    printf("Alunos com altura superior à média:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].altura > mediaAltura) {
            printf("%s\n", alunos[i].nome);
        }
    }
}

int contarAlunosMaisDe25Anos(Aluno alunos[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (alunos[i].idade > 25) {
            count++;
        }
    }
    return count;
}

int contarAlunosIdadeInferiorMedia(Aluno alunos[], int n, float mediaIdade) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (alunos[i].idade < mediaIdade) {
            count++;
        }
    }
    return count;
}

void alunosMenoresDe18AlturaInferiorMedia(Aluno alunos[], int n, float mediaAltura) {
    printf("Alunos com idade inferior a 18 anos e altura inferior à média:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].idade < 18 && alunos[i].altura < mediaAltura) {
            printf("%s\n", alunos[i].nome);
        }
    }
}

int main() {
    Aluno alunos[NUM_ALUNOS];

    lerDados(alunos, NUM_ALUNOS);

    float mediaAltura = calcularMediaAltura(alunos, NUM_ALUNOS);
    float mediaIdade = calcularMediaIdade(alunos, NUM_ALUNOS);

    alunosAlturaSuperiorMedia(alunos, NUM_ALUNOS, mediaAltura);

    int alunosMaisDe25 = contarAlunosMaisDe25Anos(alunos, NUM_ALUNOS);
    printf("Número de alunos com mais de 25 anos: %d\n", alunosMaisDe25);

    int alunosIdadeInferiorMedia = contarAlunosIdadeInferiorMedia(alunos, NUM_ALUNOS, mediaIdade);
    printf("Número de alunos com idade inferior à média: %d\n", alunosIdadeInferiorMedia);

    alunosMenoresDe18AlturaInferiorMedia(alunos, NUM_ALUNOS, mediaAltura);

    return 0;
}
