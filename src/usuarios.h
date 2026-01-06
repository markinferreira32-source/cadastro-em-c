#ifndef USUARIOS_H
#define USUARIOS_H

#define MAX 20

typedef struct {
    int id;
    char nome[50];
    int idade;
    char telefone[20];
} Pessoa;

/* Protótipos das funções */
void adicionar_usuario();
void listar_usuarios();
void salvar_em_arquivo();
void carregar_do_arquivo();

#endif
