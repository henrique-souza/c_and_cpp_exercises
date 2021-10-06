/*
Modificar e estudar.
*/
#include <stdio.h>

int main()
{
    // estrutura 'clientes', se refere aos clientes do banco
    struct clientes
    {
        // atributos do cliente
        // nome com até 20 caracteres
        char nomeDoCliente[20];
        // saldo do cliente
        float saldoDoCliente;
    };
    // criando o 'cliente1' com atributos de 'clientes'
    clientes cliente1;

    printf("\t\tCONTROLE BANCARIO");
    printf("\nNome do Cliente: ");
    // recolhe o nome do cliente e armazena no atributo.
    gets(cliente1.nomeDoCliente);
    printf("\nSaldo: ");
    // recolhe o saldo e armazena no atributo
    scanf("%f", &cliente1.saldoDoCliente);

    if (cliente1.saldoDoCliente >= 0)
    {
        printf("\nS%s, seu saldo se encontra POSITIVO.", cliente1.nomeDoCliente);
    }
    else
    {
        printf("\n%s, seu saldo se encontra NEGATIVO.", cliente1.nomeDoCliente);
    }
}
