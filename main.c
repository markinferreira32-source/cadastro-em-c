#include <stdio.h>

#define MAX 20

typedef struct {
    char nome[50];
    int idade;
    char telefone[20];
} Pessoa;

Pessoa pessoas[MAX];
int total = 0;

void menu() {
    printf("\n==== INICIO ====\n");
    printf("1 - Cadastrar usuario\n");
    printf("2 - Listar usuarios\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

void cadastrarUsuario() {
    if (total >= MAX) {
        printf("Limite de cadastros atingido!\n");
        return;
    }

    printf("Nome: ");
    scanf(" %[^\n]", pessoas[total].nome);

    printf("Idade: ");
    scanf("%d", &pessoas[total].idade);

    printf("Telefone: ");
    scanf(" %[^\n]", pessoas[total].telefone);

    total++;
    printf("Usuario cadastrado com sucesso!\n");
}

void listarUsuario() {
    if (total == 0) {
        printf("Nenhum usuario cadastrado.\n");
        return;
    }

    printf("\n--- Lista de Usuarios ---\n");
    for (int i = 0; i < total; i++) {
        printf("%d - %s | %d anos | Tel: %s\n",
               i + 1,
               pessoas[i].nome,
               pessoas[i].idade,
               pessoas[i].telefone);
    }
}

int main() {
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarUsuario();
                break;
            case 2:
                listarUsuario();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
