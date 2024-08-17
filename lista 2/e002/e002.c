/* Faça um algoritmo que tenha como entrada 3 valores a,b,c e os imprima em ordem crescente*/

#include <stdio.h>

int main (){

    int a, b, c;

    printf ("\nInsira o primeiro valor:");
    scanf ("%d", &a);

    printf ("\nInsira o segundo valor:");
    scanf ("%d", &b);

    printf ("\nInsira o terceiro valor:");
    scanf ("%d", &c);

    if (a <= b && b <= c){
        printf ("\n%d, %d, %d.", a, b, c);

    } else if (c <= a && a <= b){
        printf ("\n%d, %d, %d.", c, a, b);

    } else if (b <= c && c <= a){
        printf ("\n%d, %d, %d.", b, c, a);

    } else if (c <= b && b <= a){
        printf ("\n%d, %d, %d.", c, b, a);

    } else if (a <= c && c <= b){
        printf ("\n%d, %d, %d.", a, c, b);

    } else if (b <= a && a <= c){
        printf ("\n%d, %d, %d", b, a, c);

    }

    return 0;
}