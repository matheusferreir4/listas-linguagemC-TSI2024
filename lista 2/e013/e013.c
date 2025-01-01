/* Faça um malgoritmo que calcule o peso idela de uma pessoa usando as seguintes fórmulas:
 homens: (72.7*altura) -58
 mulheres: (62.1*altura) – 44.7*/
#include <stdio.h>

int main (){

    int a;

    float  b, c;

    printf ("\nInsira 1 se você for um Homem e 2 se você for uma Mulher:");
    scanf ("%d", &a);

    printf ("\nInsira sua altura:");
    scanf ("%f", &b);

    switch (a){

    case 1: c = (72.7 * b) - 58 ;
    printf ("\nSua peso ideal é %.1f kg.", c);
    break;
    
    default: c = (62.1 * b) -44.7;
    printf ("\nSua peso ideal é %.1f kg.", c);
    break;

    }

    return 0;
}

/* 01/01/2025

    #include <stdio.h>

int main(){
    int sexo;
    float altura;
    while(1){
        printf("\nSexo (1- FEM) ou (2- MAS):");
        scanf("%d", &sexo);
        
        if(sexo != 1 && sexo != 2){
            break;
        }
        
        switch(sexo){
            case 1:
                printf("\nInsira sua altura:");
                scanf("%f", &altura);
                
                printf("\nSeu peso ideal é: %.2f\n", (altura != 0) ? ((62.1 * altura) - 44.7) : 0);
            break;
            
            case 2:
                printf("\nInsira sua altura:");
                scanf("%f", &altura);
                
                printf("\nSeu peso ideal é: %.2f\n", (altura != 0) ? ((72.7 * altura) - 58.0) : 0);
            break;
        }
    }
    
    return 0;
} */
