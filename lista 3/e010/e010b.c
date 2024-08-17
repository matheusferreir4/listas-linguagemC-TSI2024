#include <stdio.h>
#define CONA 0.02
#define CONB 0.03

int main (){

    int a;
    double ci = 1.5, zi = 1.1;

    printf ("\nPara que Zé seja mais alto que Chico, serão necessários:");

    a = 0; //Se alterar para 1, aparece o 41
    while (zi <= ci) {

        /*PQ CARALHOS se o printf estiver dentro do loop ele conta 40????*/

        printf ("\n%d anos.", a);

        ci += CONA ;
        zi += CONB;

        a++;
    }

    return 0;
}
