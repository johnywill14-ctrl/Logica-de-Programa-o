#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int idade;
    float nota;
};

void mostrarDados(struct aluno estudante);

int main() {
    struct aluno estudante = {"Lucas", 18, 8.9};

    mostrarDados(estudante);

    return 0;

    }
void mostrarDados(struct aluno estudante);
    printf("Nome: %s\n", estudante.nome);
    printf("Idade: %d\n", estudante.idade);
    printf("Nota: %.2f\n", estudante.nota);






