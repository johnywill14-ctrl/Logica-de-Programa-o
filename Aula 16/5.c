#include <stdio.h>

// fputc(): Escreve caracter por caracter. OK
// fputs(): Escreve linha por linha. 
// fprintf(): Escreve maneira. 

int main() {
    FILE *arquivo = fopen("dados.txt", "a");


    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char ch1 = 'A', ch2 = 'n', ch3 = 'a';
    fputc('\n', arquivo);
    fputc(ch1, arquivo);
    fputc(ch2, arquivo);
    fputc(ch3, arquivo);



    fclose(arquivo);
    
    return 0;
}