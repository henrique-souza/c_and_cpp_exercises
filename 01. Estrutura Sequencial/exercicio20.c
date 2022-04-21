/*pagina 30 e 51
objetivo: fazer um programa que receba a medida do angulo formado
por uma escada apoiada no chao e a distancia que a escada
estC! da parede. Calcular e mostrar a medida da escada para que
possa alcancar a ponta da parede
*/

#include <stdio.h>

int main()
{
    int angulo, distancia, escada, radiano;

    printf("Qual a medida do angulo (em graus) que a escada esta da parede? ");
    // Recebendo a medida do ângulo
    scanf("%d", &angulo);

    radiano = angulo * 3.14 / 180;

    // Medida do ângulo = escada apoiada e a distância da escada pra parece
    printf("Qual a distancia da escada ate a parede? ");
    scanf("%d", &distancia);

    escada = distancia / sin(radiano);

    printf("\nAngulo recebido: %d graus.", angulo);
    printf("\nDistancia que a escada esta da parede: %d metros.", distancia);
    printf("\nRadiano calculado: %d graus.", radiano);
    printf("\nMedida da escada para alcancar a ponta da parede: %d metros.", escada);

    return 0;
}