/* Escreva um algoritmo que informe a quantidade total de calorias de uma refeição a partir do
usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir).

Prato      Calorias Sobremesa Calorias Bebida Calorias
Vegetariano 180 cal Abacaxi     75 cal   Chá 20 cal
Peixe       230 cal Sorvete d. 110 cal  Suco de laranja 70 cal
Frango      250 cal Mousse d.   170 cal Suco de melão 100 cal
Carne       350 cal Mousse choc. 200 cal Refrigerante diet 65 ca*/

#include <stdio.h>

int main (){

    //Pratos
    int a = 180, b = 230, c = 250, d = 350;

    //Sobremesas
    int e = 75, f = 110, g = 170, h = 200;

    //Bebidas
    int i = 20, j = 70, k = 100, l = 65;

    //Operadores
    int m, n, o, p;

    printf ("\nInsira 1 p/(prato vegetariano), 2 p/(peixe), 3 p/(frango) e 4 p/(carne):");
    scanf ("%d", &m);

    switch (m){

    case 1: 
    printf ("\nSeu prato tem %d calorias", a);
    m = a;

    break;

    case 2: 
    printf ("\nSeu prato tem %d calorias", b);
    m = b;
    
    break;

    case 3: 
    printf ("\nSeu prato tem %d calorias", c);
    m = c;

    break;

    case 4: 
    printf ("\nSeu prato tem %d calorias", d);
    m = d;
    
    break;
    
    default:
    printf ("\nOpção inválida.");

    break;
    }

    printf ("\nInsira 1 p/(Abacaxi), 2 p/(Sorvete diet), 3 p/(Mousse diet) e 4 p/(Mousse de chocolate):");
    scanf ("%d", &n);


    switch (n){

    case 1: 
    printf ("\nSua sobremesa tem %d calorias", e);
    n = e;

    break;

    case 2: 
    printf ("\nSua sobremesa tem %d calorias", f);
    n = f;
    
    break;

    case 3: 
    printf ("\nSua sobremesa tem %d calorias", g);
    n = g;

    break;

    case 4: 
    printf ("\nSua sobremesa tem %d calorias", h);
    n = h;
    
    break;
    
    default:
    printf ("\nOpção inválida.");

    break;
    }

    printf ("\nInsira 1 p/(Chá), 2 p/(Suco de laranja), 3 p/(Suco de melão) e 4 p/(Refri diet):");
    scanf ("%d", &o);


    switch (o){

    case 1: 
    printf ("\nSua sobremesa tem %d calorias", i);
    o = i;

    break;

    case 2: 
    printf ("\nSua sobremesa tem %d calorias", j);
    o = j;
    
    break;

    case 3: 
    printf ("\nSua sobremesa tem %d calorias", k);
    o = k;

    break;

    case 4: 
    printf ("\nSua sobremesa tem %d calorias", l);
    o = l;
    
    break;
    
    default:
    printf ("\nOpção inválida.");

    break;
    }

    p = m + n + o;
    printf ("\n\nSeu almoço tem %d calorias", p);

   return 0;
}