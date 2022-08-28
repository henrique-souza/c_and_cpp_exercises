/* Comentario: Manipula��o com �rvore Bin�ria */
#include <cstdlib>
#include <cstdio>
#include <conio.h>
#include <clocale>

/* Comentario: Declara��o da Estrutura do Registro */
struct carro {
    char nome[30];
    char marca[30];
    int ano;
    float preco;
};
/* Comentario: Declara��o da Estrutura da �rvore */
struct No {
    int numero;
    struct carro x;
    struct No *esquerda;
    struct No *direita;
};
typedef struct No No;

/* Comentario: Criar �rvore */
void criarArvore(No **pRaiz) {
    *pRaiz = nullptr;
}

int ex1(No **pRaiz) {
    if (*pRaiz == nullptr)
        return 0;
    else
        return 1 + ex1(&(*pRaiz)->esquerda) + ex1(&(*pRaiz)->direita);
}

int ex2(No **pRaiz) {
    if (*pRaiz == nullptr)
        return 0;
    else
        return (*pRaiz)->x.ano + ex2(&(*pRaiz)->esquerda) + ex2(&(*pRaiz)->direita);
}

int ex3(No **pRaiz) {
    if (*pRaiz == nullptr)
        return 0;
    else if ((*pRaiz)->esquerda == NULL && (*pRaiz)->direita == nullptr)
        return 1;
    else
        return ex3(&(*pRaiz)->esquerda) + ex3(&(*pRaiz)->direita);
}

/* Comentario: Inserir Elemento */
void inserir(No **pRaiz, int numero, struct carro x) {
    if (*pRaiz == nullptr) {
        *pRaiz = (No *) malloc(sizeof(No));
        (*pRaiz)->esquerda = NULL;
        (*pRaiz)->direita = NULL;
        (*pRaiz)->numero = numero;
        (*pRaiz)->x = x;
    } else {
        if (numero < (*pRaiz)->numero)
            inserir(&(*pRaiz)->esquerda, numero, x);
        if (numero > (*pRaiz)->numero)
            inserir(&(*pRaiz)->direita, numero, x);
    }
}

/* Comentario: Teste N� Maior Direita */
No *MaiorDireita(No **no) {
    if ((*no)->direita != nullptr)
        return MaiorDireita(&(*no)->direita);
    else {
        No *aux = *no;
        if ((*no)->esquerda != nullptr)
            *no = (*no)->esquerda;
        else
            *no = nullptr;
        return aux;
    }
}

/* Comentario: Teste N� Maior Esquerda */
No *MenorEsquerda(No **no) {
    if ((*no)->esquerda != nullptr)
        return MenorEsquerda(&(*no)->esquerda);
    else {
        No *aux = *no;
        if ((*no)->direita != nullptr)
            *no = (*no)->direita;
        else
            *no = nullptr;
        return aux;
    }
}

/* Comentario: Remover Elemento */
void remover(No **pRaiz, int numero) {
    if (*pRaiz == nullptr) {
        printf("\nN�mero n�o existe na �rvore!\n");
        return;
    }
    if (numero < (*pRaiz)->numero)
        remover(&(*pRaiz)->esquerda, numero);
    else if (numero > (*pRaiz)->numero)
        remover(&(*pRaiz)->direita, numero);
    else {
        No *pAux = *pRaiz;
        if (((*pRaiz)->esquerda == nullptr) && ((*pRaiz)->direita == nullptr)) {
            free(pAux);
            printf("\nRemovido com Sucesso! \n");
            (*pRaiz) = nullptr;
        } else {
            if ((*pRaiz)->esquerda == nullptr) {
                (*pRaiz) = (*pRaiz)->direita;
                pAux->direita = nullptr;
                free(pAux);
                pAux = nullptr;
                printf("\nRemovido com Sucesso! \n");
            } else {
                if ((*pRaiz)->direita == nullptr) {
                    (*pRaiz) = (*pRaiz)->esquerda;
                    pAux->esquerda = nullptr;
                    free(pAux);
                    pAux = nullptr;
                    printf("\nRemovido com Sucesso! \n");
                } else {
                    pAux = MaiorDireita(&(*pRaiz)->esquerda);
                    pAux->esquerda = (*pRaiz)->esquerda;
                    pAux->direita = (*pRaiz)->direita;
                    (*pRaiz)->esquerda = (*pRaiz)->direita = nullptr;
                    free((*pRaiz));
                    *pRaiz = pAux;
                    pAux = nullptr;
                    printf("\nRemovido com Sucesso! \n");
                }
            }
        }
    }
}

