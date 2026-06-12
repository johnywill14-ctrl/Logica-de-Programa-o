programa {
  funcao inicio() {
    inteiro numero, positivos = 0, negativos = 0

    escreva("Digite um numero: ")
    leia(numero)

    enquanto (numero != -1){
      
      se (numero > 0){
        positivos = positivos + 1
      }
       senao {
        negativos = negativos +1
      }
    }
    escreva("\nQuantidade de números positivos: ", positivos)
    escreva("\nQuantidade de números negativos: ", negativos)
    


  }
}
