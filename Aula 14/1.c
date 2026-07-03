#include <stdio.h>
int main() {
    char nome[4];

    nome[0] = 'A';
    nome[1] = 'n';
    nome[2] = 'a';

    char genero[9] = "Feminino";
    char estadoCivil[] = "Solteira";

    printf("Nome: %s\n", nome);
    printf("Gênero: %s\n", genero);
    printf("estadoCivil: %s\n", estadoCivil);
    return 0;
}