#include <stdio.h>

main()
{
    struct cliente
    {
        char nome[20];
        float saldo;
    };
    cliente cli;

    printf("\t\t\tCONTROLE BANCARIO\n");
    printf("\tNome do Cliente: ");
    gets(cli.nome);
    printf("\tSaldo: ");
    scanf("%f", &cli.saldo);

    if (cli.saldo >= 0)
    {
        printf("\t %s", cli.nome);
    }
    else
    {
        printf("\tDevedor %s", cli.nome);
    }
}
