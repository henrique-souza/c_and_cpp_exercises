//mod = operador que quer dizer "resto" de uma divisão
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i;
    for (i = 1; i <= 100000; i++) //crescente
    //decrescente: for (i=100000; i>0; i--)
    //apenas números pares: for (i=2; i<=1000; i=i+2)
    {
        printf("\n\n%d", i);
    }
    system("pause");
    return 0;
}