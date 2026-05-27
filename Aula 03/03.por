programa {
  funcao inicio() {
    real nota
    
    escreva("Informe a nota: ")
    leia(nota)

    se (nota >= 7 e nota <= 10){
      escreva("aprovado")
    }

    senao se(nota >= 4 e nota <= 6){
      escreva("recuperação")
    }
   
    senao se (nota >= 0 e nota <= 3){
      escreva("reprovado")
    }

    senao{
      escreva("Nota Invalida!")
    }


    }
  }

