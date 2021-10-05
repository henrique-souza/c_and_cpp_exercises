/*ALGORITMO
INICIO
declare nota1, nota2, somaDasNotas, mediaPonderada
escreva Valor da Primeiro Nota
leia nota1
escreva Valor da Segundo Nota
leia nota2
somaDasNotas = nota1*2 + nota2*3
leia somaDasNotas
mediaPonderada <-- somaDasNotas /5
leia mediaPonderada
FIM
*/
#include <stdio.h>

int main()
{
   float nota1, nota2, somaDasNotas, mediaPonderada;
   printf ("Valor da Primeira Nota: ");
   scanf ("%f", &nota1);
   printf ("Valor da Segunda Nota: ");
   scanf ("%f", &nota2);
   somaDasNotas = nota1*2 + nota2*3;
   printf ("\nResultado da Soma das Notas = %.1f", somaDasNotas);
   mediaPonderada = somaDasNotas/5;
   printf ("\nResultado da Média Ponderada = %.1f", mediaPonderada);
   
       return 0;
}