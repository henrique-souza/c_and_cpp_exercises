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

// Imprime os dados armazenados na árvore
void print_heap(int array_in[], int array_size) {
    printf("\n\t\tHEAP TREE BELOW\n\n");
    for (int index = 0; index < array_size; index++) {
        printf("%d\t", array_in[index]);
    }
}

// Função que insere valor na árvore
struct Node *insert_value(struct Node *father, int value) {
    if (father == NULL) return new_node(value);

    if (value < father->value) {
        father->left_child = insert_value(father->left_child, value);
    } else if (value > father->value) {
        father->right_child = insert_value(father->right_child, value);
    }
    return father;
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
