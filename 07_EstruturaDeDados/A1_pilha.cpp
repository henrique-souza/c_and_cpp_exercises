#include <stdio.h>
#include <stdlib.h>

struct PILHA
{
    int numero;
    struct PILHA *proximo_elemento;
};

void inicializando_pilha(PILHA **topo)
{
    *topo = NULL;
}

bool pilha_vazia(PILHA **topo)
{
    if (*topo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool pilha_cheia(PILHA **topo)
{
    if (*topo != NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void empilhar(PILHA **topo, int elemento)
{
    PILHA *novo_elemento;

    novo_elemento = (PILHA *)malloc(sizeof(PILHA));

    novo_elemento->numero = elemento;

    novo_elemento->proximo_elemento = *topo;

    *topo = novo_elemento;
}

int desempilhar(PILHA **topo)
{
    int result;
    PILHA *auxiliar;

    if (pilha_vazia(topo))
    {
        printf("\n stack underflow! \n");

        exit(1);
    }
    else
    {
        // -> Elemento retirado do topo
        result = (*topo)->numero;

        auxiliar = *topo;

        *topo = (*topo)->proximo_elemento;

        free(auxiliar);

        return result;
    }
}

void imprimir_pilha(PILHA *topo)
{
    int i = 0;
    PILHA *item;

    printf("\n\tPILHA\n\n");
    printf("---------------------------------\n");

    if (pilha_vazia(&topo))
    {
        printf("A Pilha esta vazia!\n");
    }
    else
    {
        item = topo;

        while (item != NULL)
        {
            i++;

            printf("[%i] -> %i\n", i, item->numero);

            item = item->proximo_elemento;
        }
    }
    printf("---------------------------------\n");
}

void menu()
{
    printf("\n\n\tMENU DE OPCOES\n\n"
           "1.\tEmpilhar\n"
           "2.\tDesempilhar\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    PILHA *topo = NULL;

    int opcao, numero;

    menu();
    scanf("%i", &opcao);

    while (opcao != 0)
    {
        switch (opcao)
        {
        case 1:
            printf("Digite um numero: ");
            scanf("\n%i", &numero);

            // Empilhando o dado
            empilhar(&topo, numero);

            system("cls");
            // Imprimindo pilha armazenada
            imprimir_pilha(topo);

            break;
        case 2:
            numero = desempilhar(&topo);

            system("cls");

            printf("\n Numero desempilhado: %d \n", numero);

            imprimir_pilha(topo);

            break;
        default:
            printf("Escolha invalida.\n\n");

            break;
        }
        menu();
        scanf("%i", &opcao);
    }
    system("cls");
    system("pause");
}
