/*Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa
um algoritmo que leia este número e apresente o algarismo correspondente à casa das centenas.*/

#include <stdio.h>

int main (){

    int a, b, c, d;

   printf ("\nInsira o primeiro digito da placa de seu veiculo:");
   scanf ("%d", &a);

   printf ("\nInsira o segundo digito da placa de seu veiculo:");
   scanf ("%d", &b);

   printf ("\nInsira o terceiro digito da placa de seu veiculo:");
   scanf ("%d", &c);

   printf ("\nInsira o quarto digito da placa de seu veiculo:");
   scanf ("%d", &d);

   printf ("\nOs digitos são: %d%d%d%d.", a, b, c, d);

   printf ("\nO algarismo correspondente a casa das centenas é = %d", b);

    return 0;
}

//Esse programa abaixo pode funcionar melhor ~ 24/11

/*#include <stdio.h>

int dispositivo(int placa){
    int centenas = (placa / 100) % 10;
    return centenas;
}

int main(){
    int placa = 3298;
    int centenas = dispositivo(placa);
    printf("\n%d\n", centenas);
    return 0;
}*/ 
