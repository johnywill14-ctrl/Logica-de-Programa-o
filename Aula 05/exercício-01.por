programa {
  funcao inicio() {
    inteiro numero, positivos = 0, negativos = 0

    escreva("Digite um numero: ")
    leia(numero)

    enquanto (numero == 0){
      
      se (numero > 0){
        positivos = positivos + 1
      }
       senao {
        numero < 0
        negativos = negativos +1
      }
    }
    escreva("\nQuantidade de números positivos: ", positivos)
    escreva("\nQuantidade de números negativos: ", negativos)
    


  }
}