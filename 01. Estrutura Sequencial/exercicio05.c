/*ALGORITMO
INICIO
declare precoDoproduto, desconto, novoPreco
escreva Valor do Produto
leia precoDoproduto
desconto = 0.10
novoPreco = precoDoproduto - precoDoproduto*desconto
leia novoPreco
FIM
*/
#include <stdio.h>

int main()
{
    float precoDoproduto, desconto, novoPrecoDoProduto;

    printf("Valor do Produto: ");
    scanf("%f", &precoDoproduto);

    desconto = 0.10;
    novoPrecoDoProduto = precoDoproduto - precoDoproduto * desconto;
    
    printf("\nResultado do Preco com Desconto = %.2f", novoPrecoDoProduto);
    return 0;
}