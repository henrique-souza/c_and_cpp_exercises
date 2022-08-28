//objetivo: receber três números e mostrar o maior
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number1, number2, number3;

    printf("\nPrimeiro numero: ");
    scanf("%f", &number1);
    printf("\nSegundo numero: ");
    scanf("%f", &number2);
    printf("\nTerceiro numero: ");
    scanf("%f", &number3);

    if (number1 > number2 && number1 > number3)
    {
        printf("O primeiro numero e o maior.");
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("O segundo numero e o maior.");
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("O terceiro numero e o maior.");
    }
    return 0;
}