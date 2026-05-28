programa {
  funcao inicio() {
    inteiro n1
    inteiro n2
    inteiro operacao = 5

    escreva("Digite o primeiro número: ")
    leia(n1)
    escreva("Digite o segundo número: ")
    leia(n2)



    escreva("--- Operações---\n")
    escreva("1 - Soma\n")
    escreva("2 - Subtração\n")
    escreva("3 - Multiplicação\n")
    escreva("4 - Divisão\n")

     escreva("Escolha uma operação: ")
       leia(operacao)

    escolha(operacao) {
      caso 1 : 
       escreva("Resultado da soma: \n", n1 + n2)
       pare
      caso 2 : 
       escreva("Resultado da subtração: \n", n1 - n2)
       pare
      caso 3 :
       escreva("Resultado da multiplicação: \n", n1 * n2)
       pare
      caso 4 :
       escreva("Resultado da divisão: ", n1 / n2)

      



           











    }

    
  }
}
