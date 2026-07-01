#include <stdio.h>
int main() {
  int qtdPessoas;
  char nome[50];
  int idade;
  
  printf("Quantas pessoas serão analisadas?: ");
  scanf("%d", &qtdPessoas);

  for (int i = 1; i <= qtdPessoas; i++){
    printf("Digite o nome da %d° pessoa: ", i);
    scanf("%s", &nome);
    printf("Digite sua idade %s: ", nome);
    scanf("%d", &idade);
    
    if (idade < 18){
      printf("%s não pode tirar a CNH.\n\n");
    } else {
      printf("%s pode tirar a CNH.\n\n");
    }
  }
  return 0;
}