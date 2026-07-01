#include <stdio.h>
int main() {
  float valorDoProduto, desconto, parcelado, comissaoaVista, comissaoaPrazo;

  printf("Digite o valor do produto: ");
  scanf("%f", &valorDoProduto);

  desconto = valorDoProduto - 100*1.5;
  parcelado = valorDoProduto / 3;
  comissaoaVista = desconto * 5 / 100;
  comissaoaPrazo = valorDoProduto * 5 / 100;

  printf("Valor do protudo com 10%% de desconto: R$ %.2f\n", desconto);
  printf("Valor parcelado em ate (3x sem juros): R$ %.2f\n", parcelado);
  printf("Comissao do vendedor (a vista): R$ %.2f\n", comissaoaVista);
  printf("Comissao do vendedor (parcelado): R$ %.2f\n", comissaoaPrazo);
  return 0;
}