#include <stdio.h>
int main() {
  float temperatura;
  int sintomas;

  printf("Qual sua temperatura?: ");
  scanf("%f", &temperatura);

  printf("Você está com secreção, tosse e dor no corpo?: (1 = sim e 0 = não) ");
  scanf("%d", &sintomas);

  if (temperatura >= 37 && sintomas == 1){
    printf("Exames Especiais.");
  } else if (temperatura >= 37 && sintomas == 0){
    printf("Exames Basicos.");
  } else if (temperatura <= 37 && sintomas == 1){
    printf("Exames Basicos.");
  } else if (temperatura <= 37 && sintomas == 0){
    printf("Exames Liberado.");
  } else {
    printf("Erro");
  }
  return 0;
}