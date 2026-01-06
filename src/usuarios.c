#include <stdio.h>
#include <string.h>
#include "usuarios.h"

/* variáveis globais do módulo */
Pessoa pessoas[MAX];
int total = 0;
int proximoID = 1;

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

    pessoas[total].id = proximoID++;
    total++;

    printf("Usuario cadastrado com sucesso!\n");
}
