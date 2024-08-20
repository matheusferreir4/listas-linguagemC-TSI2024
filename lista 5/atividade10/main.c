/*1) Escreva uma função para verificar se uma data, formada por 3 inteiros, é
válida. Mês Número de dias 1, 3, 5 ,7, 8, 10, 12 31 4, 6, 9, 11 30 2 29 se o ano
for bissexto e 28 em caso contrário Obs. O ano é bissexto se for múltiplo de 4 e
não divisível por 100. Anos divisíveis por 400 são bissextos;
*/

#include <stdio.h>

// Funçaõ para verificar se o ano é bissexto
int verificarBissexto(int ano) {
  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
    return 1; // É bissexto
  } else {
    return 0; // Não é bissexto
  }
}

// Função para verificar se a data é válida
int verificarData(int dia, int mes, int ano) {
  if (ano < 1 || mes < 1 || mes > 12 || dia < 1) {
    return 0; // Data inválida
  }
  int diasNoMes;

  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    diasNoMes = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    diasNoMes = 30;
    break;

  case 2:
    if (verificarBissexto(ano)) {
      diasNoMes = 29;
    } else {
      diasNoMes = 28;
    }
    break;
  default:
    return 0; // Mês inválido
  }
  if (dia > diasNoMes) {
    return 0; // Dia inválido
  }

  return 1; // Data válida
}

int main() {
  int dia, mes, ano;

  printf("Digite a data (dia mes ano): ");
  while (scanf("%d %d %d", &dia, &mes, &ano) != 3) {
    printf("Entrada inválida. Digite a data (dia mes ano): ");
    while (getchar() != '\n')
      ;
  }

  if (verificarData(dia, mes, ano)) {
    printf("\nA data %d/%d/%d é válida.\n", dia, mes, ano);
  } else {
    printf("\nA data %d/%d/%d é inválida.\n", dia, mes, ano);
  }

  return 0;
}