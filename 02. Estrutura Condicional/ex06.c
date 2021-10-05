/*programa recebe dois numeros
fazer menu que retorne:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void elev();
void quad();
void cubi();
int main()
{
    char op;
    printf("        Menu de Opcoes           \n");
    printf("\n janeiro) - O primeiro numero elevado ao segundo numero.");
    printf("\n b) - Raiz quadrada de cada um dos numeros.");
    printf("\n c) - Raiz cubica de cada um dos numeros.");
    printf("\n d) - Sair do programa");
    printf("\n\nOpcao Escolhida: ");
    scanf("%c", &op);
    switch (op)
    {
    case 'a':
        elev();
        break;
    case 'b':
        quad();
        break;
    case 'c':
        cubi();
        break;
    case 'd':
        printf("\nO programa sera fechado.");
        break;
    default:
        printf("\nOpcao Invalida. Digite uma correta.");
    }
    return 0;
}
void elev()
{
    float n1, n2, elevado;
    printf("\nNumero que deseja calcular: ");
    scanf("%f", &n1);
    printf("\nElevado a qual numero?  ");
    scanf("%f", &n2);
    elevado = pow(n1, n2);
    printf("\n\nO resultado e: %.2f", elevado);
}
void quad()
{
    float n1, n2;
    printf("\nPrimeiro numero para calculo da Raiz Quadrada:  ");
    scanf("%f", &n1);
    printf("\nSegundo numero para calculo da Raiz Quadrada:  ");
    scanf("%f", &n2);
    printf("\nRaiz quadrada do primeiro numero digitado: %.3f", sqrt(n1));
    printf("\nRaiz quadrada do segundo numero digitado: %.3f", sqrt(n2));
}
void cubi()
{
    float n1, n2, cubica;
    printf("\nPrimeiro numero para calculo da Raiz Cubica:  ");
    scanf("%f", &n1);
    printf("\nSegundo numero para calculo da Raiz Cubica:  ");
    scanf("%f", &n2);
    printf("\nRaiz cubica do primeiro numero digitado: %.3f", cbrt(n1));
    printf("\nRaiz cubica do segundo numero digitado: %.3f", cbrt(n2));
}