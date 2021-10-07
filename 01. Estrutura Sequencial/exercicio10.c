/*ALGORITMO
INICIO
declare areaQuadrado, ladoA, ladoB
escreva Qual valor do Lado A?
leia ladoA
escreva Qual valor do Lado B?
leia ladoB
areaQuadrado = ladoA * ladoB
escreva Qual a área do quadrado?
FIM
*/
#include <stdio.h>

int main()
{
    float areaDoQuadrado, ladoA, ladoB;
    printf("Qual valor do Lado A? ");
    scanf("%f", &ladoA);
    printf("Qual valor do Lado B? ");
    scanf("%f", &ladoB);
    areaDoQuadrado = ladoA * ladoB;
    printf("\nQual a área do quadrado? %.2f", areaDoQuadrado);

    return 0;
}