programa {
  funcao inicio() {
    inteiro qtdClientes

    escreva("Quantas clientes foram atendidos? ")
    leia(qtdClientes)

    real soma = 0

    para (inteiro contador = 1; contador <= qtdClientes; contador++){
      real clietes

      escreva("Digite o valor da compra do ", contador , "° Cliente: ")
      leia(clietes)

      soma = soma + clietes
    }

    escreva("O total arrecadado pela loja foi: R$ ", soma)

  }
}
