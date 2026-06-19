#include <stdio.h>
float calcularMedia (float nota1, float nota2);
void classificaAluno (float media);
int main (){
    float media = calcularMedia(7,6);

 classificaAluno(media);
return 0;
}

float calcularMedia (float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

void classificaAluno (float media) {
    if(media >= 6){
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}