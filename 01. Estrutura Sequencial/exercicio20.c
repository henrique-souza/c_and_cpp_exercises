/*pagina 30 e 51
objetivo: fazer um programa que receba a medida do angulo formado
por uma escada apoiada no chC#o e a distancia que a escada 
estC! da parede. Calcular e mostrar a medida da escada para que 
possa alcancar a ponta da parede
*/
#include <stdio.h>

int main()
{
    int angulo;
    float distancia, altura, escada, radiano;
    printf("Qual a medida do angulo (em graus) que a escada esta da parede? ");
    scanf("%d", &angulo);
    printf("Qual a distancia da escada ate a parede? ");
    scanf("%f", &distancia);
    printf("Angulo: %d graus.", angulo);
    printf("\nDistancia: %f graus.", distancia);
    return 0;
}