prograprograma {
  funcao inicio() {
    cadeia nome
    real peso
    real altura
    real imc

    escreva("Nome: ")
    leia(nome)

    escreva("peso (kg): ")
    leia(peso)

    escreva("altura (m): ")
    leia(altura)

    imc = peso / (altura * altura)

    escreva(nome , ", seu IMC é: ", imc)
     

  }
}
