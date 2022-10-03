#include <stdio.h>
#include <stdlib.h>
#define SIZE 21

struct Pessoa
{
    int cpf;
    char nome[50], endereco[50];
};

Pessoa tabela[SIZE];

void criar_tabela()
{
    for (int i = 0; i < SIZE; i++)
    {
        tabela[i].cpf = -1;
    }
}

int hashing(int key)
{
    return key % SIZE;
}

Pessoa criar_pessoa()
{
    Pessoa pessoa;

    printf("Nome completo: ");
    scanf("%*c");
    fgets(pessoa.nome, 50, stdin);

    printf("CPF: ");
    scanf("%d", &pessoa.cpf);

    printf("Endereco: ");
    scanf("%*c");
    fgets(pessoa.endereco, 50, stdin);

    return pessoa;
}

void inserir_pessoa()
{
    Pessoa pessoa = criar_pessoa();
    int i = hashing(pessoa.cpf);

    while (tabela[i].cpf != -1)
    {
        i = hashing(i++);
    }
    tabela[i] = pessoa;
}

Pessoa *pesquisar_pessoa(int key)
{
    int i = hashing(key);
    while (tabela[i].cpf != -1)
    {
        if (tabela[i].cpf == key)
        {
            return &tabela[i];
        }
        else
        {
            i = hashing(i++);
        }
    }
    return NULL;
}

void imprimir_tabela()
{
    printf("\n\t\tTABELA ARMAZENADA");

    for (int i = 1; i < SIZE; i++)
    {
        if (tabela[i].cpf != -1)
        {
            printf("\n\tID %d:"
                   "\tNome: %s"
                   "\tCPF: %d\n"
                   "\tEndereco: %s",
                   i, tabela[i].nome, tabela[i].cpf, tabela[i].endereco);
        }
        else
        {
            printf("\n\tID %d: ", i);
        }
    }
    printf("\n\n");
}

void menu()
{
    printf("\n\t\tMENU DE OPCOES\n\n"
           "1.\tInserir dados\n"
           "2.\tBuscar registro\n"
           "3.\tImprimir tabela armazenada\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    Pessoa *nova_pessoa;
    int key, opcao;

    criar_tabela();

    do
    {
        menu();
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 0:
            system("pause");
            exit(0);
            break;
        case 1:
            inserir_pessoa();
            break;
        case 2:
            printf("\nDigite o CPF: ");
            scanf("%d", &key);

            nova_pessoa = pesquisar_pessoa(key);

            if (nova_pessoa)
            {
                printf("\nUsuario encontrado\n\n"
                       "\tNome: %s"
                       "\tCPF: %d\n",
                       nova_pessoa->nome, nova_pessoa->cpf);
            }
            else
            {
                printf("\nUsuario nao encontrado\n");
            }
            break;
        case 3:
            imprimir_tabela();
            break;
        default:
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);
    return 0;
}
