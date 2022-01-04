#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, aumento = 0;

    printf("Salario..: ");
    scanf("%f", &sal);

    if (sal <= 2000)
    {
        aumento = sal * 18 / 100;
    }
    else if (sal <= 3500)
    {
        aumento = sal * 14 / 100;
    }
    else if (sal <= 4800)
    {
        aumento = sal * 10 / 100;
    }
    else
    {
        aumento = sal * 7 / 100;
    }

    printf("Valor do Aumento..: %.2f \n\n", aumento);
    
    system("pause");
    return 0;
}