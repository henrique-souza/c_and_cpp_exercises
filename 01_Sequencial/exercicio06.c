/*ALGORITMO
INICIO
declare salarioFixo, valorDevendas, comissao, salarioFinal
escreva Valor do Salário Fixo
leia salarioFixo
escreva Valor das Vendas
leia valorDevendas
comissao = (valorDevendas*4)/100;
salarioFinal = salarioFixo + comissao
leia salarioFinal
FIM
*/
#include <stdio.h>

int main()
{
    float salarioFixo, valorDevendas, comissao = 0.04, salarioFinal;

    printf("Valor do Salário Fixo: ");
    scanf("%f", &salarioFixo);
    printf("Valor das Vendas: ");
    scanf("%f", &valorDevendas);

    comissao = valorDevendas * comissao;
    salarioFinal = salarioFixo + comissao;
    
    printf("\nResultado do Salário com Comissão = %.2f", salarioFinal);
    return 0;
}