/*O departamento que controla o índice de poluição do meio ambiente mantém 3 grupos de
indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de
0,05 até 0,25. Se o índice sobe para 0,3 as indústrias do 1º grupo são intimadas a suspenderem suas
atividades, se o índice cresce para 0,4 as do 1º e 2º grupo são intimadas a suspenderem suas
atividades e se o índice atingir 0,5 todos os 3 grupos devem ser notificados a paralisarem suas
atividades. Escrever um algoritmo que lê o índice de poluição medido e emite a notificação
adequada aos diferentes grupos de empresas.*/

#include <stdio.h>

int main (){

    float a;

    printf ("\nInsira o indice de poluição:");
    scanf ("%f", &a);

    if (a >= 0.3 && a < 0.4){
        printf ("\nOrdene que as empresas do primeiro grupo sejam suspensas.");

    } else  if (a >= 0.4 && a < 0.5){
        printf ("\nOrdene que as empresas do primeiro e segundo grupo sejam suspensas.");

    } else  if (a >= 0.5){
        printf ("\nOrdene que todos os grupos sejam suspensos.");

    } else {
        printf ("\nEsse grau de poluição não oferece risco.");

    }


    return 0;
}