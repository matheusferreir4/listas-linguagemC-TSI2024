/*Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3 
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários 
para que Zé seja maior que Chico.*/

#include <stdio.h>
#define CONA 0.02
#define CONB 0.03

int main (){

    int a;
    double ci = 1.5, zi = 1.1;

    printf ("\nPara que Zé seja mais alto que Chico, serão necessários:");

    a = 0;
    while (zi <= ci) {

        ci += CONA ;
        zi += CONB;

        a++;
    }

    printf ("\n%d anos.", a);

    return 0;
}

/*Anos = (Ci−Zi) / (CONB−CONA)*/