/*ALGORITMO
Objetivo: Calcular e mostrar na tela uma tabuada com base no numero digitado pelo usuário
Declare numus
escreva Qual valor voce deseja que seja feito a Tabuada?
leia numus
escreva numus*0
escreva numus*1
escreva numus*2
escreva numus*3
escreva numus*4
escreva numus*5
escreva numus*6
escreva numus*7
escreva numus*8
escreva numus*9
escreva numus*10
*/
#include <stdio.h>

int main()
{
    float numeroDigitado;
    printf("Qual numero voce deseja que seja feita a Tabuada?  ");
    scanf("%f", &numeroDigitado);
    printf("\nA tabuada do numero %.0f esta abaixo", numeroDigitado);
    printf("\n\n%.0fx0 = %.0f", numeroDigitado, numeroDigitado * 0);
    printf("\n%.0fx1 = %.0f", numeroDigitado, numeroDigitado * 1);
    printf("\n%.0fx2 = %.0f", numeroDigitado, numeroDigitado * 2);
    printf("\n%.0fx3 = %.0f", numeroDigitado, numeroDigitado * 3);
    printf("\n%.0fx4 = %.0f", numeroDigitado, numeroDigitado * 4);
    printf("\n%.0fx5 = %.0f", numeroDigitado, numeroDigitado * 5);
    printf("\n%.0fx6 = %.0f", numeroDigitado, numeroDigitado * 6);
    printf("\n%.0fx7 = %.0f", numeroDigitado, numeroDigitado * 7);
    printf("\n%.0fx8 = %.0f", numeroDigitado, numeroDigitado * 8);
    printf("\n%.0fx9 = %.0f", numeroDigitado, numeroDigitado * 9);
    printf("\n%.0fx10 = %.0f", numeroDigitado, numeroDigitado * 10);
    return 0;
}