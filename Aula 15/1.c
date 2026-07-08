#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int idade;
    float nota;
};

int main() {
    // Motivação: Armazenar as informações de um aluno.
    struct aluno estudante;

    printf("Digite seu nome: ");
    scanf("%19[^\n]", estudante.nome);

    printf("Digite sua idade: ");
    scanf("%d", &estudante.idade);

    printf("Digite sua nota: ");
    scanf("%f", &estudante.nota);

    printf("Nome: %s\n", estudante.nome);
    printf("Idade: %d\n", estudante.idade);
    printf("Nota: %.2f\n", estudante.nota);

    return 0;
}