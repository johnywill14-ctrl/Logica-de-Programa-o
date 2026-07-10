#include <stdio.h>

// fgetc(): Lê caracter por caracter. OK
// fgets(): Lê linha por linha. OK
// fscanf(): Lê maneira. OK

int main() {
    FILE *arquivo = fopen("dados.txt", "r");


    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char nome[20];
    int idade;
    float altura;

    while (fscanf(arquivo, "%s%d%f", nome, &idade, &altura) != EOF) {
        printf("nome: %s\n", nome);
        printf("idade: %d\n", idade);
        printf("altura: %.2f\n", altura);
    }


    fclose(arquivo);
    
    return 0;
}