/*
3. Fazer com que o programa exiba o MAIOR VALOR POR COLUNA.

Quando for postar: Fazer uma planilha com data, horario e o seu comentario (pra quando o professor pedi-la)
*/
#include <stdio.h>

main()
{
	int matriz[2][3], linha, coluna, valorMaiorPorColuna;

	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("Digite o numero da coluna %d e da linha %d: ", coluna + 1, linha + 1);
			scanf("%d", &matriz[coluna][linha]);
		}
		printf("\n");
	}

	printf("\nDADOS ARMAZENADOS\n\n");
	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("%d ", matriz[coluna][linha]);
		}
		printf("\n");
	}

	printf("\nMAIOR NUMERO POR COLUNA");
	printf("\n");
	valorMaiorPorColuna = matriz[coluna][linha];
	for (coluna = 0; coluna < 3; coluna++)
	{
		printf("\nColuna %d\n", coluna + 1);

		/*Em outras palavras, o algoritmo faz a checagem dos dados por linha, quando os valores das colunas forem 0,
		durante a verificação e exibição dos dados na tela.*/
		for (linha = 0; linha < 2; linha++)
		{
			if (matriz[coluna][linha] > valorMaiorPorColuna)
				valorMaiorPorColuna = matriz[coluna][linha];
		}
		printf("Valor maior por Coluna: %d", valorMaiorPorColuna);
		printf("\n");
	}
}
