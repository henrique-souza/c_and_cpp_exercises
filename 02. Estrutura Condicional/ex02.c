/*objetivo do programa: calcular a média aritmetica e mostrar mensagens de arcodo com as regras
recebendo duas notas
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nota1, nota2, media, mediaAritmetica;
    printf("\nValor da primeira nota: ");
    scanf("%f", &nota1);
    printf("\nValor da segunda nota: ");
    scanf("%f", &nota2);
    media = nota1 + nota2;
    mediaAritmetica = media / 2;
    if (mediaAritmetica <= 3)
    {
        printf("\nVoce esta reprovado, com media: %.2f", mediaAritmetica);
    }
    else if (mediaAritmetica > 3 && mediaAritmetica <= 7)
    {
        printf("\n\nVoce precisara fazer um Exame, sua media foi %.2f", mediaAritmetica);
    }
    else if (mediaAritmetica > 7 && mediaAritmetica <= 10)
    {
        printf("\n\nVoce foi aprovado, parabens! Sua media foi %.2f", mediaAritmetica);
    }
    return 0;
}