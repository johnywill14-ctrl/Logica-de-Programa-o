programa {
  // Tipos de função
    // - Com parâmetro e sem retorno 
  funcao inicio() {
    exibirMensagemPersonalizada(8)
    
  }

  funcao exibirMensagemPersonalizada (inteiro tentativas) {
        se (tentativas <= 3) {
          escreva("✅ Uau! Você é um gêneio da adivinhação! Número de Tentativas: ", tentativas, ".\n")
        } senao se (tentativas <= 6) {
          escreva("✅ Muite bem! Você foi rápido! Número de Tentativas: ", tentativas, ".\n") 
        } senao {
          escreva("✅ Conseguiu! Persitência é tudo! Número de Tentativas: ", tentativas, ".\n") 
        }
  }
}
