// Lista Simplesmente Encadeada
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaracao da Estrutura Nodo
typedef struct sNodo
{
	int ponteiroInformado;
	struct sNodo *proximoPonteiro;
} Nodo;

// Declaracao da Estrutura Lista Simplesmente Encadeada
typedef struct sListaSimplesEnc
{
	Nodo *primeiroPonteiro;

} ListaSimplesmenteEncadeada;

// Criar Lista Vazia
void criarLista(ListaSimplesmenteEncadeada *apontandoLista)
{
	apontandoLista->primeiroPonteiro = NULL;
}

// Mostrar Elementos da Lista
void imprimirListasSalvas(ListaSimplesmenteEncadeada *apontandoLista)
{
	Nodo *ponteiro;
	printf("Lista: ");
	for (ponteiro = apontandoLista->primeiroPonteiro; ponteiro != NULL; ponteiro = ponteiro->proximoPonteiro)
	{
		printf("%d -> ", ponteiro->ponteiroInformado);
	}
	printf("NULL\n");
}

// Inserir no Inicio da Lista
void inserirNoInicioDaLista(ListaSimplesmenteEncadeada *apontandoLista, int valorArmazenado)
{
	Nodo *novoElemento;
	novoElemento = (Nodo *)malloc(sizeof(Nodo));
	if (novoElemento != NULL)
	{
		novoElemento->ponteiroInformado = valorArmazenado;
		novoElemento->proximoPonteiro = apontandoLista->primeiroPonteiro;
		apontandoLista->primeiroPonteiro = novoElemento;
	}
	else
	{
		printf("Memória Insuficiente\n");
	}
}

// Remover no Inicio da Lista
void removerIni(ListaSimplesmenteEncadeada *apontandoLista)
{
	Nodo *ponteiroAuxiliar = apontandoLista->primeiroPonteiro;
	if (ponteiroAuxiliar != NULL)
	{
		apontandoLista->primeiroPonteiro = apontandoLista->primeiroPonteiro->proximoPonteiro;
		free(ponteiroAuxiliar);
		printf("Valor Removido\n");
	}
	else
	{
		printf("Lista Vazia\n");
	}
}

// Remover um Elemento Especifico da Lista
void removerEle(ListaSimplesmenteEncadeada *apontandoLista, int valorArmazenado)
{
	Nodo *ponteiroAtual, *ponteiroAnterior;
	ponteiroAnterior = NULL;
	ponteiroAtual = apontandoLista->primeiroPonteiro;
	while (ponteiroAtual != NULL && ponteiroAtual->ponteiroInformado != valorArmazenado)
	{
		ponteiroAnterior = ponteiroAtual;
		ponteiroAtual = ponteiroAtual->proximoPonteiro;
	}
	if (ponteiroAnterior != NULL)
	{
		if (ponteiroAtual != NULL)
		{
			ponteiroAnterior->proximoPonteiro = ponteiroAtual->proximoPonteiro;
			free(ponteiroAtual);
			printf("Valor Removido1\n");
		}
		else
		{
			printf("Valor não encontrado\n");
		}
	}
	else
	{
		if (ponteiroAtual != NULL && ponteiroAtual->ponteiroInformado == valorArmazenado)
		{
			apontandoLista->primeiroPonteiro = ponteiroAtual->proximoPonteiro;
			free(ponteiroAtual);
			printf("Valor Removido2\n");
		}
		else
		{
			printf("Lista Vazia\n");
		}
	}
}

// Remover Todos os Elementos da Lista
void removerTudo(ListaSimplesmenteEncadeada *apontandoLista)
{
	Nodo *ponteiro;
	ponteiro = apontandoLista->primeiroPonteiro;

	while (ponteiro != NULL)
	{

		free(ponteiro);
		ponteiro = ponteiro->proximoPonteiro;
		apontandoLista->primeiroPonteiro = ponteiro;
	}
}

// Alterar Elemento da Lista
void alterarEle(ListaSimplesmenteEncadeada *apontandoLista, int valor1, int valor2)
{

	Nodo *ponteiroAtual;

	ponteiroAtual = apontandoLista->primeiroPonteiro;
	while (ponteiroAtual != NULL)
	{

		if (ponteiroAtual->ponteiroInformado == valor1)
		{

			ponteiroAtual->ponteiroInformado = valor2;
		}

		ponteiroAtual = ponteiroAtual->proximoPonteiro;
	}
}

// Lista Vazia
int imprimirListaVazia(ListaSimplesmenteEncadeada *apontandoLista)
{
	return (apontandoLista->primeiroPonteiro == NULL);
}

// Programa Principal
int main()
{
	setlocale(LC_ALL, "portuguese");

	ListaSimplesmenteEncadeada minhaLista;

	int valorArmazenado, opcaoEscolhida, valorAlterado;

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
			scanf("%d", &valorArmazenado);
			inserirNoInicioDaLista(&minhaLista, valorArmazenado);
			break;
		// remover o primeiro
		case 2:
			removerIni(&minhaLista);
			break;
		// remover determinado elemento
		case 3: 
			printf("Valor? ");
			scanf("%d", &valorArmazenado);
			removerEle(&minhaLista, valorArmazenado);
			break;
		// mostrar lista
		case 4: 
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
			scanf("%d", &valorArmazenado);
			printf("Novo valorArmazenado? ");
			scanf("%d", &valorAlterado);
			alterarEle(&minhaLista, valorArmazenado, valorAlterado);
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