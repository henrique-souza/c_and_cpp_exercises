/* objetivo: mostrar a média aritmética das notas de alunos e dizer se está aprovado ou reprovado
usar média 7 para considerar aprovação*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media, mediaAritmetica;

    printf("\nSua nota da AV1:  ");
    scanf("%f", &nota1);
    printf("\nSua nota da AV2:  ");
    scanf("%f", &nota2);
    printf("\nSua nota da AV3:  ");
    scanf("%f", &nota3);
    printf("\nSua nota da AV4:  ");
    scanf("%f", &nota4);

    media = nota1 + nota2 + nota3 + nota4;
    mediaAritmetica = media / 4;
    
    if (mediaAritmetica >= 7)
    {
        printf("\nVoce foi aprovado com media %.2f\n", mediaAritmetica);
    }
    else
    {
        printf("Voce foi reprovado com media %.2f\n", mediaAritmetica);
    }
    return 0;
}
