#include <stdio.h>
#include <stdlib.h>

//
// Created by Henrique Souza on 28/08/2022.
//
struct Item
{
    int numero;
    struct Item *proximo;
};

void inicializando_pilha(Item **topo)
{
    *topo = NULL;
}

bool pilha_vazia(Item **topo)
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

void empilhar(Item **topo, int elemento)
{
    Item *novo;

    novo = (Item *)malloc(sizeof(Item));

    novo->numero = elemento;

    // -> proximo recebe o elemento que estava no topo.
    novo->proximo = *topo;

    *topo = novo;
}

int desempilhar(Item **topo)
{
    int result;
    Item *auxiliar;

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

        *topo = (*topo)->proximo;

        free(auxiliar);

        return result;
    }
}

void imprimir_pilha(Item *topo)
{
    int i = 0;
    Item *item;

    printf("\n\n Listando...\n\n");
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

            item = item->proximo;
        }
    }
    printf("---------------------------------\n");
}

void menu()
{
    printf("\n\n\t\tMENU DE OPCOES\n\n"
           "1.\tEmpilhar elemento\n"
           "2.\tDesempilhar\n"
           "0.\t Sair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    Item *topo = NULL;
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

            // Imprimindo pilha armazenada
            imprimir_pilha(topo);

            break;
        case 2:
            numero = desempilhar(&topo);

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
