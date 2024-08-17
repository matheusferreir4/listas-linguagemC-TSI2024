/*Escrever um algoritmo que leia a hora de início e hora de término de um jogo, ambas
subdivididas em dois valores distintos : horas e minutos. Calcular e escrever a duração do jogo,
também em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24
horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.*/

#include <stdio.h>

int main (){

    int a, b, c, d, e, f;

    printf ("\nInsira que horas o jogo começou (0-24):");
    scanf ("%d", &a);

    printf ("\nInsira em que minutos o jogo começou (0-60):");
    scanf ("%d", &b);

    printf ("\nInsira que horas o jogo terminou (0-24):");
    scanf ("%d", &c);

    printf ("\nInsira em que minutos o jogo terminou (0-60):");
    scanf ("%d", &d);

    e = c - a;
    f = d - b;

    printf ("\nO jogo durou %d:%d horas", e, f);
    
    return 0;
}