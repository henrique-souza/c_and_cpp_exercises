//objetivo: receber três números e mostrar o maior
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    printf("\nPrimeiro numero: ");
    scanf("%f", &num1);
    printf("\nSegundo numero: ");
    scanf("%f", &num2);
    printf("\nTerceiro numero: ");
    scanf("%f", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("O primeiro numero e o maior.");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("O segundo numero e o maior.");
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("O terceiro numero e o maior.");
    }
    return 0;
}