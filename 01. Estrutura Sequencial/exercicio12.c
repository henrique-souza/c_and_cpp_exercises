/*ALGORITMO
INICIO
declare quantidadeSalarios, salarioFuncionario, salarioMinimoAtual
escreva Qual valor do Salario Minimo atual?
leia salarioMinimoAtual
escreva Qual valor do Salario do Funcionario?
leia salarioFuncionario
quantidadeSalarios = salarioFuncionario/salarioMinimoAtual
escreva Quantos salários minimos este funcionário ganha?
FIM
*/
#include <stdio.h>

int main()
{
   float quantidadeSalarios, salarioFuncionario, salarioMinimoAtual;
   printf("Qual valor do Salario do Funcionario? ");
   scanf("%f", &salarioFuncionario);
   printf("Qual valor do Salario Minimo atual? ");
   scanf("%f", &salarioMinimoAtual);
   quantidadeSalarios = salarioFuncionario / salarioMinimoAtual;
   printf("\nEste funcionário ganha, aproximadamente, %.1f salários minimos", quantidadeSalarios);
   return 0;
}