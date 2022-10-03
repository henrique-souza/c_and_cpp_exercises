#include <stdio.h>
#include <stdlib.h>

// Declarando estutura da lista
struct Cel
{
    int conteudo;
    struct Cel *prox;
};

// Inicializando uma lista vazia
void criar_lista_vazia(Cel *lista_vazia)
{
    lista_vazia->prox = NULL;
}

// Função que verifica se a lista encadeada está vazia ou não
int lista_vazia(Cel *lista_armazenada)
{
    return (lista_armazenada->prox == NULL);
}

// Função que imprime a lista salva
void imprimir_lista(Cel *lista_salva)
{
    Cel *conteudo_salvo;
    // system("cls");

    printf("Lista salva\n");

    for (conteudo_salvo = lista_salva->prox; conteudo_salvo != NULL; conteudo_salvo = conteudo_salvo->prox)
    {
        printf("%d \t ", conteudo_salvo->conteudo);
    }
}

/*
 * Função que coleta um valor digitado pelo usuário e
 * insere no fim da lista. Caso o elemento ocupe um
 * espaço de memória maior que o possível, imprime uma mensagem
 */
void inserir_elemento(Cel *lista_armazenada, int dado)
{
    Cel *novo_elemento;

    novo_elemento = (Cel *)malloc(sizeof(Cel));

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

// Função que busca o elemento digitado pelo usuário.
void buscar_elemento(Cel *lista_armazenada, int elemento)
{
    Cel *elemento_a_buscar;

    elemento_a_buscar = lista_armazenada->prox;

    while (elemento_a_buscar != NULL && elemento_a_buscar->conteudo != elemento)
    {
        elemento_a_buscar = elemento_a_buscar->prox;
    }
    printf("\nElemento buscado: %d \n", elemento_a_buscar->conteudo);
}

/*
 * Função que remove elemento apontado pelo usuário.
 * Caso elemento não exista na lista, uma mensagem é mostrada.
 */
void remover_elemento(Cel *lista_armazenada, int dado)
{
    Cel *ponteiro_posterior, *ponteiro_anterior;

    ponteiro_anterior = NULL;

    ponteiro_posterior = lista_armazenada->prox;

    while (ponteiro_posterior != NULL && ponteiro_posterior->conteudo != dado)
    {
        ponteiro_anterior = ponteiro_posterior;

        ponteiro_posterior = ponteiro_posterior->prox;
    }

    // Se o ponteiro for válido, ele irá remover o elemento no meio ou no final da lista encadeada
    if (ponteiro_anterior != NULL)
    {
        if (ponteiro_posterior != NULL)
        {
            ponteiro_anterior->prox = ponteiro_posterior->prox;

            printf("\nValor %d Removido\n", ponteiro_posterior->conteudo);

            free(ponteiro_posterior);
        }
        else
        {
            printf("\nValor nao encontrado\n");
        }
    }
    // Se não, remove elemento do início da lista
    // Ou imprime uma mensagem caso não haja mais elementos na lista encadeada
    else
    {
        if (ponteiro_posterior != NULL && ponteiro_posterior->conteudo == dado)
        {
            lista_armazenada->prox = ponteiro_posterior->prox;

            printf("\nValor %d Removido\n", ponteiro_posterior->conteudo);

            free(ponteiro_posterior);
        }
        else
        {
            printf("\n\n");

            system("cls");

            printf("Lista vazia\n");
        }
    }
}

int main()
{
    // declarando uma variável lista usando a estrutura de 'Cel'
    Cel lista;

    // Declarando variáveis a serem utilizadas
    int valor_armazenado, opcao_escolhida, LOOPING = 1;

    // Inicializando uma lista
    criar_lista_vazia(&lista);

    while (LOOPING != 0)
    {
        // Menu
        printf("\t\tMENU DE OPCOES\n\n");
        printf("\n1.\tInserir elemento no inicio da Lista\n");
        printf("2.\tRemover elemento especifico da Lista\n");
        printf("3.\tImprimir Lista Encadeada\n");
        printf("4.\tBuscar elemento especifico da Lista\n");
        printf("0.\tSair\n");
        printf("\n\nEscolha uma das opcoes: ");
        scanf("%d", &opcao_escolhida);

        switch (opcao_escolhida)
        {
        // Encerra o programa e libera espaço
        case 0:
            LOOPING = 0;
            exit(0);
        // Inicia o processo de inserção de elemento
        case 1:
            printf("Valor? ");
            scanf("%d", &valor_armazenado);

            inserir_elemento(&lista, valor_armazenado);

            printf("\n\n");

            imprimir_lista(&lista);

            printf("\n\n");

            break;
        // Inicia o processo de remoção de elemento
        case 2:
            printf("Valor? ");
            scanf("%d", &valor_armazenado);

            remover_elemento(&lista, valor_armazenado);

            imprimir_lista(&lista);

            printf("\n\n");

            break;
        // Caso a lista não esteja vazia, imprime a lista armazenada
        case 3:
            if (lista_vazia(&lista))
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
        // Inicia o processo de busca de elemento
        case 4:
            printf("Valor? ");
            scanf("%d", &valor_armazenado);

            buscar_elemento(&lista, valor_armazenado);

            break;
        default:
            /*
             * Se houver escolha de uma opção inexistente no menu, imprime mensagem
             */
            printf("Opcao inexistente!\n");
        }
    }
}
