#include <stdio.h>
int main() {
  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero == 0){
    printf("O número é zero!");

   } else if (numero > 0){
    printf("É positivo!");

  } else {
    printf("%d é nagativo!", numero);
  }
   
 
  return 0;
}