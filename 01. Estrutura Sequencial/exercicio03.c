/*
; é um sinal para "fechar comando"
\n é para o programa dar "quebra de linha"
%.2f, o ".0, .1 ou .2" é para exibir apenas zero, uma ou duas casas decimais no resultado
*/
/*ALGORITMO
INICIO
declare n1, n2, divisao
escreva Valor do Primeiro Número
leia n1
escreva Valor do Segundo Número
leia n2
divisao <-- n1 / n2
leia divisao
FIM
*/
#include <stdio.h>

int main()
{
    float numeroUm, numeroDois, divisao;
    printf("Valor do Primeiro Número: ");
    scanf("%f", &numeroUm);
    printf("Valor do Segundo Número: ");
    scanf("%f", &numeroDois);
    divisao = numeroUm / numeroDois;
    printf("\nResultado da Divisão = %.2f", divisao);
    return 0;
}
