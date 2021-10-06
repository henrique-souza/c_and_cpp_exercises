#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    struct veiculo
    {
        char placa[7];
        int ano;
        veiculo *depois;
        veiculo *antes;
    };

    veiculo *primeiro = NULL, *anterior, *atual, *ultimo = NULL;
    int cont;
    char op;

    primeiro = NULL;

    do
    {
        atual = (veiculo *)malloc(sizeof(veiculo));
        atual->depois = NULL;
        atual->antes = NULL;
        ultimo = atual;

        if (primeiro == NULL)
        {
            primeiro = atual;
        }
        else
        {
            anterior->depois = atual;
            atual->antes = anterior;
        }

        printf("\nPlaca do veiculo.........: ");
        scanf("%s", &atual->placa);
        printf("\nAno do veiculo...........: ");
        scanf("%d", &atual->ano);

        anterior = atual;

        printf("Deseja Continuar <s/n > ? ");
        do
        {
            scanf("%c", &op);
            op = toupper(op);
        } while ((op != 'S') && (op != 'N'));

    } while (op == 'S');

    atual = primeiro;

    while (atual != NULL)
    {
        printf("\nPlaca: %s \n", atual->placa);
        printf("Ano  : %d \n", atual->ano);

        atual = atual->depois;
    }

    atual = ultimo;

    while (atual != NULL)
    {
        printf("\nPlaca: %s \n", atual->placa);
        printf("Ano  : %d \n", atual->ano);

        atual = atual->antes;
    }
    system("pause");
}
