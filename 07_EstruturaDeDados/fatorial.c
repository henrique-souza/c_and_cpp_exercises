#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int produto, numero;
    clock_t start_time = clock();

    produto = 1;

    printf("Digite um número para saber seu fatorial: ");
    scanf("%d", &numero);

    for (size_t x = numero; x > 0; x--)
    {
        produto *= x;
    }

    printf("Fatorial do número %d eh: %d", numero, produto);

    double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;

    printf("\nDone in %f seconds", elapsed_time);

    return 0;
}
