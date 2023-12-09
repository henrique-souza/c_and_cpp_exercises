#include <stdio.h>
#include <time.h>

// parei no começo de Fibonacci - Tenenbaum - página 157

// declarando a função que calcula o fatorial do numero
int calcularFatorial(int produto, int numero);

int main()
{
    int produto, numero;
    produto = 1;
    clock_t start_time = clock();

    printf("Digite um número para saber seu fatorial: ");

    if (scanf("%d", &numero) != 1)
    {
        printf("Erro ao ler o número.\n");
        // Encerra o programa com um código de erro.
        return 1;
    }

    printf("Fatorial do número %d eh: %d", numero, calcularFatorial(numero, produto));

    double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC;

    printf("\nDone in %f seconds", elapsed_time);

    return 0;
}

int calcularFatorial(int numero, __attribute__((unused)) int produto)
{
    int fatorial, x, y;
    y = 0;

    if (numero == 0)
    {
        fatorial = 1;
    }
    else
    {
        // definicao de n!
        x = numero - 1;
        y = calcularFatorial(x, y);
        fatorial = numero * y;
    }

    return fatorial;
}
