/*Faça um algoritmo para determinar a situação (APROVADO/EXAME/REPROVADO) de um
aluno, dado a sua freqüência (FREQ) (porcentagem de 0 a 100%) e sua nota (NOTA) (nota de 0.0 a
10.0), sendo que:
Condição Situação
Freqüência até 75% Reprovado
Freqüência entre 75% e 100% e Nota até 3.0 Reprovado
Freqüência entre 75% e 100% e Nota de 3.0 até 7.0 Exame
Freqüência entre 75% e 100% e Nota entre 7.0 e 10.0 Aprovado*/

#include <stdio.h>

int main (){

    float freq, nota;

    printf ("\nInsira sua frequencia (0 a 100):");
    scanf ("%f", &freq);

    printf ("\nInsira sua nota (0 a 10):");
    scanf ("%f", &nota);

    if (freq < 75){
        printf ("\nVocê foi reprovado.");

    } else if (freq >= 75 && freq <= 100 && nota <= 3.0){
        printf ("\nVocê foi reprovado.");

    } else if (freq >= 75 && freq <= 100 && nota >= 3.0 && nota <= 7.0){
        printf ("\nVocê está de recuperação.");

    } else if (freq >= 75 && freq <= 100 && nota >= 7.0 && nota <= 10.0){
        printf ("\nVocê foi aprovado.");

    }
    return 0;
}