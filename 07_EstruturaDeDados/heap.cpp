#include <stdio.h>
#include <stdlib.h>
#define POSICOES 10

//
// Created by Henrique Souza on 22/09/2022.
//
int pai(int *valor_heap, int posicao)
{
    return valor_heap[posicao / 2 - 1];
}

int filho_esquerda(int *valor_heap, int posicao)
{
    return valor_heap[posicao * 2 - 1];
}

int filho_direita(int *valor_heap, int posicao)
{
    return valor_heap[posicao * 2];
}

int main()
{
    int heap[POSICOES] = {17, 12, 8, 5, 3, 6, 2, 4, 2, 1};
    int posicao_escolhida, LOOPING = 1;

    do
    {
        printf("\n\n\tMENUS DE OPCOES\n");
        printf("0.\tSair\n");
        printf("\n\nEscolha uma das posicoes entre 1 e 10: ");
        scanf("%d", &posicao_escolhida);
        system("cls");

        if (posicao_escolhida >= 1 && posicao_escolhida <= POSICOES)
        {
            printf("\n\tValor do No da Arvore atual: %d", heap[posicao_escolhida - 1]);
            printf("\n\tValor do pai: %d", pai(heap, posicao_escolhida));

            if (posicao_escolhida * 2 - 1 > 10)
            {
                printf("\n\tO No '%d' nao tem filho da esquerda", heap[posicao_escolhida - 1]);
            }
            else
            {
                printf("\n\tValor do filho da esquerda: %d", filho_esquerda(heap, posicao_escolhida));
            }
            if (posicao_escolhida * 2 >= 10)
            {
                printf("\n\tO No '%d' nao tem filho da direita\n", heap[posicao_escolhida - 1]);
            }
            else
            {
                printf("\n\tValor do filho da direita: %d\n", filho_direita(heap, posicao_escolhida));
            }
        }
        if (posicao_escolhida < 0 || posicao_escolhida > POSICOES)
        {
            printf("\nPosição invalida");
        }
    } while (posicao_escolhida != 0);
}
