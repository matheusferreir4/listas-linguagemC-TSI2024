/*) Faça um programa que leia um conjunto de 50 informações contendo, cada uma delas, a altura e
o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o seguinte:
a) a maior e a menor altura da turma;
b) a média da altura das mulheres;
c) a média da altura da turma;
d) A maior e a menor altura dos homens.*/

#include <stdio.h>
#define CON 2 //Trocar para 50

int main (){

    int a, b, d = 0;
    double c, maiorh = -1, menorh = 999999, mediah = 0, eh = 0;
    double maiorf = -1, menorf = 999999, mediaf = 0, ef = 0;

    printf ("\nInsira 1 p/masculino e 2 p/feminino:");
    scanf ("%d", &a);

    switch (a){

    case 1:

    b = 1;

    while (b <= CON){
    
        printf ("\nInsira a %da altura:", b);
        scanf ("%lf", &c);

            if (c > maiorh){
                maiorh = c;
            }

            if (c < menorh){
                menorh = c;
            }

                d++;
                eh += c;

                mediah = eh / d;

        b++;        

    }

    printf ("\nA maior altura entre os homens é %.1lf e a menor é %.1lf", maiorh, menorh);
    printf ("\nA média de altura entre os homens é %.1lf", mediah);

    break;
    
    case 2:

    b = 1;

    while (b <= CON){
    
        printf ("\nInsira a %da altura:", b);
        scanf ("%lf", &c);

        if (c > maiorf){
            maiorf = c;
        }

        if (c < menorf){
            menorf = c;
        }
        

        d++;
        ef += c;

        mediaf = ef / d;

        b++;        

    }

    printf ("\nA média de altura entre as mulheres é %.1lf", mediaf);
    printf ("\nA maior altura entre as mulheres é %.1lf e a menor é %.1lf", maiorf, menorf);

    break;

    default:
    printf ("\nCódigo inserido inválido."); 

    break;
    }

    return 0;
}