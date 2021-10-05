/*INICIO
declare sAtual, c1, c2, multa, restSal
escreva Quanto é seu salário no momento?
leia sAtual
escreva Qual o valor da primeira conta a pagar?
leia c1
escreva Qual o valor da segunda conta a pagar?
leia c2
escreva Qual o valor da multa cobrada?
leia multa
sAtual =  sAtual - c1 - (multa*100/100);
c2 = sAtual - c2 - (multa*100/100);
restSal = c2
escreva Com todas constas pagas, aplicando as multas, restou restSal reais de seu salário
FIM
*/
#include <stdio.h>

int main()
{
   float salarioAtual, conta1, conta2, multa, restanteDoSalario;
   printf("Quanto é seu salário no momento? ");
   scanf("%f", &salarioAtual);
   printf("Qual o valor da primeira conta a pagar? ");
   scanf("%f", &conta1);
   printf("Qual o valor da segunda conta a pagar? ");
   scanf("%f", &conta2);
   printf("Qual o valor da multa cobrada? ");
   scanf("%f", &multa);
   salarioAtual = salarioAtual - conta1 - (multa * 100 / 100);
   conta2 = salarioAtual - conta2 - (multa * 100 / 100);
   restanteDoSalario = conta2;
   printf("\nCom todas constas pagas, aplicando as multas em cada, restou %.0f reais de seu salário.", restanteDoSalario);
   return 0;
}