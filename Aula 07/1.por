programa {
  funcao inicio() {
    cadeia classificacao = classificaAluno(7.6)

   escreva(classificacao)
    
  }

  funcao cadeia classificaAluno(real media) {
    se (media >= 6){
      retorne "Aprovado!"
    } senao {
      retorne "Reprovado"
    }

  }
}
