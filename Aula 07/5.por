programa {
  // Tipos de função
    // - com parâmentro e com retorno
  inclua biblioteca Util --> util
  funcao inicio() {
    inteiro numeroSorteado = sortearNumero(1,1000)
    escreva(numeroSorteado)
    
  }

  funcao inteiro sortearNumero (inteiro inicio, inteiro fim) {
    inteiro numero = util.sorteia(inicio, fim)
    retorne numero
  }
}
