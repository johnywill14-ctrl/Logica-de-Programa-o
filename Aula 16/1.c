#include <stdio.h>

int main() {
    //fopen()
    // - nome arquivo
    // - modo de abertura

    FILE *arquivo = fopen("dados.txt", "r");

    // r: leitura (precisa existir o arquivo)
    // w: escrita (se não existir o arquivo é criado)

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Leitura ou Escrita

    fclose(arquivo);
    
    return 0;
}