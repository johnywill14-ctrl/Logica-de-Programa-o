#include <stdio.h>
#include <string.h>

void mensagempersonalizada(char nome[]);

int main() {
    char nome[] = "Larissa";

    mensagempersonalizada(nome);
    return 0;
}

void mensagempersonalizada(char nome[]) {
    printf("Ola, %s. Seja bem-vindo(a)!\n", nome);
}