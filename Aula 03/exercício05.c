#include <stdio.h>
int main() {
  char nome[50];
  int idade;

  printf("Olá, qual o seu nome?: ");
  scanf("%s", &nome);
  
  printf("%s, qual sua idade?: ", nome);
  scanf("%d", &idade);

  if (idade < 16){
    printf("%s, sua classificação eleitoral é: Não eleitor.", nome);
  } else if (idade >= 16 && idade < 18){
    printf("eleitor%s, sua classificação eleitoral é: Eleitor facultativo.", nome);
  } else if (idade >= 18 && idade <= 65){
    printf("%s, sua classificação eleitoral é: Eleitor obrigatorio.", nome);
  } else {
    printf("%s, sua classificação eleitoral é: Eleitor facultativo", nome);
  }
  return 0;
}