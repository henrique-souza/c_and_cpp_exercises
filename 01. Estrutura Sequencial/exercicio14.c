/*INICIO
declare aNasc, aAtual, iAnos, iMeses, iDias, iSemanas
escreva Qual seu ano de nascimento?
leia aNasc
escreva Em que ano estamos?
leia aAtual
iAnos = aAtual - aNasc;
iMeses = iAnos / 12;
iDias = 365 / iAnos;
iSemanas = 52 / iAnos;
escreva Você tem iAnos anos atualmente
escreva Tem iDias dias de vida
escreva Tem iSemanas semanas de vida
escreva Tem iMeses meses de vida
FIM
*/
#include <stdio.h>

int main()
{
   float anoDeNascimento, anoAtual, idadeEmAnos, idadeEmMeses, idadeEmDias, idadeEmSemanas;
   printf("Qual seu ano de nascimento? ");
   scanf("%f", &anoDeNascimento);
   printf("Em que ano estamos? ");
   scanf("%f", &anoAtual);
   idadeEmAnos = anoAtual - anoDeNascimento;
   idadeEmMeses = idadeEmAnos / 12;
   idadeEmDias = 365 / idadeEmAnos;
   idadeEmSemanas = 52 / idadeEmAnos;
   printf("\nVocê tem %.0f anos atualmente.", idadeEmAnos);
   printf("\nTem %.3f dias de vida.", idadeEmDias);
   printf("\nTem %.3f semanas de vida.", idadeEmSemanas);
   printf("\nTem %.3f meses de vida.", idadeEmMeses);
   return 0;
}