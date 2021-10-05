#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct arv
{
    char info;
    struct arv *esq;
    struct arv *dir;
};

typedef struct arv Arv;

Arv *inicializa(void)
{
    return NULL;
}

Arv *cria(char c, Arv *sae, Arv *sad)
{

    Arv *p = (Arv *)malloc(sizeof(Arv));
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
}

int vazia(Arv *a)
{
    return a == NULL;
}

void imprimeEmOrdem(Arv *a)
{
    if (!vazia(a))
    {
        imprimeEmOrdem(a->esq);
        printf("%c ", a->info);
        imprimeEmOrdem(a->dir);
    }
}

void imprimePreOrdem(Arv *a)
{
    if (!vazia(a))
    {
        printf("%c ", a->info);
        imprimePreOrdem(a->esq);
        imprimePreOrdem(a->dir);
    }
}

void imprimePosOrdem(Arv *a)
{
    if (!vazia(a))
    {
        imprimePosOrdem(a->esq);
        imprimePosOrdem(a->dir);
        printf("%c ", a->info);
    }
}

Arv *libera(Arv *a)
{
    if (!vazia(a))
    {
        libera(a->esq);
        libera(a->dir);
        free(a);
    }
    return NULL;
}

int busca(Arv *a, char c)
{
    if (vazia(a))
        return 0;
    else
        return a->info == c || busca(a->esq, c) || busca(a->dir, c);
}

int maior(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int altura(Arv *a)
{
    if (a == NULL)
    {
        return -1;
    }
    else
    {
        if (a->esq == NULL && a->dir == NULL)
        {
            return 0;
        }
        else
        {
            return 1 + maior(altura(a->esq), altura(a->dir));
        }
    }
}

int main()
{

    int opcao = 0;
    Arv *a = NULL;

    while (opcao != 9)
    {

        printf("\n\n----------------MENU PRINCIPAL----------------");
        printf("\n\n 1 - Inserir n�s sem recursividade");
        printf("\n\n 2 - Inserir n�s com recursividade");
        printf("\n\n 3 - Imprimir");
        printf("\n\n 4 - Liberar");
        printf("\n\n 5 - Buscar");
        printf("\n\n 6 - Altura");
        printf("\n\n 9 - Encerrar");
        printf("\n\n Opcao Escolhida: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        {

            Arv *a1 = cria('d', inicializa(), inicializa());
            Arv *a2 = cria('b', inicializa(), a1);
            Arv *a3 = cria('e', inicializa(), inicializa());
            Arv *a4 = cria('f', inicializa(), inicializa());
            Arv *a5 = cria('c', a3, a4);
            a = cria('a', a2, a5);
            break;
        }
        case 2:
        {
            a = cria('a',
                     cria('b',
                          inicializa(),
                          cria('d',
                               inicializa(),
                               inicializa())),
                     cria('c',
                          cria('e',
                               inicializa(),
                               inicializa()),
                          cria('f',
                               inicializa(),
                               inicializa())));

            break;
        }
        case 3:
        {
            imprimeEmOrdem(a);
            printf("\n");
            imprimePreOrdem(a);
            printf("\n");
            imprimePosOrdem(a);
            printf("\n");
            break;
        }
        case 4:
        {
            a = libera(a);

            // a->dir->esq = libera(a->dir->esq);
            break;
        }
        case 5:
        {
            char valor;
            printf("\n Valor a ser procurado : ");
            getchar();
            scanf("%c", &valor);

            if (busca(a, valor))
                printf("\n Achou"
                       "");
            else
                printf("\n N�o Achou"
                       "");

            break;
        }
        case 6:
        {
            int x = altura(a);

            printf("Altura = %d", x);

            break;
        }
        }
    }
    return 0;
}
