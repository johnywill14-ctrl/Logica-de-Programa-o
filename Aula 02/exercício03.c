#include <stdio.h>

int main() {
  char nome[20];
  float peso, altura, imc;

  printf("Nome: ");
  scanf("%s", &nome);

  printf("Peso (kg): ");
  scanf("%f", &peso);

  printf("Altura (m): ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("%s, seu IMC é: %f\n", nome, imc);

  return 0;
}