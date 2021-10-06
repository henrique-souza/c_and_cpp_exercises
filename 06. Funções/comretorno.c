#include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

float calcBonus(float sal, int ts);
int main()
{
 float salario;
 int tempo;
 printf("Salario..:");
 scanf("%f", &salario);
 printf("Tempo de Servico..:");
 scanf("%d", &tempo);
 printf("Valor do Bonus %.2f", calcBonus(salario, tempo));
 return 0;
}
 float calcBonus(float sal, int ts)
 {
 float bonus;
 if (ts <= 5)
 {
 bonus = sal * 5 /100;
 }
 else if ( ts <= 8)
 {
 bonus = sal * 7/100;
 }
 else
 {
 bonus = sal * 10/100;
 }
 return bonus;
 }