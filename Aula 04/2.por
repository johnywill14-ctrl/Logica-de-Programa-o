programa {
  funcao inicio() {
    // Exemplo: Avaliar a situação de 3 alunos
   para (inteiro contador = 1; contador <= 3; contador++) {
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
