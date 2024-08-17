#include <stdio.h>
#define CON 2

int main () {
    int a, b;
    double c, maiorh = -1, menorh = 999999, mediah = 0, eh = 0;
    double maiorf = -1, menorf = 999999, mediaf = 0, ef = 0;
    int cont_masc = 0, cont_fem = 0;

    printf ("\nInsira 1 p/masculino e 2 p/feminino:");
    scanf ("%d", &a);

    switch (a) {
        case 1:
            b = 1;
            while (b <= CON) {
                printf ("\nInsira a %da altura:", b);
                scanf ("%lf", &c);

                if (c > maiorh) {
                    maiorh = c;
                }
                if (c < menorh) {
                    menorh = c;
                }
                eh += c;
                cont_masc++;
                b++;        
            }

            mediah = eh / CON;

            printf ("\nA maior altura entre os homens é %.1lf e a menor é %.1lf", maiorh, menorh);
            printf ("\nA média de altura entre os homens é %.1lf", mediah);
            break;
    
        case 2:
            b = 1;
            while (b <= CON) {
                printf ("\nInsira a %da altura:", b);
                scanf ("%lf", &c);

                if (c > maiorf) {
                    maiorf = c;
                }
                if (c < menorf) {
                    menorf = c;
                }
                ef += c;
                cont_fem++;
                b++;        
            }

            mediaf = ef / CON;

            printf ("\nA maior altura entre as mulheres é %.1lf e a menor é %.1lf", maiorf, menorf);
            printf ("\nA média de altura entre as mulheres é %.1lf", mediaf);
            break;

        default:
            printf ("\nCódigo inserido inválido."); 
            break;
    }

    // Calculando a maior e a menor altura da turma
    double maior_turma = (maiorh > maiorf) ? maiorh : maiorf;
    double menor_turma = (menorh < menorf) ? menorh : menorf;

    // Calculando a média de altura da turma
    double media_turma = (eh + ef) / CON;

    printf ("\nA maior altura da turma é %.1lf e a menor é %.1lf", maior_turma, menor_turma);
    printf ("\nA média de altura da turma é %.1lf", media_turma);

    return 0;
}
