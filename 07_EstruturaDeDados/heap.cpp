#include <stdio.h>
#include <stdlib.h>

//
// Created by Henrique Souza on 20/11/2022.
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

// Imprime os dados armazenados na árvore percorrendo-a em ordem
void print_heap_in_order(struct Node *node) {
    if (node == NULL) {
        return;
    }

    if (node->left_child != NULL) {
        print_heap_in_order(node->left_child);
    }

    printf("%d  ", node->value);

    if (node->right_child != NULL) {
        print_heap_in_order(node->right_child);
    }
}

// Função que busca valor na árvore
void search(struct Node *node, int key) {
    if (node == NULL || node->value == key) {
        return;
    } else if (node->value > key) {
        search(node->left_child, key);
    } else {
        search(node->right_child, key);
    }
}

// Função que insere valor na árvore
struct Node *insert_value(struct Node *node, int value) {
    if (node == NULL)
        return new_node(value);

    if (value < node->value) {
        node->left_child = insert_value(node->left_child, value);
    } else if (value > node->value) {
        node->right_child = insert_value(node->right_child, value);
    }
    return node;
}

// Função que retorna o valor mínimo na árvore
struct Node *minimum_value(struct Node *node) {
    if (node == NULL) {
        return NULL;
    }
    while (node->left_child != NULL) {
        node = node->left_child;
    }
    return node;
}

// Função que retorna o valor máximo na árvore
struct Node *maximum_value(struct Node *node) {
    if (node == NULL) {
        return NULL;
    }
    while (node->right_child != NULL) {
        node = node->right_child;
    }
    return node;
}

//// Função que retorna o sucessor na árvore
//struct Node *successor(struct Node *node, int value) {
//
//}

// Menu da aplicação
void menu() {
    printf("\n\t\tMENUS DE OPCOES\n"
           "1.\tImprimir heap em ordem (Inorder Walk)\n"
           "2.\tImprimir o valor minimo do Heap\n"
           "3.\tImprimir o valor maximo do Heap\n"
           "4.\tImprimir o sucessor\n"
           "5.\tInserir novo valor no Heap\n"
           "6.\tExcluir valor do Heap\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main() {
    int option, HEAP_MAX_SIZE = 11, new_value;
    struct Node *heapNodes = NULL;

    // Fazendo atribuição do tamanho do Heap
    heapNodes = insert_value(heapNodes, HEAP_MAX_SIZE);

    // Inserindo valores no Heap
    insert_value(heapNodes, 17);
    insert_value(heapNodes, 12);
    insert_value(heapNodes, 8);
    insert_value(heapNodes, 5);
    insert_value(heapNodes, 3);
    insert_value(heapNodes, 6);
    insert_value(heapNodes, 2);
    insert_value(heapNodes, 4);
    insert_value(heapNodes, 2);
    insert_value(heapNodes, 1);

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                exit(0);
            case 1:
                // Imprimindo em ordem
                printf("\n\tHEAP EM ORDEM\n");
                print_heap_in_order(heapNodes);
                printf("\n");
                break;
            case 2:
                // Retorna o valor mínimo do Heap
                printf("\nMinimo da arvore: %d \n", minimum_value(heapNodes)->value);
                break;
            case 3:
                // Retorna o valor máximo do Heap
                printf("\nMaximo da arvore: %d \n", maximum_value(heapNodes)->value);
                break;
            case 4:
                // Retorna o sucessor do Heap
                break;
            case 5:
                // Insere novo valor no Heap
                printf("\nDigite novo valor a ser inserido no Heap: ");
                scanf("%d", &new_value);

                insert_value(heapNodes, new_value);

                printf("\n\tValor inserido: \n");
                print_heap_in_order(heapNodes);

                printf("\n");
                break;
            case 6:
                // Excluir valor apontado do Heap
                break;
            default:
                break;
        }
    } while (true);
}
