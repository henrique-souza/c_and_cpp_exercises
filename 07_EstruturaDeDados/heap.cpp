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
void print_heap_in_order(struct Node *root) {
    if (root == NULL) {
        return;
    }

    if (root->left_child != NULL) {
        print_heap_in_order(root->left_child);
    }

    printf("%d ", root->value);

    if (root->right_child != NULL) {
        print_heap_in_order(root->right_child);
    }
}

// Função que busca valor na árvore
void search(struct Node *root, int k) {
    if (root == NULL || root->value == k) {
        return;
    } else if (root->value > k) {
        search(root->left_child, k);
    } else {
        search(root->right_child, k);
    }
}

// Função que insere valor na árvore
struct Node *insert_value(struct Node *father, int value) {
    if (father == NULL)
        return new_node(value);

    if (value < father->value) {
        father->left_child = insert_value(father->left_child, value);
    } else if (value > father->value) {
        father->right_child = insert_value(father->right_child, value);
    }
    return father;
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

struct Node *maximum_value(struct Node *node) {
    if (node == NULL) {
        return NULL;
    }
    while (node->right_child != NULL) {
        node = node->right_child;
    }
    return node;
}

// Menu da aplicação
void menu() {
    printf("\n\n\tMENUS DE OPCOES\n"
           "1.\tImprimir heap em ordem (Inoder Walk)\n"
           "2.\tBuscar elemento do Heap\n"
           "3.\tImprimir o valor minimo do Heap\n"
           "4.\tImprimir o valor maximo do Heap\n"
           "5.\tImprimir o sucessor\n"
           "6.\tInserir novo valor no Heap\n"
           "7.\tExcluir valor do Heap\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main() {
    int option, value, LOOPING = 1;
    struct Node *root = NULL;

    // Fazendo atribuição do tamanho do Heap (10)
    root = insert_value(root, 10);

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                exit(0);
            case 1:
                // Inserindo os valores aleatoriamente
                insert_value(root, 17);
                insert_value(root, 12);
                insert_value(root, 8);
                insert_value(root, 5);
                insert_value(root, 3);
                insert_value(root, 6);
                insert_value(root, 2);
                insert_value(root, 4);
                insert_value(root, 2);
                insert_value(root, 1);

                // Imprimindo em ordem
                print_heap_in_order(root);

                printf("\n");
                break;
            case 2:
                printf("\nDigite valor procurado: ");
                scanf("%d", value);
                search(root, value);
                break;
            case 3:
                // Retorna o valor mínimo do Heap
                printf("Minimo da arvore: %d", minimum_value(root)->value);
                break;
            case 4:
                // Retorna o valor máximo do Heap
                printf("Maximo da arvore: %d", maximum_value(root)->value);
                break;
            case 5:
                // Retorna o sucessor do Heap
                break;
            case 6:
                // Insere novo valor no Heap
                break;
            case 7:
                // Excluir valor apontado do Heap
                break;
            default:
                break;
        }
    } while (LOOPING != 0);
}
