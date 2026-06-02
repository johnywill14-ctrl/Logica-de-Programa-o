programa {
  funcao inicio() {
    inteiro qtdPessoas

    escreva("Quantas pessoas deseja analisar? ")
    leia(qtdPessoas)

    inteiro soma = 0


    para (inteiro contador = 1; contador <= qtdPessoas; contador++){
      cadeia nome
      inteiro idade

      escreva("Digite o nome da ", contador , "° pessoa: ")
      leia(nome)
      escreva("Digite a idade de ", nome,": ")
      leia(idade)

      se (idade >= 18){
        escreva(nome, " pode tirar a CNH.\n\n")
      } senao {
        escreva(nome, " não pode tirar a CNH.\n\n")
      }








    }
  }
}
