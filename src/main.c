#include <stdio.h>
#include "usuarios.h"

void menu() {
    printf("\n==== INICIO ====\n");
    printf("1 - Cadastrar usuario\n");
    printf("2 - Listar usuarios\n");
    printf("3 - Buscar usuario\n");
    printf("4 - Remover usuario\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;

    carregarDoArquivo();

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
            case 3:
                buscarUsuario();
                break;
            case 4:
                removerUsuario();
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
