#include <stdio.h>
#include <stdlib.h>

struct Pilha
{
    int topo;     // topo da pilha
    int capa;     // capacidade
    float *pElem; // primeiro_elemento
};

// Inicializa a pilha
void criar_pilha(Pilha *pilha, int capa)
{
    pilha->topo = -1;
    pilha->capa = capa;
    pilha->pElem = (float *)malloc(capa * sizeof(float));
}

// Faz a verificação dos dados da pilha
int pilha_vazia(Pilha *pilha)
{
    if (pilha->topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Faz a verificação dos dados da pilha
int pilha_cheia(Pilha *pilha)
{
    if (pilha->topo == pilha->capa - 1)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

// Empilha os dados na pilha, caso não ultrapasse a capacidade
void empilhar(Pilha *pilha, float elemento)
{
    // Abre um espaço no topo da pilha
    pilha->topo++;
    // Atribui à pilha (ao novo endereço no topo) o 'elemento' recebido pela função
    pilha->pElem[pilha->topo] = elemento;
}

// Desempilha os dados na pilha, caso existam
float desempilhar(Pilha *pilha)
{
    float auxiliar = pilha->pElem[pilha->topo];
    /*
     * Remove o espaço aberto no topo, caso exista
     * e com isso também remove o 'elemento'
     */
    pilha->topo--;
    return auxiliar;
}

// Retorna o topo da pilha, caso exista
float topo_da_pilha(Pilha *pilha)
{
    // Retorna o 'elemento' que se encontra no topo da Pilha
    return pilha->pElem[pilha->topo];
}

void menu()
{
    printf("\n\t\tMENU DE OPCOES\n\n"
           "1.\tEmpilhar (Push)\n"
           "2.\tDesempilhar (Pop)\n"
           "3.\tMostrar topo\n"
           "0.\tSair\n"
           "\n\nEscolha uma das opcoes: ");
}

int main()
{
    // Criando uma célula 'pilha_criada' para manipulação da struct 'Pilha'
    Pilha pilha_criada;
    int opcao, capacidade;
    float valor;

    // Definindo capacidade da Pilha
    printf("\nQual a capacidade da pilha? ");
    scanf("%d", &capacidade);

    // Inicializando a pilha
    criar_pilha(&pilha_criada, capacidade);

    while (1)
    {

        menu();
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 0:
            exit(0);
            break;
        case 1: // Push
            if (pilha_cheia(&pilha_criada) == 1)
            {
                printf("\nPilha esta cheia!\n");
            }
            else
            {
                system("cls");
                printf("Digite um valor a ser armazenado na pilha: ");
                scanf("%f", &valor);

                // Empilhando o dado
                empilhar(&pilha_criada, valor);

                system("cls");
            }
            break;
        case 2: // Pop
            if (pilha_vazia(&pilha_criada) == 1)
            {
                printf("\nPilha vazia!\n");
            }
            else
            {
                valor = desempilhar(&pilha_criada);

                system("cls");

                printf("\n Numero desempilhado: %.1f \n", valor);
            }
            break;
        case 3: // Mostrar o topo
            if (pilha_vazia(&pilha_criada) == 1)
            {
                printf("\nPilha vazia!\n");
            }
            else
            {
                valor = topo_da_pilha(&pilha_criada);
                printf("\nTopo atual da Pilha: %.0f\n", valor);
            }

            break;
        default:
            printf("\nEscolha invalida\n\n");

            break;
        }
    }
    system("cls");
    system("pause");
}
