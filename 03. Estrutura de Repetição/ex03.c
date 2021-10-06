/*objetivos:mostrar quantidade de pessoas em cada faixa etaria
porcentagem das pessoas na primeira faixa etaria com relação ao total de pessoas
porcentagem das pessoas na ultima faixa etaria ' "  "   " "    "     "     "
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, i, qtdF1=0, qtdF2=0, qtdF3=0, qtdF4=0, qtdF5=0;
    for (i = 1; i <=4; i++)
    {
        printf("Sua idade: ");
        scanf("%d", &idade);
        if (idade<=15)
        {
            qtdF1++;
        }
        else if (idade<=30)
        {
            qtdF2++;
        }
        else if (idade<=45)
        {
            qtdF3++;
        }
        else if (idade<=60)
        {
            qtdF4++;
        }
        else
        {
            qtdF5++;
        }
    }
    printf("\n\n        Resultados               ");
    printf("\n\nQuantidade de pessoas na Faixa 1: %d ", qtdF1);
    printf("\nQuantidade de pessoas na Faixa 2: %d ", qtdF2);
    printf("\nQuantidade de pessoas na Faixa 3: %d ", qtdF3);
    printf("\nQuantidade de pessoas na Faixa 4: %d ", qtdF4);
    printf("\nQuantidade de pessoas na Faixa 5: %d ", qtdF5);
    printf("\n\nO percentual das pessoas na Faixa 1: %d %%", qtdF1*100/(i-1));
    printf("\nO percentual das pessoas na Faixa 5: %d %%", qtdF5*100/(i-1));
}