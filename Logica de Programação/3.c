#include <stdio.h>

int main () {
   int idade;
   float altura;
   char genero;
   char nome[20];

   // Entrada de Dados
   printf("Digite sua Idade: ");
   scanf("%d", &idade);

   printf("Digite sua Altura: ");
   scanf("%f", &altura);

   printf("Digite seu Gênero: ");
   scanf(" %c", &genero);

   printf("Digite seu Nome: ");
   scanf("%s", nome);

   //Saída de Dados
   printf("Idade: %d\n", idade);
   printf("Altura: %.2f\n", altura);
   printf("Genero: %c\n", genero);
   printf("nome: %s\n", nome);


    return 0;
}