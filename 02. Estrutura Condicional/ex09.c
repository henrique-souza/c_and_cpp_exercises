#include <stdio.h>
#include <process.h>

int main()
{
    float saldo_medio, valor_medio;

    printf("\nDigite seu saldo medio do ano anterior:  ");
    scanf("%f", &saldo_medio);

    if (saldo_medio <= 200)
    {
        valor_medio = saldo_medio * 0.10;
    }
    else if (saldo_medio <= 300)
    {
        valor_medio = saldo_medio * 0.20;
    }
    else if (saldo_medio <= 400)
    {
        valor_medio = saldo_medio * 0.25;
    }
    else
    {
        valor_medio = saldo_medio * 0.30;
    }

    //o primeiro %.2f é em referência ao saldo médio, o segundo a valor médio
    printf("Seu saldo medio anual: %.2f \t\tSeu valor de credito: %.2f ", saldo_medio, valor_medio);

    system("pause");
    return 0;
}