//receber dois numeros. objetivo: mostrar o menor
#include <stdio.h>

int main()
{
    float number1, number2;

    printf("Primeiro numero: ");
    scanf("%f", &number1);
    printf("Segundo numero: ");
    scanf("%f", &number2);

    if (number1 < number2)
    {
        printf("O primeiro numero e o menor numero");
    }
    else if (number2 < number1)
    {
        printf("O segundo numero e o menor numero");
    }

    return 0;
}