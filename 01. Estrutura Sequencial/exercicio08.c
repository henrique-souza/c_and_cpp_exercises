/*ALGORITMO
Objetivo: Converter e mostrar o peso em kg do usuário para Gramas
declare pesokg, pesog
escreva qual o peso em Kg? 
leia pesokg
pesog = pesokg*1000
O peso convertido para Gramas é pesog
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float pesoEmKilos, pesoEmGramas;
    printf("Qual o peso (em KG) a ser convertido?  ");
    scanf("%f", &pesoEmKilos);
    pesoEmGramas = pesoEmKilos * 1.000;
    printf("\n\nO peso convertido em gramas sera de: %-5.3f", pesoEmGramas);
    return 0;
}
