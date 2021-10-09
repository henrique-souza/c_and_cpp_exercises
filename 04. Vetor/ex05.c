//pag 190 a 191
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, matLog[5], matLing[5];
    printf("\n\t\t\tALUNOS CURSANDO LOGICA DE PROGRAMACAO");
    for (i = 0; i < 5; i++)
    {
        printf("\n\nMatricula do aluno em Logica de Programacao: ");
        scanf("%d", &matLog[i]);
    }
    printf("\n\t\t\tALUNOS CURSANDO LINGUAGEM DE PROGRAMACAO");
    for (i = 0; i < 5; i++)
    {
        printf("\n\nMatricula do aluno em Linguagem de Programacao: ");
        scanf("%d", &matLing[i]);
    }
    return 0;
}