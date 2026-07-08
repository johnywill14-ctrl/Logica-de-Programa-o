#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int idade;
    float nota;
};

int main() {
    struct aluno estudantes[3];

    for (int i = 0; i < 3; i++) { 
    printf("Digite seu nome: ");
    scanf("%19[^\n]", estudantes[i].nome);

    printf("Digite sua idade: ");
    scanf("%d", &estudantes[i].idade);

    printf("Digite sua nota: ");
    scanf("%f", &estudantes[i].nota);

    getchar();

    }
    for (int i = 0; i < 3; i++) { 
      printf("Dados do %d° estudande: \n", i + 1);
      printf("Nome: %s\n", estudantes[i].nome);
      printf("Idade: %d\n", estudantes[i].idade);
      printf("Nota: %.2f\n\n", estudantes[i].nota);
    }






    strcpy(estudantes[0].nome, "Lucas");
    estudantes[0].idade = 17;
    estudantes[0].nota = 6.7;




    return 0;
}