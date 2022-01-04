//pagina 30 e 51 (pc)
//pagina 45 e 66 (PDF Google Drive)
//objetivo: calcular quantos W de potência de Luz um cômodo terá com base na soma dos seus lados (m²)
//dimensaodocomodo = largudadocomodo * comprimentodocomodo
//potenciaemwatt = dimensaodocomodo / 18
#include <stdio.h>

int main()
{
    int larguraDoComodo, comprimentoDoComodo, dimensaoDoComodo, potenciaEmWatt;

    printf("\nQual a largura do comodo? ");
    scanf("%d", &larguraDoComodo);

    printf("\nQual o comprimento do comodo? ");
    scanf("%d", &comprimentoDoComodo);

    dimensaoDoComodo = larguraDoComodo * comprimentoDoComodo;
    potenciaEmWatt = dimensaoDoComodo / 18;

    printf("\nO comprimento do comodo e de: %d metros quadrados.", dimensaoDoComodo);
    printf("\n\nA potencia que dever usada no comodo e de %d W para que haja iluminacao adequada", potenciaEmWatt);
    return 0;
}
