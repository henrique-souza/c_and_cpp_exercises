/*
o programa irá receber dois numeros
objetivo: calcular os números com base no que o usuário escolher num menu (estrutura case), e mostrar os resultados.
Se a do menu não existe, mostrar mensagem de erro e terminar o programa
Não existe divisão com denominador 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcularMedia();
void calcularDiferenca();
void calcularProduto();
void calcularDivisao();

int main()
{
    int opcaoEscolhida;

    printf("\t\t\tMenu de Opcoes");
    printf("\n 1 - Media entre dois numeros");
    printf("\n 2 - Diferenca do numero maior pelo menor");
    printf("\n 3 - Produto entre os numeros");
    printf("\n 4 - Divisao dos numeros");
    printf("\n 5 - Sair do programa");
    printf("\n\n Opcao Escolhida:  ");
    scanf("%divisao", &opcaoEscolhida);

    switch (opcaoEscolhida)
    {
    case 1:
        calcularMedia();
        break;
    case 2:
        calcularDiferenca();
        break;
    case 3:
        calcularProduto();
        break;
    case 4:
        calcularDivisao();
        break;
    case 5:
        printf("O programa foi fechado.");
        break;
    default:
        printf("Opcao Invalida. Digite uma correta");
    }
    return 0;
}

void calcularMedia()
{
    float media, number1, number2;

    printf("\nPrimeiro Numero:  ");
    scanf("%f", &number1);
    printf("Segundo Numero:  ");
    scanf("%f", &number2);

    media = number1 + number2;
    media = media / 2;

    printf("\nA Media destes numeros:  %.2f", media);
}

void calcularDiferenca()
{
    float number1, number2;

    printf("\nPrimeiro numero: ");
    scanf("%f", &number1);
    printf("\nSegundo numero:  ");
    scanf("%f", &number2);

    if (number1 > number2)
    {
        printf("A diferenca do primeiro numero para o segundo: %.2f", (number1 - number2));
    }
    else
    {
        printf("A diferenca do segundo numero para o primeiro: %.2f", (number2 - number1));
    }
}

void calcularProduto()
{
    float number1, number2, multiplicacao;

    printf("\nPrimeio numero:  ");
    scanf("%f", &number1);
    printf("Segundo numero:  ");
    scanf("%f", &number2);

    multiplicacao = number1 * number2;

    printf("\n\nResultado do produto entre dois numeros:  %.2f", multiplicacao);
}

void calcularDivisao()
{
    float number1, number2, divisao;

    printf("\nEscreva o Numerador:  ");
    scanf("%f", &number1);
    printf("\nEscreva o Denominador:  ");
    scanf("%f", &number2);

    divisao = number1 / number2;

    if (number2 <= 0)
    {
        printf("\nNao existe divisao quando o denominador < ou = a 0");
    }
    else
    {
        printf("\nO resultado desta divisao:  %.2f", divisao);
    }
}