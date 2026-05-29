programa {
  funcao inicio() {
       // Exemplo: Avaliar a situação de N alunos

  inteiro qtdAlunos

  escreva("Você quer avaliar a situação de quantos alunos ? ")
  leia(qtdAlunos)

   para (inteiro contador = 1; contador <= qtdAlunos; contador++) {
    real media
    
    escreva("Digite a media do ", contador, "° aluno: ")
    leia(media)

    se (media >=6) {
    escreva("aprovado\n")
  } senao {
    escreva("reprovado\n")
  }
   }

  }
}
