/*ALGORITMO Ex9Cp04
INICIO
declare notaRec, medFinal, nota1, nota2, nota3, nota4, media
escreva Nota 1
leia nota1
escreva Nota 2
leia nota2
escreva Nota 3
leia nota3
escreva Nota 4
leia nota4
media = (nota1 + nota2 + nota3 + nota4) / 4
escreva Media Final
    se media<7
então escreva Voce ficou em RECUPERACAO!!
escreva Nota da Recuperação
leia notaRec
medFinal = (media + notaRec)/2
escreva Media Final
se media<5
então escreva Você está reprovado!
senão escreva Você está aprovado!
    senão
escreva Aprovado!
FIM
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaRec, medFinal, nota1, nota2, nota3, nota4, media;
    printf("Nota 1..: ");
    scanf("%f", &nota1);
    printf("Nota 2..: ");
    scanf("%f", &nota2);
    printf("Nota 3..: ");
    scanf("%f", &nota3);
    printf("Nota 4..: ");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("\nMedia Final..: %.2f\n", media);

    if (media < 7)
    {
        printf("Voce ficou em RECUPERACAO!!\n");
        printf("Nota Recuperacao..: ");
        scanf("%f", &notaRec);
        medFinal = (media + notaRec) / 2;
        printf("Media Final..: %.2f\n", medFinal);

        if (medFinal < 5)
        {
            printf("Voce esta REPROVADO!\n\n");
        }
        else
        {
            printf("Voce esta APROVADO!\n\n");
        }
    }
    else // senão -- Condição deu falsa
    {
        printf("Aprovado!!\n");
    }
    return 0;
}