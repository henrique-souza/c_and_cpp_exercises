/*
1. Modificá-lo para exibir o MENOR VALOR POR LINHA.
*/
#include <stdio.h>

main()
{
	int matriz[2][3], linha, coluna, valorMenor;

	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("Digite o numero para a linha %d, da coluna %d: ", linha + 1, coluna + 1);
			scanf("%d", &matriz[linha][coluna]);
		}
		printf("\n");
	}

	printf("\nDADOS ARMAZENADOS\n\n");
	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");
	}

	printf("\nMENOR NUMERO POR LINHA");
	printf("\n");
	for (linha = 0; linha < 2; linha++)
	{
		printf("\nLinha %d\n", linha + 1);
		valorMenor = matriz[linha][0];
		/*Em outras palavras, o algoritmo faz a checagem dos dados por linha, quando os valores das colunas forem 0,
		durante a verificação e exibição dos dados na tela.*/
		for (coluna = 0; coluna < 3; coluna++)
		{
			if (matriz[linha][coluna] < valorMenor)
				valorMenor = matriz[linha][coluna];
		}
		printf("Valor menor por linha: %d", valorMenor);
		printf("\n");
	}
}
