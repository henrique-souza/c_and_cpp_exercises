/*
o programa irá receber dois numeros
objetivo: calcular os números com base no que o usuário escolher num menu (estrutura case), e mostrar os resultados.
Se a do menu não existe, mostrar mensagem de erro e terminar o programa
Não existe divisão com denominador 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void media();
void difer();
void prod();
void divis();
int main()
{
    int op;
    printf("             Menu de Opcoes           \n");
    printf("\n 1 - Media entre dois numeros");
    printf("\n 2 - Diferenca do numero maior pelo menor");
    printf("\n 3 - Produto entre os numeros");
    printf("\n 4 - Divisao dos numeros");
    printf("\n 5 - Sair do programa");
    printf("\n\n Opcao Escolhida:  ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        media();
        break;
        case 2:
        difer();
        break;
        case 3: prod();
        break;
        case 4: divis();
        break;
        case 5: printf("O programa foi fechado.");
        break;    
    default:
    printf ("Opcao Invalida. Digite uma correta");
    }
    return 0;
}
void media()
{
float m, n1, n2;
printf("\nPrimeiro Numero:  ");
scanf("%f", &n1);
printf("Segundo Numero:  ");
scanf("%f", &n2);
m = n1+n2;
printf("\nA Media destes numeros:  %.2f", m/2);
}
void difer()
{
float n1, n2;
printf("\nPrimeiro numero: ");
scanf("%f", &n1);
printf("\nSegundo numero:  ");
scanf("%f", &n2);
if (n1 > n2)
{
    printf("A diferenca do primeiro numero para o segundo: %.2f", (n1-n2));
    }
    else
    {
        printf("A diferenca do segundo numero para o primeiro: %.2f", (n2-n1));
    }
}
void prod() //é o mesmo que multiplicação
{
    float n1, n2, mult;
printf("\nPrimeio numero:  ");
scanf("%f", &n1);
printf("Segundo numero:  ");
scanf("%f", &n2);
mult = n1*n2;
printf("\n\nResultado do produto entre dois numeros:  %.2f", mult);
}
void divis()
{
    float n1, n2, d;
    printf("\nEscreva o Numerador:  ");
    scanf("%f", &n1);
    printf("\nEscreva o Denominador:  ");
    scanf("%f", &n2);
    d = n1/n2;
    if (n2<=0)
    {
        printf("\nNao existe divisao quando o denominador < ou = a 0");
    }
    else
    {
        printf("\nO resultado desta divisao:  %.2f", d);
    }
}