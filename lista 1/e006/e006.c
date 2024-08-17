/*Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro termo
(a1). Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.G., dado a
razão e o primeiro termo*/

#include <stdio.h>
#include <math.h>

int main (){

    int an, a1, q, n;

    printf ("\nInsira o primeiro termo:");
    scanf ("%d", &a1);

    printf ("\nInsira a razão:");
    scanf ("%d", &q);

    printf ("\nInsira a posição do termo");
    scanf ("%d", &n);

    an = a1 * pow (q, n - 1);
    printf ("\nan = %d", an);

    return 0;
}