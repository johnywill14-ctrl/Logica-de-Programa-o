#include <stdio.h>

// fgetc(): Lê caracter por caracter.OK
// fgets(): Lê linha por linha.OK
// fscanf(): Lê maneira 

int main() {
    FILE *arquivo = fopen("dados.txt", "r");


    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[20];
    while (fgets(linha, 20, arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    
    return 0;
}