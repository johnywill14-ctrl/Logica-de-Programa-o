programa {
  funcao inicio() {
   inteiro qtdpessoas

   escreva("Quantas pessoas deseja analisar ? ")
   leia(qtdpessoas)

   para(inteiro contador = 1; contador <= qtdpessoas; contador++){
    cadeia nome
    real idade

    escreva("Digite o nome da ", contador,"° pessoa: " )
    leia(nome)
    escreva("Digite a idade de " , nome, ": ")
    leia(nome)

    escreva("Digite o nome da ", contador, "° pessoas " )
    leia(nome)
    escreva("Digite a idade de " , nome, ": ")
    leia(idade)
    
    escreva("Digite o nome da ", contador,"° pessoa: ")
    leia(nome)
    escreva("Digite a idade de " , nome, ": ")
    leia(idade)


    se (idade < 18){
      escreva(nome, "não pode tirar a CNH")
    } senao {
      escreva(nome, "pode tirar a CNH")
    }






   }


  }
}
