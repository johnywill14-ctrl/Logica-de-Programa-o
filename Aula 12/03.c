#include <stdio.h>

int main() {

  // Motivação: Ler 5 números inteiros e depois imprimir eles na tela.
  int numeros[5];

  // numeros: [[][][][][]]
  // indices: [[][][][][]]

printf("Digite o 1° numero: ");
scanf("%d", &numeros[0]);
printf("Digite o 2° numero: ");
scanf("%d", &numeros[1]);
printf("Digite o 3° numero: ");
scanf("%d", &numeros[2]);
printf("Digite o 4° numero: ");
scanf("%d", &numeros[3]);
printf("Digite o 5° numero: ");
scanf("%d", &numeros[4]);


  printf("Lista dos numeros digitados: %d %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

    return 0;
}