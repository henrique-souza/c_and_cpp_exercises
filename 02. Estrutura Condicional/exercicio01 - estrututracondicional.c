#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese_Brazil"); //Definição para o uso dos símbolos com base na biblioteca locale.h

  float notaRec, medFinal, nota1, nota2, nota3, nota4, media;

  printf("Nota 1:  ");
  scanf("%f", &nota1);
  printf("Nota 2:  ");
  scanf("%f", &nota2);
  printf("Nota 3:  ");
  scanf("%f", &nota3);
  printf("Nota 4:  ");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4) / 4;

  printf("\nMédia Final:  %.2f\n", media);

  if (media < 7) //quer dizer 'se a média for menor que sete'
  {
    printf("Você ficou em Recuperação!!\n");
    printf("Nota da Recuperação..: ");
    scanf("%f", &notaRec);

    medFinal = (media + notaRec) / 2;

    printf("Média Final:   %.2f\n", medFinal);

    if (medFinal < 5) //quer dizer 'se a médiaFinal for menor que cinco'
    {
      printf("Você está Reprovado!\n\n");
    }
    else //'senão' ou 'então...'
    {
      printf("Você está Aprovado!\n\n");
    }
  }
  else // 'senão' ou 'então...' -- Condição deu falsa
  {
    printf("Você está Aprovado!!\n");
  }
  return 0;
}
