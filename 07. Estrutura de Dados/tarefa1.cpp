/*
REALIZAR A TAREFA A1 ATÉ DIA 19/10/2021
*/
/* Comentario: Lista Simplesmente Encadeada */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Comentario: Declaracao da Estrutura Nodo */
typedef struct sNodo
{
	int info;
	struct sNodo *prox;
} Nodo;

/* Comentario: Declaracao da Estrutura Lista Simplesmente Encadeada */
typedef struct sListaSimplesEnc
{
	Nodo *prim;

} ListaSimplesEnc;

/* Comentario: Criar Lista Vazia */
void criarLista(ListaSimplesEnc *pList)
{
	pList->prim = NULL;
}

/* Comentario: Mostrar Elementos da Lista */
void mostrarLista(ListaSimplesEnc *pList)
{
	Nodo *p;
	printf("Lista: ");
	for (p = pList->prim; p != NULL; p = p->prox)
	{
		printf("%d -> ", p->info);
	}
	printf("NULL\n");
}

/* Comentario: Inserir no Inicio da Lista */
void inserirIni(ListaSimplesEnc *pList, int v)
{
	Nodo *novo;
	novo = (Nodo *)malloc(sizeof(Nodo));
	if (novo != NULL)
	{
		novo->info = v;
		novo->prox = pList->prim;
		pList->prim = novo;
	}
	else
	{
		printf("Mem�ria Insuficiente\n");
	}
}

/* Comentario: Remover no Inicio da Lista */
void removerIni(ListaSimplesEnc *pList)
{
	Nodo *pAux = pList->prim;
	if (pAux != NULL)
	{
		pList->prim = pList->prim->prox;
		free(pAux);
		printf("Valor Removido\n");
	}
	else
	{
		printf("Lista Vazia\n");
	}
}

/* Comentario: Remover um Elemento Especifico da Lista */
void removerEle(ListaSimplesEnc *pList, int v)
{
	Nodo *pAtu, *pAnt;
	pAnt = NULL;
	pAtu = pList->prim;
	while (pAtu != NULL && pAtu->info != v)
	{
		pAnt = pAtu;
		pAtu = pAtu->prox;
	}
	if (pAnt != NULL)
	{
		if (pAtu != NULL)
		{
			pAnt->prox = pAtu->prox;
			free(pAtu);
			printf("Valor Removido1\n");
		}
		else
		{
			printf("Valor n�o encontrado\n");
		}
	}
	else
	{
		if (pAtu != NULL && pAtu->info == v)
		{
			pList->prim = pAtu->prox;
			free(pAtu);
			printf("Valor Removido2\n");
		}
		else
		{
			printf("Lista Vazia\n");
		}
	}
}

/* Comentario: Remover Todos os Elementos da Lista */
/* Tarefa */
void removerTudo(ListaSimplesEnc *pList)
{
}

/* Comentario: Alterar Elemento da Lista */
/* Tarefa */
void alterarEle(ListaSimplesEnc *pList, int v1, int v2)
{
}

/* Comentario: Lista Vazia */
int estaVazia(ListaSimplesEnc *pList)
{
	return (pList->prim == NULL);
}

/* Comentario: Programa Principal */
main()
{
	setlocale(LC_ALL, "portuguese");
	ListaSimplesEnc minhaLista;
	int valor, op, valorAlt;
	criarLista(&minhaLista);
	printf("Escolha uma op��o:\n");
	while (1)
	{
		printf("\n(1) Inserir elemento no in�cio da Lista\n");
		printf("(2) Remover elemento no in�cio da Lista\n");
		printf("(3) Remover elemento espec�fico da Lista\n");
		printf("(4) Mostrar Lista\n");
		printf("(5) Apagar todos os elementos da Lista\n");
		printf("(6) Alterar elemento da Lista\n");
		printf("(0) Sair\n");
		printf(" ? ");
		scanf("%d", &op);
		system("cls");
		switch (op)
		{
		case 1: // inserir elemento no inicio
			printf("Valor? ");
			scanf("%d", &valor);
			inserirIni(&minhaLista, valor);
			break;
		case 2: // remover o primeiro
			removerIni(&minhaLista);
			break;
		case 3: // remover determinado elemento
			printf("Valor? ");
			scanf("%d", &valor);
			removerEle(&minhaLista, valor);
			break;
		case 4: // mostrar lista
			if (estaVazia(&minhaLista))
			{
				printf("Lista vazia\n");
			}
			else
			{
				mostrarLista(&minhaLista);
			}
			break;
		case 5: // apagar todos os elementos da Lista
			removerTudo(&minhaLista);
			break;
		case 6: // alterar um elemento
			printf("Valor a ser alterado? ");
			scanf("%d", &valor);
			printf("Novo valor? ");
			scanf("%d", &valorAlt);
			alterarEle(&minhaLista, valor, valorAlt);
			break;
		case 0: // abandonar o programa
			removerTudo(&minhaLista);
			exit(0);
		default:
			printf("Opcao inexistente!\n");
		}
	}
}
