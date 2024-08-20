/*Escreva uma função para calcular o número de dias existentes entre duas datas. As data são formadas
por 3 valores inteiros(dia, mês e ano)*/

#include <stdio.h>
#include <time.h>

// Função para converter uma data em struct tm
void converterParaTm(int dia, int mes, int ano, struct tm *dataTm){
  dataTm->tm_year = ano - 1900; // Anos em struct tm começam em 1900
  dataTm->tm_mon = mes - 1; // Os meses são indexados de 0 a 11
  dataTm->tm_mday = dia;
  dataTm->tm_hour = 0;
  dataTm->tm_min = 0;
  dataTm->tm_sec = 0;
  dataTm->tm_isdst = -1;
}

int diasEntreDatas(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
  struct tm data1 = {0}, data2 = {0};
  time_t tempo1, tempo2;

  // Converter as datas para struct tm
  converterParaTm(dia1, mes1, ano1, &data1);
  converterParaTm(dia2, mes2, ano2, &data2);

  // Converter struct tm para time_h
  tempo1 = mktime(&data1);
  tempo2 = mktime(&data2);

  // Calcular a diferença em segundos e converte para dias
  double diferencaSegundos = difftime(tempo2, tempo1);
  return (int)diferencaSegundos;
}

int main(){
  int dia1, mes1, ano1, dia2, mes2, ano2;
  printf("Digite a primeira data (dia mes ano): ");
  while(scanf("%d %d %d", &dia1, &mes1, &ano1) != 3){
    printf("Entrada inválida. Digite a primeira data (dia mes ano): ");
    while(getchar() != '\n');
  }
  printf("Digite a segunda data (dia mes ano): ");
  while(scanf("%d %d %d", &dia2, &mes2, &ano2) != 3){
    printf("Entrada inválida. Digite a segunda data (dia mes ano): ");
    while(getchar() != '\n');
  }
  int dias = diasEntreDatas(dia1, mes1, ano1, dia2, mes2, ano2);
  printf("\nA diferença entre as datas é de %d dias.\n", dias);

  return 0;
}