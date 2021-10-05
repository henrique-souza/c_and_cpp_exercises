/*
0. Modificá-lo para exibir o MAIOR VALOR POR LINHA.
*/
#include <stdio.h>

main()
{
    int matriz[2][3], linha, coluna, valorMaior;
    
    for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("Digite o numero da linha %d e coluna %d: ", linha + 1, coluna + 1);
			scanf("%d", &matriz[linha][coluna]);
		}
		printf("\n");
	}
	
	printf ("\nDADOS ARMAZENADOS\n\n");
	for (linha = 0; linha < 2; linha++)
	{
	    for (coluna = 0; coluna < 3; coluna++)
	    {
	        printf ("%d ", matriz[linha][coluna]); 
	    }
	    printf ("\n"); 
	}

	printf("\nMAIOR NUMERO POR LINHA");
	printf ("\n"); 
	for (linha = 0; linha < 2; linha++)
	{
		printf("\nLinha %d\n", linha + 1);
		valorMaior = 0;
		for (coluna = 0; coluna < 3; coluna++)
		{
		    if (matriz[linha][coluna] > valorMaior)
		    valorMaior = matriz[linha][coluna];
		}
		printf("Valor maior por linha: %d", valorMaior);
	}
	printf("\n");
}
