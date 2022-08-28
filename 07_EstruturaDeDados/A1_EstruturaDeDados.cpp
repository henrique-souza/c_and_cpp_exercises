// Lista Simplesmente Encadeada
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaracao da Estrutura Celula
typedef struct celula
{
    int ponteiro;
    struct celula *proximo_ponteiro;
} Celula;

// Declaracao da Estrutura Lista Simplesmente Encadeada
typedef struct lista
{
    Celula *primeiro_ponteiro;

} lista_encadeada;

// Criar Lista Vazia
void criar_lista_vazia(lista_encadeada *lista_armazenada)
{
    lista_armazenada->primeiro_ponteiro = NULL;
}

// Mostrar Elementos da Lista
void imprimir_lista(lista_encadeada *apontarListaArmazenada)
{
    Celula *ponteiro;
    printf("Lista: ");
    for (ponteiro = apontarListaArmazenada->primeiro_ponteiro; ponteiro != NULL; ponteiro = ponteiro->proximo_ponteiro)
    {
        printf("%d -> ", ponteiro->ponteiro);
    }
    printf("NULL\n");
}

// Inserir no Inicio da Lista
void inserir_valor(lista_encadeada *apontarListaArmazenada, int valorArmazenado)
{
    Celula *novoElemento;
    novoElemento = (Celula *)malloc(sizeof(Celula));
    if (novoElemento != NULL)
    {
        novoElemento->ponteiro = valorArmazenado;
        novoElemento->proximo_ponteiro = apontarListaArmazenada->primeiro_ponteiro;
        apontarListaArmazenada->primeiro_ponteiro = novoElemento;
    }
    else
    {
        printf("Memória Insuficiente\n");
    }
}

// Remover no Inicio da Lista
void removerElementoDoInicioDaLista(lista_encadeada *apontarListaArmazenada)
{
    Celula *ponteiroAuxiliar = apontarListaArmazenada->primeiro_ponteiro;
    if (ponteiroAuxiliar != NULL)
    {
        apontarListaArmazenada->primeiro_ponteiro = apontarListaArmazenada->primeiro_ponteiro->proximo_ponteiro;
        free(ponteiroAuxiliar);
        printf("Valor Removido\n");
    }
    else
    {
        printf("Lista Vazia\n");
    }
}

// Remover um Elemento Especifico da Lista
void remover_elemento_especifico(lista_encadeada *apontarListaArmazenada, int valorArmazenado)
{
    Celula *ponteiroAtual, *ponteiroAnterior;
    ponteiroAnterior = NULL;
    ponteiroAtual = apontarListaArmazenada->primeiro_ponteiro;
    while (ponteiroAtual != NULL && ponteiroAtual->ponteiro != valorArmazenado)
    {
        ponteiroAnterior = ponteiroAtual;
        ponteiroAtual = ponteiroAtual->proximo_ponteiro;
    }
    if (ponteiroAnterior != NULL)
    {
        if (ponteiroAtual != NULL)
        {
            ponteiroAnterior->proximo_ponteiro = ponteiroAtual->proximo_ponteiro;
            free(ponteiroAtual);
            printf("Valor Removido1\n");
        }
        else
        {
            printf("Valor não encontrado\n");
        }
    }
    else
    {
        if (ponteiroAtual != NULL && ponteiroAtual->ponteiro == valorArmazenado)
        {
            apontarListaArmazenada->primeiro_ponteiro = ponteiroAtual->proximo_ponteiro;
            free(ponteiroAtual);
            printf("Valor Removido2\n");
        }
        else
        {
            printf("Lista Vazia\n");
        }
    }
}

// Remover Todos os Elementos da Lista
void removerTodosElementos(lista_encadeada *apontarListaArmazenada)
{
    Celula *ponteiro;
    ponteiro = apontarListaArmazenada->primeiro_ponteiro;

    while (ponteiro != NULL)
    {

        free(ponteiro);
        ponteiro = ponteiro->proximo_ponteiro;
        apontarListaArmazenada->primeiro_ponteiro = ponteiro;
    }
}

// Alterar Elemento da Lista
void alterarEle(lista_encadeada *apontarListaArmazenada, int valor1, int valor2)
{

    Celula *ponteiroAtual;

    ponteiroAtual = apontarListaArmazenada->primeiro_ponteiro;
    while (ponteiroAtual != NULL)
    {

        if (ponteiroAtual->ponteiro == valor1)
        {

            ponteiroAtual->ponteiro = valor2;
        }

        ponteiroAtual = ponteiroAtual->proximo_ponteiro;
    }
}

// Lista Vazia
int imprimir_lista_vazia(lista_encadeada *lista_armazenada)
{
    return (lista_armazenada->primeiro_ponteiro == NULL);
}

// Programa Principal
int main()
{
    setlocale(LC_ALL, "portuguese");

    lista_encadeada minhaLista;

    int valorArmazenado, opcaoEscolhida, valorAlterado;

    criar_lista_vazia(&minhaLista);

    while (true)
    {

        printf("\n(1) Inserir elemento no inicio da Lista\n");
        printf("(2) Remover elemento no inicio da Lista\n");
        printf("(3) Remover elemento especifico da Lista\n");
        printf("(4) Mostrar Lista\n");
        printf("(5) Apagar todos os elementos da Lista\n");
        printf("(6) Alterar elemento da Lista\n");
        printf("(0) Sair\n");

        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcaoEscolhida);

        system("cls");
        switch (opcaoEscolhida)
        {
        case 1:
            // inserir elemento no inicio
            printf("Valor? ");
            scanf("%d", &valorArmazenado);

            inserir_valor(&minhaLista, valorArmazenado);

            break;
        case 2:
            // remover o primeiro
            removerElementoDoInicioDaLista(&minhaLista);

            break;
        case 3:
            // remover determinado elemento
            printf("Valor? ");
            scanf("%d", &valorArmazenado);

            remover_elemento_especifico(&minhaLista, valorArmazenado);

            break;
        case 4:
            // mostrar lista
            if (imprimir_lista_vazia(&minhaLista))
            {
                printf("Lista vazia\n");
            }
            else
            {
                imprimir_lista(&minhaLista);
            }
            break;
        case 5:
            // apaga todos os elementos da Lista
            removerTodosElementos(&minhaLista);

            break;
        case 6:
            // altera o elemento escolhido pelo usuario
            printf("Valor a ser alterado? ");
            scanf("%d", &valorArmazenado);

            printf("Novo valorArmazenado? ");
            scanf("%d", &valorAlterado);

            alterarEle(&minhaLista, valorArmazenado, valorAlterado);

            break;
        case 0:
            // apaga todas as listas salvas
            removerTodosElementos(&minhaLista);

            exit(0);
        default:
            printf("Opcao inexistente!\n");
        }
    }
}
