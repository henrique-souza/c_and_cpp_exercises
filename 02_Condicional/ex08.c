/*objetivo: calcular e mostrar o salário reajustado de um funcionario de acordo com:
se sal até 300,00 = aumento de 35%
se sal acima de 300,00 = aumento de 15%
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal;

    printf("Qual seu salario atual?  ");
    scanf("%f", &sal);

    if (sal <= 300)
    {
        printf("Voce recebera um aumento. Seu salario sera de %.2f reais a partir deste mes.", sal + (sal * 35) / 100);
    }
    else
    {
        printf("Voce recebera um aumento. Seu salario sera de %.2f reais a partir deste mes.", sal + (sal * 15) / 100);
    }
    return 0;
}