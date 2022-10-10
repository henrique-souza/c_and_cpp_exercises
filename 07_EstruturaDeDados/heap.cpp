#include <bits/stdc++.h>

//
// Created by Henrique Souza on 08/10/2022.
//

struct Node {
    int value;
    struct Node *left_child, *right_child;
};

struct Node *new_node(int value) {
    auto *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->value = value;
    temp->left_child = temp->right_child = nullptr;
    return temp;
}

// Imprime os dados armazenados na árvore percorrendo-a em ordem
void print_heap_in_order(struct Node *root) {
    if (root == nullptr) {
        return;
    }

    if (root->left_child != nullptr) {
        print_heap_in_order(root->left_child);
    }

    printf("%d ", root->value);

    if (root->right_child != nullptr) {
        print_heap_in_order(root->right_child);
    }
}

//void search(struct Node *root, int key) {
//    if (root == nullptr || root->left_child = key || root->right_child = key) {
//        return;
//    }
//
//    if (root->left_child != nullptr) {
//        print_heap_in_order(root->left_child);
//    }
//
//    printf("%d ", root->value);
//
//    if (root->right_child != nullptr) {
//        print_heap_in_order(root->right_child);
//    }
//}

// Função que insere valor na árvore
struct Node *insert_value(struct Node *father, int value) {
    if (father == nullptr) return new_node(value);

    if (value < father->value) {
        father->left_child = insert_value(father->left_child, value);
    } else if (value > father->value) {
        father->right_child = insert_value(father->right_child, value);
    }
    return father;
}

// Menu da aplicação
void menu() {
    printf("\n\n\tMENUS DE OPCOES\n"
           "1.\tImprimir heap em ordem (Inoder Walk)\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main() {
    int option;
    struct Node *root = nullptr;

    // Fazendo atribuição do tamanho do Heap (10)
    root = insert_value(root, 10);

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                exit(0);
            case 1:
                // Inserindo os valores aleatóriamente
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

                printf("\n\n");
                break;
            default:
                break;
        }
    } while (true);
}
