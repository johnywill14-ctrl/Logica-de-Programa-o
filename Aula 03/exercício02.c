#include <stdio.h>
int main() {
  int idade;
  printf("Qual a sua Idade?: ");
  scanf("%d", &idade);

  if (idade >= 65){
    printf("Você é um idoso.");
  } else if (idade >= 18){
    printf("Você é um adulto.");
  } else if (idade >= 13){
    printf("Você é uma adolescente.");
  } else {
    printf("Você é uma criança.");
  }
  return 0;
}