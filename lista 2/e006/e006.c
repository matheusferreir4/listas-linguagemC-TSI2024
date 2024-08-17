#include <stdio.h>
#include <math.h>
#define NUM 2

int main (){

    float a, b, c, d, e1, e2;

    printf ("Insira 'a':");
    scanf ("%f", &a);

    printf ("\nInsira 'b':");
    scanf ("%f", &b);

    printf ("\nInsira 'c':");
    scanf ("%f", &c);

    if (a == 0){
        printf ("\nUma equação do segundo grau não aceita o valor 0 para 'a'.");

    } else if (a != 0){
        d = pow (b, 2) - 4 * a * c;
        printf ("\n O valor de delta é %.1f", d);

    } if (d > 0){
        e1 = (-b + sqrt(d))/(NUM * 2);
        e2 = (-b - sqrt(d))/(NUM * 2);

        printf ("\n%.1f e %.1f", e1, e2);

    } else if (d == 0){
        
        e1 = (-b + sqrt(d))/(NUM * 2);

        printf ("\n%.1f=%.1f", e1, e1);

    } else if ( d < 0){
        printf ("\nRaiz complexa.");
    }

    return 0;
}