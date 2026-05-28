programa {
  funcao inicio() {
    cadeia nome
    inteiro idade
    cadeia classificacao

    escreva("Olá, qual o seu nome? ")
    leia(nome)
    escreva(nome, ", qual a sua idade? ")
    leia(idade)
    
     
    se(idade < 16){
      escreva(nome, ", sua classificação eleitoral é: Não eleitor.")
    }
    senao se(idade >= 16 e idade < 18){
      escreva(nome, ", sua classificação eleitoral é: Eleitor facultativo.")
    }
    senao se(idade >= 18 e idade <= 65 ){
      escreva(nome, ", sua classificação eleitoral é: Eleitor obrigatório.")
    }
    senao se(idade > 65){
      escreva(nome, ", sua classificação eleitoral é: Eleitor facultativo.")
    }
  }
}
