programa {
  // Tipos de função
    // - sem parâmentro e com função
  inclua biblioteca Util --> util
  funcao inicio() {
    inteiro numeroSorteado = sortearNumero()
    escreva(numeroSorteado)
    
  }

  funcao inteiro sortearNumero () {
    inteiro numero = util.sorteia(1,100)
    retorne numero
  }
}
