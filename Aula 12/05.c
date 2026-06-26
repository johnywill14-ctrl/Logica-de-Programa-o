#include <stdio.h>

int main () {
   // Busca
    int numeros[] = {7, 2, 1, 4, -10, 6, 8, 9, 5, 3};

    int numeroProcurado = 10;
    int encontrado = 0;  //false

    for(int indice = 0; indice < 10; indice++) {
        if (numeros[indice] == numeroProcurado) {
         printf("O numero %d esta no array.\n", numeroProcurado);
         encontrado = 1; //true
         break;
        }
    }

    if (encontrado == 0) {
        printf("O numero %d nao esta no array.\n", numeroProcurado);
    }

    return 0;
}