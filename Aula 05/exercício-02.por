programa {
  funcao inicio() {
    real ph

    escreva("Digite o valor do Ph: ")
    leia(ph)

    enquanto (ph == -1){
      
      se (ph < 7){
        escreva("Substância Ácida")
      } 
      senao se(ph > 7){
        escreva("Substância Básica")
      }
      senao se(ph == 7){
        escreva("Substância Neutra")
      }
    }
  }
}
