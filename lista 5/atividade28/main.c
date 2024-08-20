/* Implemente uma função que resolva um sistema de equações do primeiro grau.
AX + BY = C 
DX + EY = F*/

#include <stdio.h>

// Função para resolver o sistema de equações do primeiro grau usando a regra nde cramer
void resolverSistema(float A, float B, float C, float D, float E, float F, float *X, float *Y){
    float determinante = A * E - B * D;
    if(determinante == 0){
        printf("O sistema não possui solução única.\n");
        return;
    }
    *X = (C * E - B * F) / determinante;
    *Y = (A * F - C * D) / determinante;
}

int main(){
    float A, B, C, D, E, F, X, Y;
    printf("Digite os coeficientes da equação AX + BY = C:\n");
    printf("A: ");
    scanf("%f", &A);

    printf("B: ");
    scanf("%f", &B);

    printf("C: ");
    scanf("%f", &C);

    printf("Digite os coeficientes da equação DX + EY = F:\n");

    printf("D: ");
    scanf("%f", &D);

    printf("E: ");
    scanf("%f", &E);

    printf("F: ");
    scanf("%f", &F);

    resolverSistema(A, B, C, D, E, F, &X, &Y);

    printf("\nSolução:\n");
    printf("X = %.2f\n", X);
    printf("Y = %.2f\n", Y);
    return 0;
}