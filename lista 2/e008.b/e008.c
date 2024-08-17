#include <stdio.h>

int main (){

    int c;
	float s, ns;

    printf ("Insira o seu sálario:");
    scanf ("%f", &s);

    printf ("\nInsira o seu cargo (Ex: '101'):");
    scanf ("%d", &c);

    switch (c) {

    case 101: ns = s * 1.1;
    printf ("\nSeu novo salário é %.2f reais", ns);

    break;

    case 102: ns = s * 1.2;
    printf ("\nSeu novo salário é %.2f reais", ns);

    break;

    case 103: ns = s * 1.3;
    printf ("\nSeu novo salário é %.2f reais", ns);

    break;
    
    default: ns = s * 1.4;
    printf ("\nSeu novo salário é %.2f reais", ns);
    
    break;
    }


    return 0;
}