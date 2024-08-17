/*Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e
positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: 
a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.*/

#include <stdio.h>

int main (){

    int i, a, b, c;

    printf ("\nInsira um valor (de 1-3) para 'i':");
    scanf ("%d", &i);

    printf ("\nInsira um valor 'a'':");
    scanf ("%d", &a);

    printf ("\nInsira um valor 'b'':");
    scanf ("%d", &b);

    printf ("\nInsira um valor 'c'':");
    scanf ("%d", &c);

    switch (i) {
    case 1:

    if (a <= b && b <= c){
        printf ("\n%d, %d, %d", a, b, c);

    } else if (c <= a && a <= b){
        printf ("\n%d, %d, %d", c, a, b);

    } else if (b <= c && c <= a){
        printf ("\n%d, %d, %d", b, c, a);

    } else if (c <= b && b <= a){
        printf ("\n%d, %d, %d", c, b, a);

    } else if (a <= c && c <= b){
        printf ("\n%d, %d, %d", a, c, b);

    } else if (b <= a && a <= c){
        printf ("\n%d, %d, %d", b, a, c);

    }

    break;

    case 2:

    if (a >= b && b >= c){
        printf ("\n%d, %d, %d", a, b, c);

    } else if (c >= a && a >= b){
        printf ("\n%d, %d, %d", c, a, b);

    } else if (b >= c && c >= a){
        printf ("\n%d, %d, %d", b, c, a);

    } else if (c >= b && b >= a){
        printf ("\n%d, %d, %d", c, b, a);

    } else if (a >= c && c >= b){
        printf ("\n%d, %d, %d", a, c, b);

    } else if (b >= a && a >= c){
        printf ("\n%d, %d, %d", b, a, c);

    }

    break;

    case 3:

    if (a > b && a > c){
        printf ("\n%d, %d, %d", b, a, c);

    } else if (c > a && c > b){
        printf ("\n%d, %d, %d", a, c, b);

    } else if (b > c && b > a){
        printf ("\n%d, %d, %d", c, b, a);

    } else if (c > b && c > a){
        printf ("\n%d, %d, %d", b, c, a);

    } else if (a > c && a > b){
        printf ("\n%d, %d, %d", c, a, b);

    } else if (b > a && b > c){
        printf ("\n%d, %d, %d", a, b, c);

    }

    break;
    
    
    
    default:
    printf ("\nCódigo inserido inválido.");

    break;
    }

    return 0;
}