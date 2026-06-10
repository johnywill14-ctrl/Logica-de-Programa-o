programa {
  funcao inicio() {
    cadeia nome
    inteiro idade

    escreva("Digite seu nome: ")
    leia(nome)
    escreva("Digite sua idade: ")
    leia(idade)

    exibirMensagemPersonalizada (nome, idade)
    escreva()

  }
  funcao exibirMensagemPersonalizada (cadeia nome, inteiro idade) {
    escreva("Óla,", nome, ", você tem ", idade, " anos. Seja bem-vindo(a)!")
  }
}
