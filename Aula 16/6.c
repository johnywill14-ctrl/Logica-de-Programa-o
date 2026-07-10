#include <stdio.h>

// fputc(): Escreve caracter por caracter. OK
// fputs(): Escreve linha por linha. OK
// fprintf(): Escreve maneira. 

int main() {
    FILE *arquivo = fopen("dados.txt", "a");


    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char nome[] = "Ana";

    fputs(nome, arquivo);

    fclose(arquivo);
    
    return 0;
}