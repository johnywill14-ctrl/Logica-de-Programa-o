#include <stdio.h>
int main() {
    char nome[20];

    printf("Qual o seu nome: ");
    scanf("%19[^\n]", nome);


    printf("Nome: %s\n", nome);


    return 0;
}