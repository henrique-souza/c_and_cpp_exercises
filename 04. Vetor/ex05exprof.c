#include <stdio.h>

int main() {
    int i, lo, li, matLogica[15], matLing[10];

    printf("\n-------------------- Alunos que cursam Logica de Programacao -------------------");
    for (i = 0; i < 15; i++) {
        printf("\nMatricula..: ");
        scanf("%d", &matLogica[i]);
    }
    printf("\n--------------------------------------------------------------------------------");
    printf("\n-------------------- Alunos que cursam Linguagem de Programacao -------------------");
    for (i = 0; i < 10; i++) {
        printf("\nMatricula..: ");
        scanf("%d", &matLing[i]);
    }

    printf("\n\n---------------- Matricula dos Alunos que cursam as duas disciplinas -------------");
    for (li = 0; li < 10; li++) // For para percorrer o vetor de linguagem de programação
    {
        for (lo = 0; lo < 15; lo++) // For para percorrer o vetor de lógica de programação
        {
            if (matLing[li] == matLogica[lo]) {
                printf("\nMatricula..: %d", matLogica[lo]);
            }
        }
    }
    return 0;
}