/*programa recebe dois numeros
fazer menu que retorne:
a) O primeiro número potenciacao ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void potenciacao();
void calcularRaizQuadrada();
void calcularRaizCubica();

int main()
{
    char opcaoEscolhida;

    printf("\t\t\tMenu de Opcoes\n");
    printf("\n a) - O primeiro numero potenciacao ao segundo numero.");
    printf("\n b) - Raiz quadrada de cada um dos numeros.");
    printf("\n c) - Raiz cubica de cada um dos numeros.");
    printf("\n d) - Sair do programa");
    printf("\n\nOpcao Escolhida: ");
    scanf("%c", &opcaoEscolhida);

    switch (opcaoEscolhida)
    {
    case 'a':
        potenciacao();
        break;
    case 'b':
        calcularRaizQuadrada();
        break;
    case 'c':
        calcularRaizCubica();
        break;
    case 'd':
        printf("\nO programa sera fechado.");
        break;
    default:
        printf("\nOpcao Invalida. Digite uma correta.");
    }
    return 0;
}

void potenciacao()
{
    float number1, number2, potenciacao;

    printf("\nNumero que deseja calcular: ");
    scanf("%f", &number1);
    printf("\nElevado a qual numero?  ");
    scanf("%f", &number2);

    potenciacao = pow(number1, number2);

    printf("\n\nO resultado e: %.2f", potenciacao);
}

void calcularRaizQuadrada()
{
    float number1, number2;

    printf("\nPrimeiro numero para calculo da Raiz Quadrada:  ");
    scanf("%f", &number1);
    printf("\nSegundo numero para calculo da Raiz Quadrada:  ");
    scanf("%f", &number2);
    printf("\nRaiz quadrada do primeiro numero digitado: %.3f", sqrt(number1));
    printf("\nRaiz quadrada do segundo numero digitado: %.3f", sqrt(number2));
}

void calcularRaizCubica()
{
    float number1, number2, cubica;

    printf("\nPrimeiro numero para calculo da Raiz Cubica:  ");
    scanf("%f", &number1);
    printf("\nSegundo numero para calculo da Raiz Cubica:  ");
    scanf("%f", &number2);
    printf("\nRaiz cubica do primeiro numero digitado: %.3f", cbrt(number1));
    printf("\nRaiz cubica do segundo numero digitado: %.3f", cbrt(number2));
}