programa {
  funcao inicio() {
    real base
    real altura

    escreva("Digite a base do retângulo: ")
    leia(base)
    escreva("Digite a altura do retângulo: ")
    leia(altura)
    calcularAreaRetangulo(base, altura)
    real areaRetangulo = calcularAreaRetangulo (base, altura)
    escreva("Área do retângulo é: ", areaRetangulo)
    
    
  }

  funcao real calcularAreaRetangulo (real base, real altura) {
    real area = base * altura
    retorne area

  }
}
