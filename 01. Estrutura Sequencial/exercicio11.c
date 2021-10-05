/*ALGORITMO
INICIO
declare diagonalMaior, diagonalMenor, areadoLosango
escreva Qual valor da Diagonal Maior?
leia diagonalMaior
escreva Qual valor da Diagonal Menor?
leia diagonalMenor
areadoLosango = (diagonalMaior * diagonalMenor)/2
escreva Qual a Àrea do Losango?
FIM
*/
#include <stdio.h>

int main()
{
   float diagonalMaior, diagonalMenor, areadoLosango;
   printf ("Qual valor da Diagonal Maior? ");
   scanf ("%f", &diagonalMaior);
   printf ("Qual valor da Diagonal Menor? ");
   scanf ("%f", &diagonalMenor);
   areadoLosango = (diagonalMaior * diagonalMenor)/2;
   printf ("\nQual a Área do Losango? %.2f", areadoLosango);
       return 0;
}