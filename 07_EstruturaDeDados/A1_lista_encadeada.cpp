#include <stdio.h>
#include <stdlib.h>

// Declarando estutura da lista
struct cel
{
    int conteudo;
    struct cel *prox;
};

// Inicializando uma lista vazia
void criar_lista_vazia(cel *lista_vazia)
{
    lista_vazia->prox = NULL;
}

// Função que imprime a lista salva
void imprimir_lista(cel *lista_salva)
{
    cel *conteudo_salvo;
    system("cls");

    printf("Lista salva\n");

    for (conteudo_salvo = lista_salva->prox; conteudo_salvo != NULL; conteudo_salvo = conteudo_salvo->prox)
    {
        printf("%d \t ", conteudo_salvo->conteudo);
    }
}

void inserir_valor(cel *lista_armazenada, int dado)
{
    cel *novo_elemento;

    novo_elemento = (cel *)malloc(sizeof(cel));

    if (novo_elemento != NULL)
    {
        novo_elemento->conteudo = dado;
        novo_elemento->prox = lista_armazenada->prox;
        lista_armazenada->prox = novo_elemento;
    }
    else
    {
        // Interceptando a chamada do "Stack overflow", de explosão de memória
        printf("Memoria Insuficiente\n");
    }
}

void remover_elemento_especifico(cel *lista_armazenada, int dado)
{
    cel *ponteiro_posterior, *ponteiro_anterior;

    ponteiro_anterior = NULL;

    ponteiro_posterior = lista_armazenada->prox;

    while (ponteiro_posterior != NULL && ponteiro_posterior->conteudo != dado)
    {
        ponteiro_anterior = ponteiro_posterior;

        ponteiro_posterior = ponteiro_posterior->prox;
    }

    if (ponteiro_anterior != NULL)
    {
        if (ponteiro_posterior != NULL)
        {
            ponteiro_anterior->prox = ponteiro_posterior->prox;

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
        if (ponteiro_posterior != NULL && ponteiro_posterior->conteudo == dado)
        {
            lista_armazenada->prox = ponteiro_posterior->prox;

            free(ponteiro_posterior);

            printf("Valor Removido\n");
        }
        else
        {
            printf("Lista Vazia\n");
        }
    }
}

int imprimir_lista_vazia(cel *lista_armazenada)
{
    return (lista_armazenada->prox == NULL);
}

int main()
{
    cel lista;

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
            exit(0);
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
