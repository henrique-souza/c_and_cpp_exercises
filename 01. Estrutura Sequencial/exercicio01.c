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
   // declarando variaveis
   float numeroUm, numeroDois, subtracao;

   // entrada de dados
   printf("Valor do Primeiro Numero: ");
   scanf("%f", &numeroUm);
   printf("Valor do Segundo Numero: ");
   scanf("%f", &numeroDois);

   // operacao
   subtracao = numeroUm - numeroDois;

   // imprimindo resultado
   printf("\nResultado da Subtracao = %.2f", subtracao);
   return 0;
}
