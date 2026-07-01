#include <stdio.h>
int main() {
  int qtdClientes;
  float cliente;
  float soma = 0;

  printf("Quantos clientes foram atendidos?: ");
  scanf("%d", &qtdClientes);

  for (int i = 1; i <= qtdClientes; i++){
    printf("Digite o valor de compra do %d° cliente: ", i);
    scanf("%f", &cliente);

   soma += cliente;
  }

  printf("O total arrecadado pela loja foi: R$ %.2f\n", soma);

  return 0;
}