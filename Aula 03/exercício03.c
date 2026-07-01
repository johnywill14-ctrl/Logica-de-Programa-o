#include <stdio.h>
int main() {
  int n1, n2, operacao = 5;
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("--- Operações ---\n");
  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");

  printf("Escolha uma operação: ");
  scanf("%d", &operacao);

  switch (operacao)
  {
  case 1:
    printf("Resultado da soma: %d\n", n1 + n2);
    break;
  case 2:
    printf("Resultado da subtração: %d\n", n1 - n2);
    break;
  case 3:
    printf("Resultado da multiplicação: %d\n", n1 * n2);
    break;
  case 4:
    printf("Resultado da divisão: %d\n", n1 / n2);
    break;
  default:
    printf("Operação invalida");
    break;
  }


  return 0;
}