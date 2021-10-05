/*ALGORITMO
INICIO
declare quantidadeSal, salFuncionario, salminAtual
escreva Qual valor do Salario Minimo atual?
leia salminAtual
escreva Qual valor do Salario do Funcionario?
leia salFuncionario
quantidadeSal = salFuncionario/salminAtual
escreva Quantos salários minimos este funcionário ganha?
FIM
*/
#include <stdio.h>

int main()
{
   float quantidadeSal, salFuncionario, salminAtual, quantDepessoas;
      printf ("Qual valor do Salario do Funcionario? ");
   scanf ("%f", &salFuncionario);
   printf ("Qual valor do Salario Minimo atual? ");
   scanf ("%f", &salminAtual);
   quantidadeSal = salFuncionario / salminAtual;
   printf ("\nEste funcionário ganha, aproximadamente, %.1f salários minimos", quantidadeSal);
       return 0;
}