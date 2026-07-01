#include <stdio.h>
int main() {
  float peso, altura, imc;

  printf("Digite seu peso (KG): ");
  scanf("%f", &peso);
  printf("Digite sua altura (M): ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);
  printf("Seu IMC é: %.2f", imc);

  if (imc < 18.5){
    printf("\nVocê está abaixo do peso.");
  } else if (imc >= 18.5 && imc <= 24.9){
    printf("\nVocê tem o peso normal.");
  } else if (imc >= 30 && imc <= 34.9){
    printf("\nVocê tem obsidade grau 1.");
  } else if (imc >= 35 && imc <= 39.9){
    printf("\nVocê tem obsidade grau 2.");
  } else {
    printf("\nVocê tem obesidade 3.");
  }

  return 0;
}