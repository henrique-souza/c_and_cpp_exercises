#include <cstdio>
#include <cstdlib>
#include <bits/stdc++.h>

#define MAX_LENGHT 10

//
// Created by Henrique Souza on 05/09/2022.
// Graphic representation of this algorithm in ./README.md
//
int father(int *heap_value, int position) {
    return heap_value[position / 2 - 1];
}

int left_child(int *heap_value, int position) {
    return heap_value[position * 2 - 1];
}

int right_child(int *heap_value, int position) {
    return heap_value[position * 2];
}

void heapify(int array_in[], int array_index, int subtree_root_index) {
    // Initialize largest_value as root
    int largest_value = subtree_root_index;
    int parent = (subtree_root_index - 1) / 2;
    int left_child = 2 * subtree_root_index + 1;
    int right_child = 2 * subtree_root_index + 2;
    // If left child is larger than root
    if (left_child < array_index && array_in[left_child] > array_in[largest_value]) {
        largest_value = left_child;
    }
    // If right child is larger than largest_value so far
    if (right_child < array_index && array_in[right_child] > array_in[largest_value]) {
        largest_value = right_child;
    }
    // If largest_value is not root
    if (largest_value != subtree_root_index) {
        std::swap(array_in[subtree_root_index], array_in[largest_value]);

        // Recursively heapify the affected subtree
        heapify(array_in, array_index, largest_value);
    }

    if (array_in[parent] > 0) {
        if (array_in[subtree_root_index] > array_in[parent]) {
            std::swap(array_in[subtree_root_index], array_in[parent]);
            heapify(array_in, array_index, parent);
        }
    }
}

void print_heap(int array_in[], int array_size) {
    printf("\n\t\tHEAP TREE BELOW\n\n");
    for (int index = 0; index < array_size; index++) {
        printf("%d\t", array_in[index]);
    }
}

void insert_value(int array_in[], int &value, int key) {
    value = value + 1;
    array_in[value - 1] = key;
    heapify(array_in, value, value - 1);
}

// Function to delete the root from Heap
void deleteRoot(int array_in[], int array_index, int chosen_element) {
    // Get the last element
    chosen_element = array_in[array_index - 1];
    // Replace root with last element
    array_in[0] = chosen_element;
    // Decrease size of heap by 1
    array_index = array_index - 1;
    // heapify the root node
    heapify(array_in, array_index, 0);
}

int main() {
    int option, /*new_value, value_to_delete,*/ chosen_position;
    int heap[MAX_LENGHT] = {17, 12, 8, 5, 3, 6, 2, 4, 2, 1};
    int new_lenght_heap = 11;
    int new_value = 15;
    int value_to_delete = 15;
    do {
        printf("\n\n\tMENUS DE OPCOES\n");
        printf("1.\tConsultar valores do Heap\n");
        printf("2.\tInserir valor\n");
        printf("3.\tDeletar valor\n");
        printf("4.\tImprimir heap\n");
        printf("0.\tSair\n");
        printf("\n\nEscolha uma das opcoes: ");
        scanf("%d", &option);
        switch (option) {
            case 0:
                exit(0);
            case 1:
                system("cls");

                printf("\n\nEscolha uma das posicoes entre 1 e 10: ");
                scanf("%d", &chosen_position);
                system("cls");
                if (chosen_position >= 1 && chosen_position <= MAX_LENGHT) {
                    printf("\n\tValor do No da Arvore atual: %d", heap[chosen_position - 1]);
                    printf("\n\tValor do pai: %d", father(heap, chosen_position));
                    if (chosen_position * 2 - 1 > 11) {
                        printf("\n\tO No '%d' nao tem filho da esquerda", heap[chosen_position - 1]);
                    } else {
                        printf("\n\tValor do filho da esquerda: %d do No: %d", left_child(heap, chosen_position),
                               heap[chosen_position - 1]);
                    }
                    if (chosen_position * 2 >= 11) {
                        printf("\n\tO No '%d' nao tem filho da direita\n", heap[chosen_position - 1]);
                    } else {
                        printf("\n\tValor do filho da direita: %d do No: %d\n", right_child(heap, chosen_position),
                               heap[chosen_position - 1]);
                    }
                }
                if (chosen_position < 0 || chosen_position > MAX_LENGHT) {
                    printf("\nPosicao invalida");
                }
                break;
            case 2:
                //system("cls");
                // printf("\n\nValor a ser inserido: ");
                // scanf("%d", &new_value);
                insert_value(heap, new_lenght_heap, new_value);
                print_heap(heap, MAX_LENGHT);
                break;
            case 3:
                //system("cls");
                // printf("\n\nValor a ser deletado: ");
                // scanf("%d", &value_to_delete);
                deleteRoot(heap, new_lenght_heap, value_to_delete);
                print_heap(heap, MAX_LENGHT);
                break;
            case 4:
                system("cls");
                print_heap(heap, MAX_LENGHT);
                break;
            default:
                break;
        }
    } while (chosen_position != 0);
}