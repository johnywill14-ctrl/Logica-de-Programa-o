#include <stdio.h>
#include <string.h>

struct dataAniversario {
    int dia;
    int mes;
    int ano;
};

struct aluno{
    char nome[20];
    int idade;
    float nota;
    struct dataAniversario aniversario;
};

int main() {
    struct aluno estudante;

    estudante.aniversario.dia = 15;
    estudante.aniversario.mes = 2;
    estudante.aniversario.ano = 1994;

    printf("Data de aniversario: %02d/%02d/%d",estudante.aniversario.dia,
    estudante.aniversario.mes, estudante.aniversario.ano);


    return 0;
}
