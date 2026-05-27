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
      escreva("Você podera tirar a habilitação ")
    }
    senao se(idade < 18){
      escreva("Você não podera tirar a habilitação ")


      
    }


  }
}
