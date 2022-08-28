#include <stdio.h>
#include <stdlib.h>

int main()
{

    float matNotas[3][3]; // [linhas][colunas]
    int l, c;
    // entrando com as notas de A1 e A2
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("Notas..:");
            scanf("%f", &matNotas[l][c]);
        }
        printf("----------------------------\n");
    }
    // calculando a média

    for (l = 0; l < 3; l++)
    {
        matNotas[l][2] = (matNotas[l][0] + matNotas[l][1]) / 2;
    }

    printf("\n\n-------------Notas Armazenadas --------------");
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (c == 0)
            {
                printf("\nA1..: %.2f", matNotas[l][c]);
            }
            else if (c == 1)
                printf("\nA2..: %.2f", matNotas[l][c]);
            else
                printf("\nMedia..: %.2f", matNotas[l][c]);
        }
        printf("\n----------------------------------------\n");
    }
    return 0;
}