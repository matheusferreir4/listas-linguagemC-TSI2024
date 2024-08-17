/*Escreva um algoritmo que a partir da idade e peso do paciente calcule a dosagem de
determinado medicamento e imprima a receita informando quantas gotas do medicamento o
paciente deve tomar por dose. Considere que o medicamento em questão possui 500 mg por ml, e
que cada ml corresponde a 20 gotas.

• Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60
quilos devem tomar 1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg.

• Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo
conforme a tabela a seguir:

Peso Dosagem
5 kg a 9 kg 125 mg
9.1 kg a 16 kg 250 mg
16.1 kg a 24 kg 375 mg
24.1 kg a 30 kg 500 mg
Acima de 30 kg 750 m*/

#include <stdio.h>
#define NUM1 500 
#define NUM2 20


int main (){

    int a, b, c;

    printf ("\nInsira sua idade:");
    scanf ("%d", &a);

    printf ("\nInsira sua peso:");
    scanf ("%d", &b);

    if (a >= 12 && b >= 60){
        c = (1000 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    } else if (a >= 12 && b <= 60){
        c = (875 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    } if (a < 12){

    if (b >= 5 && b <= 9){
        c = (125 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    } else if (b >= 9.1 && b <= 16){
        c = (250 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    } else if (b >= 16.1 && b <= 24){
        c = (375 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    } else if (b >= 24.1 && b <= 30){
        c = (500 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    } else if (b > 30){
        c = (750 * NUM2) / NUM1;
        printf ("\nVocê deve tomar %d gotas", c);

    }

    }

    return 0;
}