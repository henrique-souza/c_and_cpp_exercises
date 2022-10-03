#include <stdio.h>
#include <stdlib.h>

struct Pilha
{
    int topo;
    int capa;     // capacidade
    float *pElem; // primeiro_elemento
};

void criar_pilha(Pilha *pilha, int capa)
{
    pilha->topo = -1;
    pilha->capa = capa;
    pilha->pElem = (float *)malloc(capa * sizeof(float));
}

int pilha_vazia(Pilha *pilha)
{
    if (pilha->topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pilha_cheia(Pilha *pilha)
{
    if (pilha->topo == pilha->capa - 1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void empilhar(Pilha *pilha, float elemento)
{
    pilha->topo++;
    pilha->pElem[pilha->topo] = elemento;
}

float desempilhar(Pilha *pilha)
{
    float auxiliar = pilha->pElem[pilha->topo];
    pilha->topo--;
    return auxiliar;
}

float topo_da_pilha(Pilha *pilha)
{
    return pilha->pElem[pilha->topo];
}

void imprimir_pilha(Pilha *pilha)
{
    for (int i = pilha->topo; i >= 0; i--)
    {
        printf("%d", pilha->pElem[i]);
        printf("\n");
    }
    // int i = 0;
    // Pilha *item;
    // printf("\n\tPILHA\n\n");
    // printf("---------------------------------\n");
    // if (pilha_vazia(&pilha) == 2)
    // {
    //     printf("A Pilha esta vazia!\n");
    // }
    // else
    // {
    //     item = topo;
    //     while (item != NULL)
    //     {
    //         i++;
    //         printf("[%i] -> %i\n", i, item->capa);
    //         item = item->pElem;
    //     }
    // }
    // printf("---------------------------------\n");
}

void menu()
{
    printf("\n\n\tMENU DE OPCOES\n\n"
           "1.\tEmpilhar (Push)\n"
           "2.\tDesempilhar (Pop)\n"
           "3.\tMostrar topo\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    Pilha pilha_criada;
    int opcao, capacidade;
    float valor;

    printf("\nQual a capacidade da pilha? ");
    scanf("%d", &capacidade);

    criar_pilha(&pilha_criada, capacidade);

    while (1)
    {

        menu();
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 0:
            exit(0);
            break;
        case 1: // Push
            if (pilha_cheia(&pilha_criada) == 1)
            {
                printf("\nPilha esta cheia!\n");
            }
            else
            {
                system("cls");
                printf("Digite um valor a ser armazenado na pilha: ");
                scanf("%f", &valor);

                // Empilhando o dado
                empilhar(&pilha_criada, valor);

                system("cls");
                // Imprimindo topo armazenada
                imprimir_pilha(&pilha_criada);
            }
            break;
        case 2: // Pop
            if (pilha_vazia(&pilha_criada) == 1)
            {
                printf("\nPilha vazia!\n");
            }
            else
            {
                valor = desempilhar(&pilha_criada);

                system("cls");

                printf("\n Numero desempilhado: %.1f \n", valor);

                imprimir_pilha(&pilha_criada);
            }
            break;
        case 3: // Mostrar o topo
            if (pilha_vazia(&pilha_criada) == 1)
            {
                printf("\nPilha vazia!\n");
            }
            else
            {
                valor = topo_da_pilha(&pilha_criada);
                printf("\nTopo atual da Pilha: %.1f\n", valor);
            }

            break;
        default:
            printf("Escolha invalida.\n\n");

            break;
        }
    }
    system("cls");
    system("pause");
}
