#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 16

typedef struct No {
    char palavra[TAM];
    int cont;
    struct No *esq;
    struct No *dir;
} No;

No *criarNo(char *palavra) {
    No *novo = (No *)malloc(sizeof(No));

    strcpy(novo->palavra, palavra);
    novo->cont = 1;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

No *inserir(No *raiz, char *palavra) {
    if (raiz == NULL)
        return criarNo(palavra);

    int cmp = strcmp(palavra, raiz->palavra);

    if (cmp == 0) {
        raiz->cont++;
    }
    else if (cmp < 0) {
        raiz->esq = inserir(raiz->esq, palavra);
    }
    else {
        raiz->dir = inserir(raiz->dir, palavra);
    }

    return raiz;
}

void imprimir(No *raiz) {
    if (raiz == NULL)
        return;

    imprimir(raiz->esq);
    printf("%s (%d)\n", raiz->palavra, raiz->cont);
    imprimir(raiz->dir);
}

void liberar(No *raiz) {
    if (raiz == NULL)
        return;

    liberar(raiz->esq);
    liberar(raiz->dir);
    free(raiz);
}

void processaPalavras(char *str[]) {
    No *raiz = NULL;

    int i = 0;

    while (strcmp(str[i], "\0") != 0) {
        raiz = inserir(raiz, str[i]);
        i++;
    }

    imprimir(raiz);
    liberar(raiz);
}

int main() {
    char *palavras[] = {
        "\nlivro",
        "carro",
        "livro",
        "cartão",
        "livro",
        "portão",
        "portão",
        "bolso",
        "bolso",
        "moto",
        "moto",
        "livro",
        "bolso",
        "livro",
        "livro",
        "moto",
        "\0"
    };

    processaPalavras(palavras);

    return 0;
}