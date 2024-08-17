/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$2000,00*/

#include <stdio.h>
#define CON 0

int main (){

    int a, c, qs = 0, qc = 0, s = 0, sc = 0, x = 0;
    double b, medias = 0, mediac = 0, maior, y;

    a = 1;

    do{

        printf ("\nInsira o %do salário ou um valor negativo p/sair:", a);
        scanf ("%lf", &b);

        //Média salarial
        if (b >= CON){
        qs++;
        s += b;

        medias = s / (double)qs;
        }

        //Maior salário
        if (b > maior)
            maior = b;

        //Porcentual de pessoals que recebem até 2000

        a++;
            
    } while (b > CON);

    y = (x / (double)qs) * 100;

    printf ("\nA média salarial dessa população é: %.2f reais.", medias);
    printf ("\nO maior salário inserido é %.2f reais.", maior);
    printf("\nPercentual de pessoas que recebem até 2000: %.1lf%%\n", y);

    a = 1;

    do{
        printf ("\nInsira a qntd. de filhos:");
        scanf ("%d", &c);

        //Calculando a média
        if (c >= CON){
        qc++;
        sc += c;

        mediac = sc / (double)qc;
        }

        a++;

    } while (a <= qs);

    printf ("\nA média de filhos é %.1lf por casa.", mediac);
    return 0;
}