/*Maria quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para
fazer uma viagem até a casa de sua irmã. Faça algoritmo que leia:
 A distância da casa de Maria até sua irmã;
 O consumo do carro de Maria (KM rodados / litro);
 O preço da gasolina (litro).
E mostre as informações que Maria necessita.*/

#include <stdio.h>
#include <stdlib.h>


int main (){

    int d, c, p, l, g;

    printf ("\nInsira a distância de Maria até a casa de sua irmã em km:");
    scanf ("%d", &d);

    printf ("\nInsira o consumo do carro de Maria em litros por km:");
    scanf ("%d", &c);

    printf ("\nInsira o preço da gasolina:");
    scanf ("%d", &p);

    //Consumo = KM rodados
    l = d / c;
    printf ("\nMaria precisára de %d L para efetuar sua viagem.\n", l);

    g = l * p;
    printf ("\nO gasto de Maria será de %d R$", g);

    
    return 0;
}