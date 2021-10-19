/*
Estrutura de Dados - Fila
Aula 19/10
Estudar. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main()
{

  struct veiculo
  {
    char placa[7];
    int ano;
    veiculo *depois;
  };

  veiculo *primeiro = NULL, *anterior, *atual;

  char op;

  do
  {
    atual = (veiculo *)malloc(sizeof(veiculo));
    atual->depois = NULL;

    if (primeiro == NULL)
    {
      primeiro = atual;
    }
    else
    {
      anterior->depois = atual;
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

  while (primeiro != NULL)
  {
    printf("\nPlaca: %s \n", primeiro->placa);
    printf("Ano  : %d \n", primeiro->ano);

    atual = primeiro;
    primeiro = primeiro->depois;
    free(atual);
  }
}
