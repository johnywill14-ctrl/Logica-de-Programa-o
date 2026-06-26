#include <stdio.h>

int main () {
   // Busca
int numeros[] = {7, 2, 1, 4, -10, 6, 8, 9, 5, 3};

int encontrado = buscaLinear(numeros, 10, 7);

if (encontrado == 1) {
    printf("O numero esta no array.\n");
} else {
    printf("O numero nao esta no array.\n");
}

return 0;

 }
}
int buscaLinear(int array[], int tam, int numero) {
   for(int indice = 0; indice < 10; indice++) {
    if (array[indice] == numero) {
        return 1;
    }
  }
 return 0;
}

