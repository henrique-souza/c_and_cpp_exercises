/*objetivo: fazer um programa que receba os valores dos catetos oposto e adjacente e calcular a hipotenusa de um triangulo reto
ALGORITMO
declare copost, cadja, calcat, hipo
escreva Qual o valor do cateto Oposto?
leia copost
escreva Qual o valor do cateto adjacente?
leia cadja
calcat = pow(copost,2)+pow(cadja,2)
hipo = sqrt(calcat)
escreva O valor da hipotenusa e de hipo
FIM
*/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int catetoOposto, catetoAdjacente, calculoDosCatetos, hipotenusa;
    printf("Qual o valor do cateto oposto? ");
    scanf("%d", &catetoOposto);
    printf("Qual o valor do cateto adjacente? ");
    scanf("%d", &catetoAdjacente);
    calculoDosCatetos = pow(catetoOposto, 2) + pow(catetoAdjacente, 2);
    hipotenusa = sqrt(calculoDosCatetos);
    printf("O valor da hipotenusa e de %d", hipotenusa);
    return 0;
}