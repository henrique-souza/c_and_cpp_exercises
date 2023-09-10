#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produto, numero;

    produto = 1;

    printf("Digite um número para saber seu fatorial: ");
    scanf("%d", &numero);

    for (size_t x = numero; x > 0; x--)
    {
        produto *= x;
    }

    printf("Fatorial do número %d eh: %d", numero, produto);

    return 0;
}
