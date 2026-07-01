#include <stdio.h>

int main() {
  char nome[20];
  int idade;
  float altura;
  char genero;
  int estudante;

  printf("Digite seu nome: ");
  scanf(" %s", &nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Digite seu genero (M/F): ");
  scanf(" %c", &genero);

  printf("E estudante? (1 = Sim, 0 = Nao):");
  scanf("%d", &estudante);


  printf("\nBem-Vindo(a), %s!\n", nome);
  printf("Seu perfil\n");
  printf("Seu nome: %s\n", nome);
  printf("Sua Idade: %d\n", idade);
  printf("Sua Altura: %.2f\n", altura);
  printf("Seu Genero: %c\n", genero);

  if (estudante == 1){
    printf("E estudante: Sim\n");
  } else{
    printf("E estudante: Nao\n");
  }

  return 0;
}