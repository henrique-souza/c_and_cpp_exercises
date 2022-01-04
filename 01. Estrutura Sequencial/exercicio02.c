/*
; é um sinal para "fechar comando"
\n é para o programa dar "quebra de linha"
%.2f, o ".0, .1 ou .2" é para exibir apenas zero, uma ou duas casas decimais no resultado
*/
/*ALGORITMO
INICIO
declare n1, n2, n3, multiplicacao
escreva Valor do Primeiro Número
leia n1
escreva Valor do Segundo Número
leia n2
escreva Valor do Terceiro Número
leia n3
multiplicacao <-- n1 * n2 * n3
leia multiplicacao
FIM
*/
#include <stdio.h>

int main()
{
    float numeroUm, numeroDois, numeroTres, multiplicacao;

    printf("Valor do Primeiro Numero: ");
    scanf("%f", &numeroUm);
    printf("Valor do Segundo Numero: ");
    scanf("%f", &numeroDois);
    printf("Valor do Terceiro Numero: ");
    scanf("%f", &numeroTres);

    multiplicacao = numeroUm * numeroDois * numeroTres;
    
    printf("\nResultado da Multiplicacao = %.2f", multiplicacao);
    return 0;
}
