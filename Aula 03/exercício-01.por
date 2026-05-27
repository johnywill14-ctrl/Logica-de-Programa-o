programa {
  funcao inicio() {
    inteiro anoDenascimento
    inteiro anoAtual
    inteiro idade

    escreva("Digite o ano de nascimento: ")
    leia(anoDenascimento)

    escreva("Digite o ano atual: ")
    leia(anoAtual)
    
    idade = anoAtual - anoDenascimento

    se (idade >= 18){
      escreva("Você completa ", idade, " em 2025 e poderá tirar a habilitação ")
    }
    senao se(idade < 18){
      escreva("Você completa ", idade, " em 2025 e não poderá tirar a habilitação ")


      
    }


  }
}
