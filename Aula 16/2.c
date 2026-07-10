#include <stdio.h>

// fgetc(): Lê caracter por caracter. OK
// fgets(): Lê linha por linha.
// fscanf(): Lê maneira 

int main() {
    FILE *arquivo = fopen("dados.txt", "r");


    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char ch;

    do {
        ch = fgetc (arquivo);
        printf("%c", ch);
    } while (ch != EOF);



    fclose(arquivo);
    
    return 0;
}