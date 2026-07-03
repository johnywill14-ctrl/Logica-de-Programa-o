#include <stdio.h>
#include <string.h>
int main() {
    char nome[20] = "Larissa ";

    // strlen(): retonar tamanho da string.

    int tamanho = strlen(nome);
    printf("Ola, %s! O seu nome tem %d letras.\n", nome, tamanho);

    // strcpy(): copia uma string para outra.
    strcpy(nome, "Laryssa");
    printf("Nome (Atualizado): %s\n", nome);

    // strcat(): concatena strings.
    char sobrenome[20] = "Manuela";
    cahr nomeCompleto[40] = "";

    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, sobrenome);
    printf("nomecompleto: %s\n", nomeCompleto);

    //strcmp(): compara duas strings.

    char nomeProcurado[] = "Laryssa";
    int retono = strcmp(nome, nomeProcurado);

    if (retono == 0) {
        printf("O usuario não encontrado!\n");
    } else {
        printf("O usuario não encontrado");
    }

    return 0;
}