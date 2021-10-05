/*ALGORITMO
INICIO
declare n1, n2, subtracao
escreva Valor do Primeiro Número
leia n1
escreva Valor do Segundo Número
leia n2
subtracao <- n1 - n2
leia subtracao
FIM
*/
#include <stdio.h>

int main()
{
   float numeroUm, numeroDois, subtracao;
   printf("Valor do Primeiro Numero: ");
   scanf("%f", &numeroUm);
   printf("Valor do Segundo Numero: ");
   scanf("%f", &numeroDois);
   subtracao = numeroUm - numeroDois;
   printf("\nResultado da Subtracao = %.0f", subtracao);
   return 0;
}
