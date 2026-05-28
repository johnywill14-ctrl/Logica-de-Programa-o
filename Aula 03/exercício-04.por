programa {
  funcao inicio() {
    real peso
    real altura
    real imc

    escreva("Digite seu peso (KG): ")
    leia(peso)
    escreva("Digite sua altura (M): ")
    leia(altura)

    imc = peso / (altura * altura)
    escreva(" Seu IMC é: ", imc )

    se (imc < 18.5){
      escreva(" \n Você está abaixo do peso.")

    }
    senao se (imc >= 18.5 e imc <= 24.9){
      escreva(" \n Você tem o peso normal.")

    }
    senao se (imc >= 30 e imc <= 34.9){
     escreva(" \n Você tem obesidade grau 1.")

    }
    senao se (imc >= 35 e imc <= 39.9){
      escreva(" \n Você tem obesidade grau 2.")

    }
    senao se (imc > 40){
      escreva(" \n Você tem obesidade grau 3.")
    }
    
  }
}
