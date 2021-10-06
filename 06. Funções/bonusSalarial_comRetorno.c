#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// declarando a função, de tipo float, e suas variáveis antes de main
float calculoBonusSalarial(float salarioFornecido, int tempoDeServico);

int main()
{
    // chamando variaveis para manipular main()
    float salario;
    int tempo;

    printf("Salario: ");
    scanf("%f", &salario);
    printf("Tempo de Servico: ");
    scanf("%d", &tempo);
    // chamando a função que utiliza os dados armazenados durante main()
    // dados estes de mesmo tipo da função
    printf("Valor do Bonus %.2f", calculoBonusSalarial(salario, tempo));
    return 0;
}

// dando corpo a função calculoBonusSalarial, de tipo float
float calculoBonusSalarial(float salarioFornecido, int tempoDeServico)
{
    float bonusSalarial;

    if (tempoDeServico <= 5)
    {
        bonusSalarial = salarioFornecido * 5 / 100;
    }
    else if (tempoDeServico <= 8)
    {
        bonusSalarial = salarioFornecido * 7 / 100;
    }
    else
    {
        bonusSalarial = salarioFornecido * 10 / 100;
    }    
    return bonusSalarial;
}