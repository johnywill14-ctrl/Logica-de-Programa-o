#include <stdio.h>
#include <string.h>

#define MAX_CONTAS 50

int ids = 1001;
int totalContas = 0;

typedef struct {
    int numero;
    char nome[50];
    float saldo;
} Conta;

void carregarDados(Conta contas[]);
void salvarDados(Conta contas[]);

void criarConta(Conta contas[]);
void exibirContas(Conta contas[]);
int obterIndiceConta(Conta contas[], int numero);
void depositar(Conta contas[]);
void sacar(Conta contas[]);
void buscarConta(Conta contas[]);
void transferir(Conta contas[]);
void deletarConta(Conta contas[]);
void editarConta(Conta contas[]);

int main() {
    Conta contas[MAX_CONTAS];

    carregarDados(contas);

    int opcao;

    do {
        printf("\n===== SISTEMA BANCARIO =====\n");
        printf("1 - Criar Conta\n");
        printf("2 - Exibir Contas\n");
        printf("3 - Depositar\n");
        printf("4 - Sacar\n");
        printf("5 - Buscar Conta\n");
        printf("6 - Transferir\n");
        printf("7 - Deletar Conta\n");
        printf("8 - Editar Conta\n");
        printf("0 - Sair\n");
        printf("============================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 0:
                salvarDados(contas);
                break;
            case 1:
                criarConta(contas);
                break;

            case 2:
                exibirContas(contas);
                break;

            case 3:
                depositar(contas);
                break;

            case 4:
                sacar(contas);
                break;

            case 5:
                buscarConta(contas);
                break;

            case 6:
                transferir(contas);
                break;

            case 7:
                deletarConta(contas);
                break;

            case 8:
                editarConta(contas);
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}

void criarConta(Conta contas[]) {

    if (totalContas >= MAX_CONTAS) {
        printf("O sistema atingiu o limite de contas.\n");
        return;
    }

    Conta conta;

    printf("\n===== CADASTRO =====\n");
    printf("Digite seu nome: ");
    scanf(" %49[^\n]", conta.nome);

    conta.numero = ids;
    conta.saldo = 0.0;

    contas[totalContas] = conta;

    printf("\nConta criada com sucesso!\n");
    printf("Numero: %d\n", contas[totalContas].numero);
    printf("Nome: %s\n", contas[totalContas].nome);
    printf("Saldo: R$ %.2f\n", contas[totalContas].saldo);

    ids++;
    totalContas++;
}

void exibirContas(Conta contas[]) {
    if (totalContas == 0) {
        printf("\nNenhuma conta cadastrada.\n");
        return;
    }

    printf("\n===== CONTAS CADASTRADAS =====\n");

    for (int i = 0; i < totalContas; i++) {
        printf("\nConta %d\n", i + 1);
        printf("Numero: %d\n", contas[i].numero);
        printf("Nome: %s\n", contas[i].nome);
        printf("Saldo: R$ %.2f\n", contas[i].saldo);
    }
}

void carregarDados(Conta contas[]) {
    FILE *arquivo = fopen("contas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    int i = 0;

    while (fscanf(arquivo, "%d,%49[^,],%f", &contas[i].numero, contas[i].nome, &contas[i].saldo) != EOF) {
        i++;

        if (i == MAX_CONTAS)break;
    }

    if (i != 0) {
    totalContas = i;
    ids = contas[i - 1].numero + 1;
}

 fclose(arquivo);

}

void salvarDados (Conta contas[]) {
    FILE *arquivo = fopen("contas.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < totalContas; i++) {
        fprintf(arquivo, "%d,%s,%.2f\n", contas[i].numero, contas[i].nome, contas[i].saldo);
    }
}

int obterIndiceConta(Conta contas[], int numero) {
    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numero) {
            return i;
        }
    }

    return -1;
}

void depositar(Conta contas[]) {
    int numero;

    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1) {
        printf("Conta nao encontrada.\n");
        return;
    }

    float valorDeposito;

    printf("Informe o valor do deposito: ");
    scanf("%f", &valorDeposito);

    if (valorDeposito <= 0) {
        printf("Valor invalido.\n");
        return;
    }

    contas[indice].saldo += valorDeposito;

    printf("\nDeposito realizado com sucesso!\n");
    printf("Conta: %d\n", contas[indice].numero);
    printf("Titular: %s\n", contas[indice].nome);
    printf("Novo saldo: R$ %.2f\n", contas[indice].saldo);
}

void sacar(Conta contas[]) {
    int numeros;

    printf("\nDigite o número da conta: ");
    scanf("%d", &numeros);

    int indice = obterIndiceConta(contas, numeros);

    if (indice == -1) {
        printf("Conta não encontrada.\n");
        return;
    }

    float valorSaque;

    printf("\nInforme o valor do saque: ");
    scanf("%f", &valorSaque);

    if (valorSaque > contas[indice].saldo) {
        printf("Saldo insuficiente.\n");
    } else {
         contas[indice].saldo -= valorSaque;
    }
}

void buscarConta(Conta contas[]) {
    int numero;

    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1) {
        printf("Conta nao encontrada.\n");
        return;
    }
}

void transferir(Conta contas[]) {
    int numeroOrigem;

    printf("\nInforme o numero da conta de origem: ");
    scanf("%d", &numeroOrigem);

    int numeroDestino;

    printf("\nInforme o numero da conta de destino: ");
    scanf("%d", &numeroDestino);

    int indiceOrigem = obterIndiceConta(contas, numeroOrigem);
    int indiceDestino = obterIndiceConta(contas, numeroOrigem);

    if (indiceOrigem == -1 || indiceDestino == -1) {
        printf("Conta(s) nao encontradas(s).\n");
        return;
    }

    float valorTransferida;

    printf("\nInforme o valor da transferencia: ");
    scanf("%f", &valorTransferida);

    if (valorTransferida > contas[indiceOrigem].saldo) {
        printf("Saldo em conta insuficiente.\n");
    } else {
        contas[indiceOrigem].saldo -= valorTransferida;
        contas[indiceDestino].saldo += valorTransferida;
    }
}

void deletarConta(Conta contas[]) {
    int numero;
    printf("\nInforme o numero da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1) {
        printf("Conta nao encontrada.\n");
        return;
    }

    for (int i = indice; i < totalContas - 1; i++) {
        strcpy(contas[i].nome, contas[i + 1].nome);
        contas[i].numero = contas[i + 1].numero;
        contas[i].saldo = contas[i + 1].saldo;
    }

    strcpy(contas[totalContas - 1].nome, "");
    contas[totalContas - 1].numero = 0;
    contas[totalContas - 1].saldo = 0.0;

    totalContas--;

    printf("Conta deletada com secesso.\n");
}

void editarConta(Conta contas[]) {
    int numero;

    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);

    int indice = obterIndiceConta(contas, numero);

    if (indice == -1) {
        printf("Conta nao encontrada.\n");
        return;
    }

    getchar();

    printf("Novo nova");
    scanf("%49[^\n]", contas[indice].nome);

    printf("\n--- Dados Atualizados---\n");

    printf("\nConta criada com sucesso!\n");
    printf("Numero: %d\n", contas[indice].numero);
    printf("Nome: %s\n", contas[indice].nome);
    printf("Saldo: R$ %.2f\n", contas[indice].saldo);



}