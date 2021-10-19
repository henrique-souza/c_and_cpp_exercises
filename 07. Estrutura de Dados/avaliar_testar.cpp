// Lista Simplesmente Encadeada
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Declaracao da Estrutura Nodo
typedef struct sNodo
{
	int info;
	struct sNodo *prox;
} Nodo;

// Declaracao da Estrutura Lista Simplesmente Encadeada
typedef struct sListaSimplesEnc
{
	Nodo *prim;

} ListaSimplesmenteEncadeada;

// Criar Lista Vazia
void criarLista(ListaSimplesmenteEncadeada *pList)
{
	pList->prim = NULL;
}

// Mostrar Elementos da Lista
void imprimirListasSalvas(ListaSimplesmenteEncadeada *pList)
{
	Nodo *ponteiro;
	printf("Lista: ");
	for (ponteiro = pList->prim; ponteiro != NULL; ponteiro = ponteiro->prox)
	{
		printf("%d -> ", ponteiro->info);
	}
	printf("NULL\n");
}

// Inserir no Inicio da Lista
void inserirNoInicioDaLista(ListaSimplesmenteEncadeada *pList, int v)
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
		printf("Memória Insuficiente\n");
	}
}

// Remover no Inicio da Lista
void removerIni(ListaSimplesmenteEncadeada *pList)
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

// Remover um Elemento Especifico da Lista
void removerEle(ListaSimplesmenteEncadeada *pList, int v)
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
			printf("Valor não encontrado\n");
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

// Remover Todos os Elementos da Lista
void removerTudo(ListaSimplesmenteEncadeada *pList)
{
	Nodo *ponteiro;
	ponteiro = pList->prim;

	while (ponteiro != NULL)
	{

		free(ponteiro);
		ponteiro = ponteiro->prox;
		pList->prim = ponteiro;
	}
}

// Alterar Elemento da Lista
void alterarEle(ListaSimplesmenteEncadeada *pList, int v1, int v2)
{

	Nodo *pAtu;

	pAtu = pList->prim;
	while (pAtu != NULL)
	{

		if (pAtu->info == v1)
		{

			pAtu->info = v2;
		}

		pAtu = pAtu->prox;
	}
}

// Lista Vazia
int imprimirListaVazia(ListaSimplesmenteEncadeada *pList)
{
	return (pList->prim == NULL);
}

// Programa Principal
int main()
{
	setlocale(LC_ALL, "portuguese");

	ListaSimplesmenteEncadeada minhaLista;

	int valor, opcaoEscolhida, valorAlt;

	criarLista(&minhaLista);

	while (1)
	{
		
		printf("\n(1) Inserir elemento no inicio da Lista\n");
		printf("(2) Remover elemento no inicio da Lista\n");
		printf("(3) Remover elemento especifico da Lista\n");
		printf("(4) Mostrar Lista\n");
		printf("(5) Apagar todos os elementos da Lista\n");
		printf("(6) Alterar elemento da Lista\n");
		printf("(0) Sair\n");

		printf("Escolha uma das opcoes: ");
		scanf("%d", &opcaoEscolhida);

		system("cls");
		switch (opcaoEscolhida)
		{
			// inserir elemento no inicio
		case 1:
			printf("Valor? ");
			scanf("%d", &valor);
			inserirNoInicioDaLista(&minhaLista, valor);
			break;
			// remover o primeiro
		case 2:
			removerIni(&minhaLista);
			break;
		case 3: // remover determinado elemento
			printf("Valor? ");
			scanf("%d", &valor);
			removerEle(&minhaLista, valor);
			break;
		case 4: // mostrar lista
			if (imprimirListaVazia(&minhaLista))
			{
				printf("Lista vazia\n");
			}
			else
			{
				imprimirListasSalvas(&minhaLista);
			}
			break;
		// apaga todos os elementos da Lista
		case 5:
			removerTudo(&minhaLista);
			break;
		// altera o elemento escolhido pelo usuario
		case 6:
			printf("Valor a ser alterado? ");
			scanf("%d", &valor);
			printf("Novo valor? ");
			scanf("%d", &valorAlt);
			alterarEle(&minhaLista, valor, valorAlt);
			break;
		// apaga todas as listas salvas
		case 0:
			removerTudo(&minhaLista);
			exit(0);
		default:
			printf("Opcao inexistente!\n");
		}
	}
}