#include <stdio.h>
#include <stdlib.h>

//
// Created by Henrique Souza on 22/08/2022.
//
typedef struct celula
{
    int ponteiro;
    struct celula *proximo_ponteiro;
} Celula;

// Declaracao da lista
typedef struct lista
{
    Celula *primeiro_ponteiro;
} lista_encadeada;

void criar_lista_vazia(lista_encadeada *lista_armazenada)
{
    lista_armazenada->primeiro_ponteiro = NULL;
}

void imprimir_lista(lista_encadeada *lista_salva)
{
    Celula *ponteiro;
    system("cls");

    printf("Lista salva\n");

    for (ponteiro = lista_salva->primeiro_ponteiro; ponteiro != NULL; ponteiro = ponteiro->proximo_ponteiro)
    {
        printf("%d \t ", ponteiro->ponteiro);
    }
}

void inserir_valor(lista_encadeada *lista_armazenada, int dado)
{
    Celula *novo_elemento;
    novo_elemento = (Celula *)malloc(sizeof(Celula));

    if (novo_elemento != NULL)
    {
        novo_elemento->ponteiro = dado;
        novo_elemento->proximo_ponteiro = lista_armazenada->primeiro_ponteiro;
        lista_armazenada->primeiro_ponteiro = novo_elemento;
    }
    else
    {
        printf("Memoria Insuficiente\n");
    }
}

void remover_elemento_especifico(lista_encadeada *lista_armazenada, int dado)
{
    Celula *ponteiro_posterior, *ponteiro_anterior;

    ponteiro_anterior = NULL;

    ponteiro_posterior = lista_armazenada->primeiro_ponteiro;

    while (ponteiro_posterior != NULL && ponteiro_posterior->ponteiro != dado)
    {
        ponteiro_anterior = ponteiro_posterior;

        ponteiro_posterior = ponteiro_posterior->proximo_ponteiro;
    }

    if (ponteiro_anterior != NULL)
    {

        if (ponteiro_posterior != NULL)
        {
            ponteiro_anterior->proximo_ponteiro = ponteiro_posterior->proximo_ponteiro;

            free(ponteiro_posterior);

            printf("Valor Removido\n");
        }
        else
        {
            printf("Valor nao encontrado\n");
        }
    }
    else
    {

        if (ponteiro_posterior != NULL && ponteiro_posterior->ponteiro == dado)
        {
            lista_armazenada->primeiro_ponteiro = ponteiro_posterior->proximo_ponteiro;

            free(ponteiro_posterior);

            printf("Valor Removido\n");
        }
        else
        {
            printf("Lista Vazia\n");
        }
    }
}

int imprimir_lista_vazia(lista_encadeada *lista_armazenada)
{
    return (lista_armazenada->primeiro_ponteiro == NULL);
}

int main()
{
    lista_encadeada lista;

    int valor_armazenado, opcao_escolhida;

    int LOOPING = 1;

    criar_lista_vazia(&lista);

    while (LOOPING != 0)
    {
        printf("\n1.\tInserir elemento no inicio da Lista\n");
        printf("2.\tRemover elemento especifico da Lista\n");
        printf("3.\tImprimir Lista Encadeada\n");
        printf("0.\tSair\n");
        printf("\n\nEscolha uma das opcoes: ");
        scanf("%d", &opcao_escolhida);

        switch (opcao_escolhida)
        {
        case 0:
            LOOPING = 0;
        case 1:
            printf("Valor? ");
            scanf("%d", &valor_armazenado);

            inserir_valor(&lista, valor_armazenado);

            printf("\n\n");

            imprimir_lista(&lista);

            printf("\n\n");

            break;
        case 2:
            printf("Valor? ");
            scanf("%d", &valor_armazenado);

            imprimir_lista(&lista);

            remover_elemento_especifico(&lista, valor_armazenado);

            imprimir_lista(&lista);

            printf("\n\n");

            break;
        case 3:
            if (imprimir_lista_vazia(&lista))
            {
                printf("\n\n");

                system("cls");

                printf("Lista vazia\n");
            }
            else
            {
                system("cls");

                imprimir_lista(&lista);

                printf("\n\n");
            }
            break;
        default:
            printf("Opcao inexistente!\n");
        }
    }
}
