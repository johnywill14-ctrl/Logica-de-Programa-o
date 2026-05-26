programa {
  funcao inicio() {
    real valorDoProduto
    real desconto
    real parcelado
    real comissaoaVista
    real comissaoaPrazo

    escreva("Digite o valor do Produto: ")
    leia(valorDoProduto)

    escreva("Valor com 10% de desconto: R$", 1500.00 - 100 * 1.5 ,"\n")
    escreva("Valor parcelado em até (3x sem juros): R$", 1500.00 / 3,"\n")
    escreva("Comissão do vendedor (à vista): R$", 1350.00 * 5 / 100, "\n")
    escreva("Comissão do vendedor (parcelado): R$", 1500.00 * 5 /100)
  }
}
