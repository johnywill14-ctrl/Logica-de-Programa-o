#include <stdio.h>

int main() {
  char nome[20];
  float nota1, nota2, media;

  printf("Digite seu nome: ");
  scanf("%s", &nome);
  printf("Digite sua primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite sua segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) /2;

  printf("O aluno(a) %s obteve a media de: %.2f\n", nome, media);
  return 0;
}