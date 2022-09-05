#include <stdio.h>
#include <stdlib.h>
#define POSITIONS 10

//
// Created by Henrique Souza on 05/09/2022.
//
int father(int *heap_value, int position)
{
    return heap_value[position / 2 - 1];
}

int left_child(int *heap_value, int position)
{
    return heap_value[position * 2 - 1];
}

int right_child(int *heap_value, int position)
{
    return heap_value[position * 2];
}

int main()
{
    int heap[POSITIONS] = {17, 12, 8, 5, 3, 6, 2, 4, 2, 1};
    int chosen_position, LOOPING = 1;

    do
    {
        printf("\n\n\tMENUS DE OPCOES\n");
        printf("0.\tSair\n");
        printf("\n\nEscolha uma das posicoes entre 1 e 10: ");
        scanf("%d", &chosen_position);
        system("cls");

        if (chosen_position >= 1 && chosen_position <= POSITIONS)
        {
            printf("\n\tValor do No da Arvore atual: %d", heap[chosen_position - 1]);
            printf("\n\tValor do pai: %d", father(heap, chosen_position));

            if (chosen_position * 2 - 1 > 10)
            {
                printf("\n\tO No '%d' nao tem filho da esquerda", heap[chosen_position - 1]);
            }
            else
            {
                printf("\n\tValor do filho da esquerda: %d", left_child(heap, chosen_position));
            }
            if (chosen_position * 2 >= 10)
            {
                printf("\n\tO No '%d' nao tem filho da direita\n", heap[chosen_position - 1]);
            }
            else
            {
                printf("\n\tValor do filho da direita: %d\n", right_child(heap, chosen_position));
            }
        }
        if (chosen_position < 0 || chosen_position > POSITIONS)
        {
            printf("\nPosicao invalida");
        }
    } while (chosen_position != 0);
}
