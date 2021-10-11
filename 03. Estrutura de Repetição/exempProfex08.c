#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, idade, olhos, cabelo, qtdIdPe = 0, somaId = 0, qtdId = 0, qtdOlhos = 0, qtdRu = 0;
	float peso, altura;

	for (i = 1; i <= 4; i++)
	{
		printf("\n------------ %d de 4 --------------------------------", i);
		printf("\nIdade..: ");
		scanf("%d", &idade);
		printf("Peso..: ");
		scanf("%f", &peso);
		printf("Altura..: ");
		scanf("%f", &altura);
		printf("Cor dos Olhos ");
		printf("\n[1] Azul ");
		printf("\n[2] Preto ");
		printf("\n[3] Verde ");
		printf("\n[4] Castanho ");
		printf("\nCor dos Olhos..: ");
		scanf("%d", &olhos);
		printf("Cor dos Cabelos ");
		printf("\n[1] Preto ");
		printf("\n[2] Castanho ");
		printf("\n[3] Loiro ");
		printf("\n[4] Ruivo ");
		printf("\nCor dos Cabelos..: ");
		scanf("%d", &cabelo);
		// Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos.
		if (idade > 50 && peso < 60)
		{
			qtdIdPe++;
		}
		// A média das idades das pessoas com altura inferior a 1.50 metros.
		if (altura < 1.50)
		{
			somaId = somaId + idade;
			qtdId++;
		}
		// A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas.
		if (olhos == 1)
		{
			qtdOlhos++;
		}
		// A quantidade de pessoas ruivas e que não possuem olhos azuis.
		if (cabelo == 4 && olhos != 1)
		{
			qtdRu++;
		}

	} // fim for
	// Saída de dados
	printf("\n-----------------------------Resultado--------------------------------------------------------------");
	printf("\nQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos..: % d", qtdIdPe);
	printf("\nMedia das idades das pessoas com altura inferior a 1.50 metros..: %d anos", somaId / qtdId);
	printf("\nPercentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %d%%", qtdOlhos * 100 / (i - 1));
	printf("\nQuantidade de pessoas que são ruivas e não tem olhos azuis..: %d", qtdRu);
	return 0;
}