/* Comentario: Percurso Pre Ordem */
void exibirPreOrdem(No **pRaiz) {
    if ((*pRaiz) != nullptr) {
        printf("%i\n", (*pRaiz)->numero);
        exibirPreOrdem(&(*pRaiz)->esquerda);
        exibirPreOrdem(&(*pRaiz)->direita);
    }
}

/* Comentario: Percurso Em Ordem */
void exibirEmOrdem(No **pRaiz) {
    if ((*pRaiz) != nullptr) {
        exibirEmOrdem(&(*pRaiz)->esquerda);
        printf("%i\n", (*pRaiz)->numero);
        exibirEmOrdem(&(*pRaiz)->direita);
    }
}

/* Comentario: Percurso P�s-Ordem */
void exibirPosOrdem(No **pRaiz) {
    if ((*pRaiz) != nullptr) {
        exibirPosOrdem(&(*pRaiz)->esquerda);
        exibirPosOrdem(&(*pRaiz)->direita);
        printf("%i\n", (*pRaiz)->numero);
    }
}

/* Comentario: Verifica Quem � o Maior */
int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

/* Comentario: Imprimir �rvore */
int imprimir(No **pRaiz) {
    if ((*pRaiz) != nullptr) {
        printf("\nPai %i\n", (*pRaiz)->numero);
        printf("Nome %s\n", (*pRaiz)->x.nome);
        if ((*pRaiz)->esquerda != nullptr)
            printf("Esq: %i\t", (*pRaiz)->esquerda->numero);
        else
            printf("Esq: NULL\t");
        if ((*pRaiz)->direita != nullptr)
            printf("Dir: %i\t", (*pRaiz)->direita->numero);
        else
            printf("Dir: NULL\t");
        if ((*pRaiz)->esquerda != nullptr)
            imprimir(&(*pRaiz)->esquerda);
        if ((*pRaiz)->direita != nullptr)
            imprimir(&(*pRaiz)->direita);
    } else
        printf("A �rvore est� vazia! \n");
    return 0;
}

/* Programa Principal */
int main() {
    struct carro ca;
    int c, resultado;
    No *pRaiz;
    criarArvore(&pRaiz);
    setlocale(LC_ALL, "portuguese");
    int op;

    do {
        system("CLS");
        printf("* * * FA�A SUA ESCOLHA * * *\n\n");
        printf("1. Inserir Ve�culo: \n");
        printf("2. Remover Ve�culo: \n");
        printf("3. Mostrar PR�-ORDEM: \n");
        printf("4. Mostrar EM ORDEM: \n");
        printf("5. Mostrar P�S-ORDEM: \n");
        printf("6. Imprimir �rvore \n");
        printf("7. Imprimir Ex1 \n");
        printf("8. Imprimir Ex2 \n");
        printf("9. Imprimir Ex3 \n");
        printf("\nOp��o [0 para Sair]: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                system("CLS");
                printf("\nCarro: ");
                scanf("%s", &ca.nome);
                printf("\nMarca: ");
                scanf("%s", &ca.marca);
                printf("\nAno de Fabrica��o: ");
                scanf("%d", &ca.ano);
                printf("\nPre�o do Ve�culo: ");
                scanf("%f", &ca.preco);
                printf("\nDigite um N�mero (Refer�ncia na �rvore): ");
                scanf("%d", &c);
                inserir(&pRaiz, c, ca);
                system("PAUSE");
                break;
            case 2:
                system("CLS");
                printf("\nDigite um N�mero: ");
                scanf("%d", &c);
                remover(&pRaiz, c);
                system("PAUSE");
                break;
            case 3:
                system("CLS");
                exibirPreOrdem(&pRaiz);
                system("PAUSE");
                break;
            case 4:
                system("CLS");
                exibirEmOrdem(&pRaiz);
                system("PAUSE");
                break;
            case 5:
                system("CLS");
                exibirPosOrdem(&pRaiz);
                system("PAUSE");
                break;
            case 6:
                system("CLS");
                imprimir(&pRaiz);
                printf("\n");
                system("PAUSE");
                break;
            case 7:
                system("CLS");
                resultado = ex1(&pRaiz);
                printf("\n Ex1 %i \n", resultado);
                system("PAUSE");
                break;
            case 8:
                system("CLS");
                resultado = ex2(&pRaiz);
                printf("\n Ex2 %i \n", resultado);
                system("PAUSE");
                break;
            case 9:
                system("CLS");
                resultado = ex3(&pRaiz);
                printf("\n Ex3 %i \n", resultado);
                system("PAUSE");
                break;
            case 0:
                break;
            default:
                printf("\n\nOp��o Inv�lida. \n");
                system("PAUSE");
                break;
        }
    } while (op != 0);
    return 0;
}
