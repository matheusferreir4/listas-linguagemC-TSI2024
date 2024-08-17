/*Em uma eleição presidencial existem quatro candidatos, sendo:1-Maria Luíza, 2-Pedro Henrique, 3-Lara Cota e 4-Letícia Cota. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação: 

- 1,2,3,4 = voto para os respectivos candidatos; 
- 5 = voto nulo; 
- 6 = voto em branco;

Elabore um programa que leia o código do candidato em um voto e calcule/escreva.:
- total de votos para cada candidato; 
- total de votos nulos; 
- total de votos em branco;
-nome do candidato vencedor. Suponha que não ocorrerá empate.
Como finalizador do conjunto de votos, tem-se o valor 0.*/

#include <stdio.h>
#define CON 0

int main (){

    int total_votos[4] = {0}; // Array para armazenar o total de votos para cada candidato
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulo1 = 0, nulo2 = 0, nulo3 = 0, nulo4 = 0;
    int branco1 = 0, branco2 = 0, branco3 = 0, branco4 = 0;

    do {
        printf ("\nInsira 1 p/Votar em Maria, 5 p/nulo, 6 p/branco ou 0 p/sair:");
        scanf ("%d", &candidato1);

        if (candidato1 == CON)
            break;

        if (candidato1 == 5)
            nulo1++;
        else if (candidato1 == 6)
            branco1++;
        else if (candidato1 >= 1 && candidato1 <= 4)
            total_votos[candidato1 - 1]++; // Incrementa o total de votos para o candidato 1

        printf ("\nInsira 2 p/Votar em Pedro, 5 p/nulo, 6 p/branco:");
        scanf ("%d", &candidato2);

        if (candidato2 == 5)
            nulo2++;
        else if (candidato2 == 6)
            branco2++;
        else if (candidato2 >= 1 && candidato2 <= 4)
            total_votos[candidato2 - 1]++; // Incrementa o total de votos para o candidato 2

        printf ("\nInsira 3 p/Votar em Lara, 5 p/nulo, 6 p/branco:");
        scanf ("%d", &candidato3);

        if (candidato3 == 5)
            nulo3++;
        else if (candidato3 == 6)
            branco3++;
        else if (candidato3 >= 1 && candidato3 <= 4)
            total_votos[candidato3 - 1]++; // Incrementa o total de votos para o candidato 3

        printf ("\nInsira 4 p/Votar em Letícia, 5 p/nulo, 6 p/branco:");
        scanf ("%d", &candidato4);

        if (candidato4 == 5)
            nulo4++;
        else if (candidato4 == 6)
            branco4++;
        else if (candidato4 >= 1 && candidato4 <= 4)
            total_votos[candidato4 - 1]++; // Incrementa o total de votos para o candidato 4

    } while (1);

    // Determinar o candidato vencedor
    int vencedor = 0;
    for (int i = 1; i < 4; i++) {
        if (total_votos[i] > total_votos[vencedor])
            vencedor = i;
    }

    printf ("\nOs candidatos de 1 a 4, respectivamente, receberam %d, %d, %d e %d votos nulos", nulo1, nulo2, nulo3, nulo4);
    printf ("\nOs candidatos de 1 a 4, respectivamente, receberam %d, %d, %d e %d votos brancos", branco1, branco2, branco3, branco4);
    printf ("\nO candidato vencedor é o candidato %d com %d votos.", vencedor + 1, total_votos[vencedor]);

    return 0;
}
