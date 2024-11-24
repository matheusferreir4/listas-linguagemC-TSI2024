/*Faça um algoritmo para calcular a soma dos n primeiros termos de uma P.G.*/

#include <stdio.h>
#include <math.h>

int main (){

    int p, a1, q, n;

    printf ("\nInsira 'a1':");
    scanf ("%d", &a1);

    printf ("\nInsira 'q':");
    scanf ("%d", &q);

    printf ("\nInsira 'n':");
    scanf ("%d", &n);

    p = pow (a1, n) * pow (q, ((n * (n - 1)) / 2));
    printf ("\nA soma dos n primeiros termos é %d.", p);

    return 0;
}

/*#include <stdio.h>
#include <math.h>

int dispositivo(int a1, int n, int q){
    int soma = a1 * (1 - pow(q, n)) / (1 - q);
    return soma;
}

int main(){
    int a1 = 5, n = 3, q = 2;
    int p = dispositivo(a1, n, q);
    printf("\n%d", p);
    
    return 0;
}*/
