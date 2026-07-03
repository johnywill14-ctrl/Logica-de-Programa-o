#include <stdio.h>
#include <string.h>
int main() {
    char nome[20];

    printf("Qual o seu nome? ");
    fgets(nome, 20, stdin);
    int indice = strcspn(nome, "\n");
    nome[indice] = '\0';

    printf("Indice: %d\n", indice);
    printf("Nome: %s\n", nome);
    printf("Fim do programa.\n");


    return 0;
}