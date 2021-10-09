/*uma empresa decidiu dar 30% de aumento aos funcionarios com salario até 500,00
objetivo: mostrar uma msg com o valor do salario reajustado SE  seguir as regras impostas
ou enviar uma mensagem aos que não se enquadram nas regras
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sal;
    printf("\nDigite seu salario atualmente: ");
    scanf("%f", &sal);
    if (sal <= 500.00)
    {
        printf("\nVoce recebera um reajuste. Seu salario sera de: %.2f", sal + sal * 30 / 100);
    }
    else
    {
        printf("\nVoce nao tera direito ao beneficio neste momento.");
    }
    return 0;
}