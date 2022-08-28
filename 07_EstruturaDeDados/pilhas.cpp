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

void Inicializar(Item **topo)
{
    *topo = nullptr;
}

bool EstaVazia(Item **topo)
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

void Empilhar(Item **topo, int elemento)
{
    Item *novo;

    novo = (Item *)malloc(sizeof(Item));

    novo->numero = elemento;

    // -> proximo recebe o elemento que estava no topo.
    novo->proximo = *topo;

    *topo = novo;
}

int Desempilhar(Item **topo)
{
    int result;
    Item *auxiliar;

    if (EstaVazia(topo))
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

void MostrarPilha(Item *topo)
{
    int i = 0;
    Item *item;

    printf("\n\n Listando...\n\n");
    printf("---------------------------------\n");

    if (EstaVazia(&topo))
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

void Menu()
{
    printf("\n\n\t\tMENU DE OPCOES\n\n"
           "1. Empilhar elemento \n"
           "2. Desempilhar \n"
           "0. Sair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    Item *topo = NULL;
    int opcao, numero;

    Menu();
    scanf("%i", &opcao);

    while (opcao != 0)
    {
        switch (opcao)
        {
        case 1:
            printf("Digite um numero: ");
            scanf("\n%i", &numero);

            // Empilhando o dado
            Empilhar(&topo, numero);

            // Imprimindo pilha armazenada
            MostrarPilha(topo);

            break;
        case 2:
            numero = Desempilhar(&topo);

            printf("\n Numero desempilhado: %d \n", numero);

            MostrarPilha(topo);

            break;
        default:
            printf("Escolha invalida.\n\n");

            break;
        }
        Menu();
        scanf("%i", &opcao);
    }
    system("cls");
    system("pause");
}
