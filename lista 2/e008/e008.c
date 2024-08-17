/*Faça um algoritmo que leia o salário e o cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber
40% de aumento. Mostre o salário antigo, o novo salário e a diferença.
Código Cargo Percentual 
101 Gerente 10% 
102 Engenheiro 20% 
103 Técnico 30%*/

#include <stdio.h>

int main (){

    float s, c, ns;

    printf ("Insira o seu sálario:");
    scanf ("%f", &s);

    printf ("\nInsira o seu cargo (Ex: '101'):");
    scanf ("%f", &c);

    if (c == 101){
        ns = (0.1 * s) + s;
        printf ("\nSeu novo salário é %.2f raeis", ns);

    } else if (c == 102){
        ns = (0.2 * s) + s;
        printf ("\nSeu novo salário é %.2f raeis", ns);
        
    } else if (c == 103){
        ns = (0.3 * s) + s;
        printf ("\nSeu novo salário é %.2f raeis", ns);
        
    } else {
        ns = (0.4 * s) + s;
        printf ("\nSeu novo salário é %.2f reais", ns);

    }


    return 0;
}