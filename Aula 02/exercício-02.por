programa {
  funcao inicio() {
    cadeia nome
    real nota1
    real nota2

    escreva("Digite seu nome: ")
    leia(nome)

    escreva("Digite sua primeira nota: ")
    leia(nota1)

    escreva("Digite sua segunda nota: ")
    leia(nota2)

    escreva("O aluno(a) ", nome , " obteve média final de : ", (nota1 + nota2) /2)
  }
}
