#include <stdio.h>
#include <stdlib.h>

//
// Created by Henrique Souza on 21/11/2022.
//

struct Node
{
	int value;
	struct Node* left_child, * right_child;
};

//struct Node* root;

struct Node* new_node(int value)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->value = value;
	temp->left_child = temp->right_child = NULL;
	return temp;
}

struct Node* father(struct Node* node, int value)
{
	if (node->value == value)
	{
		return NULL;
	}
	if ((node->left_child != NULL && node->left_child->value == value) ||
		(node->right_child != NULL && node->right_child->value == value))
	{
		return node;
	}
	if (node->value < value)
	{
		father(node->right_child, value);
	}
	else if (node->value > value)
	{
		father(node->left_child, value);
	}
	return NULL;
}

// Imprime os dados armazenados na árvore percorrendo-a em ordem
void print_heap_in_order(struct Node* node)
{
	if (node == NULL)
	{
		return;
	}

	if (node->left_child != NULL)
	{
		print_heap_in_order(node->left_child);
	}

	printf("%d  ", node->value);

	if (node->right_child != NULL)
	{
		print_heap_in_order(node->right_child);
	}
}

// Função que busca valor na árvore
struct Node* search_value(struct Node* node, int key)
{
	if (node == NULL || node->value == key)
	{
		return node;
	}
	else if (node->value > key)
	{
		search_value(node->left_child, key);
	}
	else
	{
		search_value(node->right_child, key);
	}
	return NULL;
}

// Função que insere valor na árvore
struct Node* insert_value(struct Node* node, int value)
{
	if (node == NULL)
		return new_node(value);

	if (value < node->value)
	{
		node->left_child = insert_value(node->left_child, value);
	}
	else if (value > node->value)
	{
		node->right_child = insert_value(node->right_child, value);
	}
	return node;
}

// Função que retorna o valor mínimo na árvore
struct Node* minimum_value(struct Node* node)
{
	if (node == NULL)
	{
		return NULL;
	}
	while (node->left_child != NULL)
	{
		node = node->left_child;
	}
	return node;
}

// Função que retorna o valor máximo na árvore
struct Node* maximum_value(struct Node* node)
{
	if (node == NULL)
	{
		return NULL;
	}
	while (node->right_child != NULL)
	{
		node = node->right_child;
	}
	return node;
}

// Função que retorna o successor_value na árvore
struct Node* successor_value(struct Node* node, int value)
{
	if (maximum_value(node) == NULL || value == maximum_value(node)->value || search_value(node, value) == NULL)
	{
		return NULL;
	}

	if (search_value(node, value) != NULL)
	{
		struct Node* assistant = search_value(node, value);

		if (assistant->right_child != NULL)
		{
			return minimum_value(assistant->right_child);
		}

		assistant = father(node, value);

		while (assistant != NULL && assistant->right_child != NULL && value == assistant->right_child->value)
		{
			value = assistant->value;
			assistant = father(node, assistant->value);
		}
		return assistant;
	}
	return NULL;
}

struct Node* delete_value(struct Node* node, int value)
{
	struct Node* father_variable;
	struct Node* successor_variable;
	struct Node* assistant = search_value(node, value);

	if (assistant != NULL)
	{
		if (assistant->left_child == NULL && assistant->right_child == NULL)
		{

			father_variable = father(node, assistant->value);

			if (father_variable != NULL && father_variable->right_child == assistant)
			{
				father_variable->right_child = NULL;
			}
			else
			{
				father_variable->left_child = NULL;
			}
		}
		else if (assistant->left_child == NULL || assistant->right_child == NULL)
		{
			father_variable = father(node, assistant->value);

			if (assistant->left_child == NULL)
			{
				if (father_variable->value > assistant->value)
				{
					father_variable->left_child = assistant->right_child;
				}
				else if (father_variable->value < assistant->value)
				{
					father_variable->right_child = assistant->right_child;
				}
			}
			else if (assistant->right_child == NULL)
			{
				if (father_variable->value > assistant->value)
				{
					father_variable->left_child = assistant->left_child;
				}
				else if (father_variable->value < assistant->value)
				{
					father_variable->right_child = assistant->left_child;
				}
			}
		}
		else
		{
			successor_variable = delete_value(node, successor_value(node, value)->value);
			assistant->value = successor_variable->value;
		}
		return assistant;
	}
	return NULL;
}

// Menu da aplicação
void menu()
{
	printf("\n\t\tMENUS DE OPCOES\n"
		   "1.\tImprimir heap em ordem (Inorder Walk)\n"
		   "2.\tImprimir o valor minimo do Heap\n"
		   "3.\tImprimir o valor maximo do Heap\n"
		   "4.\tImprimir o Sucessor no Heap\n"
		   "5.\tInserir novo valor no Heap\n"
		   "6.\tExcluir valor do Heap\n"
		   "0.\tSair\n"
		   "\n\nEscolha uma das opcoes: ");
}

int main()
{
	int option, HEAP_MAX_SIZE = 11, new_value, chosen_value;
	struct Node* heapNodes = NULL;

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

	do
	{
		menu();
		scanf("%d", &option);

		switch (option)
		{
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
			// Retorna o sucessor do valor apontado no Heap
			printf("\nDigite o valor a ser encontrado o sucessor no Heap: ");
			scanf("%d", &chosen_value);
			printf("\nSucessor de %d: %d", chosen_value, successor_value(heapNodes, chosen_value)->value);
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
			printf("\nDigite o valor a ser excluido do Heap: ");
			scanf("%d", &chosen_value);
			delete_value(heapNodes, chosen_value);
			print_heap_in_order(heapNodes);
			break;
		default:
			break;
		}
	} while (true);
}
