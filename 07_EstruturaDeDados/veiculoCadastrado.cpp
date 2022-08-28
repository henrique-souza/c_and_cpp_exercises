// estudar
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    struct veiculoCadastrado
    {
        char placaCadastrada[7];
        int anoCadastrado;
        veiculoCadastrado *veiculoPosterior;
        veiculoCadastrado *veiculoAnterior;
    };

    veiculoCadastrado *primeiroVeiculoCadastrado = NULL, *veiculoAnterior, *veiculoAtual, *ultimoVeiculoCadastrado = NULL;

    char opcaoEscolhida;

    // primeiroVeiculoCadastrado = NULL;

    do
    {
        veiculoAtual = (veiculoCadastrado *)malloc(sizeof(veiculoCadastrado));
        veiculoAtual->veiculoPosterior = NULL;
        // usamos ' -> ' para acessar um membro (uma variavel neste caso) da struct
        veiculoAtual->veiculoAnterior = NULL;
        ultimoVeiculoCadastrado = veiculoAtual;

        if (primeiroVeiculoCadastrado == NULL)
        {
            primeiroVeiculoCadastrado = veiculoAtual;
        }
        else
        {
            veiculoAnterior->veiculoPosterior = veiculoAtual;
            veiculoAtual->veiculoAnterior = veiculoAnterior;
        }

        printf("\nPlaca do veiculo: ");
        scanf("%s", &veiculoAtual->placaCadastrada);
        printf("\nAno do veiculo: ");
        scanf("%d", &veiculoAtual->anoCadastrado);

        veiculoAnterior = veiculoAtual;

        printf("Deseja Continuar <s/n > ? ");

        do
        {
            scanf("%c", &opcaoEscolhida);
            opcaoEscolhida = toupper(opcaoEscolhida);
        } while ((opcaoEscolhida != 'S') && (opcaoEscolhida != 'N'));

    } while (opcaoEscolhida == 'S');

    veiculoAtual = primeiroVeiculoCadastrado;

    while (veiculoAtual != NULL)
    {
        printf("\nPlaca: %s \n", veiculoAtual->placaCadastrada);
        printf("Ano  : %d \n", veiculoAtual->anoCadastrado);

        veiculoAtual = veiculoAtual->veiculoPosterior;
    }

    veiculoAtual = ultimoVeiculoCadastrado;

    while (veiculoAtual != NULL)
    {
        printf("\nPlaca: %s \n", veiculoAtual->placaCadastrada);
        printf("Ano: %d \n", veiculoAtual->anoCadastrado);

        veiculoAtual = veiculoAtual->veiculoAnterior;
    }
}
