/*
2. Fazer com que o programa calcule/exiba o MAIOR VALOR DA MATRIZ.
*/
#include <stdio.h>

int main()
{
	int matriz[2][3], linha, coluna, maiorValorDaMatriz;

	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("Digite um numero para a linha %d, da coluna %d: ", linha + 1, coluna + 1);
			scanf("%d", &matriz[linha][coluna]);
		}
		printf("\n");
	}

	printf("\nDADOS ARMAZENADOS\n\n");
	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("%d\t", matriz[linha][coluna]);
		}
		printf("\n");
	}

	printf("\nMAIOR NUMERO DA MATRIZ");
	printf("\n\n");
	maiorValorDaMatriz = matriz[0][0];
	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			if (matriz[linha][coluna] > maiorValorDaMatriz)
				maiorValorDaMatriz = matriz[linha][coluna];
		}
	}
	printf("Maior valor da matriz sera o numero: %d", maiorValorDaMatriz);
	printf("\n");
}
