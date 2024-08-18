/*6) Faça um programa que converta um número da base 2 para a base 10. 
Obs.:
a) O número na base 2 é uma cadeia de caracteres.
b) O final de uma cadeia de caracteres é determinado pela presença do caracter \0.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Função para converter um número da base 2 para a base 10
int binario_para_decimal(const char *binario){
  int decimal = 0;
  int tamanho = strlen(binario);

  for (int i = 0; i < tamanho; i++){
    if (binario[i] == '1'){
      decimal += pow(2, tamanho - i - 1);
    }
  }

  return decimal;
}

int main (){
  char binario[100];

  //leitura do número binário
  printf("Digite um número binário: ");
  while(scanf("%s", binario) != 1){
    printf("Entrada inválida. Digite novamente: ");
    setbuf(stdin, NULL);
  }

  //conversão do número binário para decimal
  int decimal = binario_para_decimal(binario);

  //exibição do número decimal
  printf("O número binário %s em decimal é: %d\n", binario, decimal);
  
  return 0;
}