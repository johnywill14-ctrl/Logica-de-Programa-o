programa {
  funcao inicio() {
    real angulo1
    real angulo2
    real angulo3

    escreva("Digite o primeiro ângulo: ")
    leia(angulo1)

    escreva("Digite o segundo ângulo: ")
    leia(angulo2)
    
    angulo3 = 180 - (angulo1 + angulo2)

    escreva("O terceiro ângulo do triângulo é: ", angulo3 , " graus")

  }
}
