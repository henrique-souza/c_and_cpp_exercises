#include <bits/stdc++.h>

//
// Created by Henrique Souza on 05/09/2022.
// Graphic representation of this algorithm in ./README.md
//

struct Node {
    int value;
    struct Node *left_child, *right_child;
};

struct Node *new_node(int value) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->value = value;
    temp->left_child = temp->right_child = NULL;
    return temp;
}

// Corrige a posição dos valores na árvore
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

// Imprime os dados armazenados na árvore
void print_heap(int array_in[], int array_size) {
    printf("\n\t\tHEAP TREE BELOW\n\n");
    for (int index = 0; index < array_size; index++) {
        printf("%d\t", array_in[index]);
    }
}

// Função que insere valor na árvore
void insert_value(int array_in[], int &value, int key) {
    value = value + 1;

    array_in[value - 1] = key;

    heapify(array_in, value, value - 1);
}

// Função que deleta a raiz da árvore
//void deleteRoot(int array_in[], int array_index, int chosen_element) {
//    // Get the last element
//    chosen_element = array_in[array_index - 1];
//
//    // Replace root with last element
//    array_in[0] = chosen_element;
//
//    // Decrease size of heap by 1
//    array_index = array_index - 1;
//
//    // heapify the root node
//    heapify(array_in, array_index, 0);
//}

// Menu da aplicação
void menu() {
    printf("\n\n\tMENUS DE OPCOES\n"
           "1.\tConsultar valores do Heap\n"
           "2.\tInserir valor\n"
           "3.\tDeletar valor\n"
           "4.\tImprimir heap\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

// Percorrendo a árvore em ordem
void inorder_walk(struct Node *root) {
    if (root == NULL) {
        return;
    }
    if (root->left_child != NULL) {
        inorder_walk(root->left_child);
    }
    printf("%d ", root->value);
    if (root->right_child != NULL) {
        inorder_walk(root->right_child);
    }
}

int main() {
    int option, chosen_position;
    // heap = {17, 12, 8, 5, 3, 6, 2, 4, 2, 1};

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                exit(0);
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                break;
        }
    } while (chosen_position != 0);
}
