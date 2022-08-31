#include <stdio.h>
#include <stdlib.h>

//
// Created by Henrique Souza on 28/08/2022.
//
struct Pilha
{
    int numero;
    struct Pilha *proximo;
};

void inicializando_pilha(Pilha **topo)
{
    *topo = NULL;
}

bool pilha_vazia(Pilha **topo)
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

void empilhar(Pilha **topo, int elemento)
{
    Pilha *novo;

    novo = (Pilha *)malloc(sizeof(Pilha));

    novo->numero = elemento;

    // -> proximo recebe o elemento que estava no topo.
    novo->proximo = *topo;

    *topo = novo;
}

int desempilhar(Pilha **topo)
{
    int result;
    Pilha *auxiliar;

    if (pilha_vazia(topo))
    {
        printf("\n stack underflow! \n");

        exit(1);
    }
    else
    {
        // Elemento retirado do topo
        result = (*topo)->numero;

        auxiliar = *topo;

        *topo = (*topo)->proximo;

        free(auxiliar);

        return result;
    }
}

void imprimir_pilha(Pilha *topo)
{
    int ocorrencia = 0;
    Pilha *item;

    printf("\t\tPilha\n\n");

    if (pilha_vazia(&topo))
    {
        printf("A Pilha esta vazia!\n");
    }
    else
    {
        item = topo;

        while (item != NULL)
        {
            ocorrencia++;

            printf("[%i] -> %i\n", ocorrencia, item->numero);

            item = item->proximo;
        }
    }
}

void menu()
{
    printf("\n\tMENU DE OPCOES\n\n"
           "1.\tEmpilhar elemento\n"
           "2.\tDesempilhar\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    Pilha *topo = NULL;
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

            imprimir_pilha(topo);

            printf("\n Numero desempilhado: %d \n", numero);

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
