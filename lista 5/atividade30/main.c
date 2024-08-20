/*Escreva uma função que calcule a área e o perímetro de um retângulo*/

#include <stdio.h>

// Função para calcular a área e o perímetro de um retângulo
void calcularAreaPerimetro(float base, float altura, float *area, float *perimetro) {
  *area = base * altura;
  *perimetro = 2 * (base + altura);
}

int main(){
  float base, altura, area, perimetro;
  printf("Digite a base do retângulo: ");
  scanf("%f", &base);
  printf("Digite a altura do retângulo: ");
  scanf("%f", &altura);

  calcularAreaPerimetro(base, altura, &area, &perimetro);
  printf("\nÁrea: %.2f\n", area);
  printf("Perímetro: %.2f\n", perimetro);

  return 0;
}