#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tam, qtd = 0;
    float a1, a2, soma = 0, medTur;
    printf("Quantos alunos tem nesta turma?  ");
    scanf("%d", &tam);
    float media[tam];
    for (i = 0; i < tam; i++)
    {
        printf("\n\n\tAluno %d", i + 1);
        printf("\n\nNota da A1: ");
        scanf("%f", &a1);
        printf("\nNota da A2: ");
        scanf("%f", &a2);
        media[i] = (a1 + a2) / 2;
        soma = soma + media[i];
        printf("\nMedia do aluno: %.2f", media[i]);
    }
    medTur = soma / tam;
    printf("\n\nMedia da Turma: %.2f", medTur);
    for (i = 0; i < tam; i++)
    {
        if (media[i] < medTur)
        {
            qtd++;
        }
    }
    printf("\n\nQuantidade de alunos com media menor em relacao a turma: %d", qtd);
    return 0;
}