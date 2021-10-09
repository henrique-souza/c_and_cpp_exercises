#include <stdio.h>
int main()
{
    int number;

    printf("Digite um número: ");
    scanf("%d%*c", &number);

    switch (number)
    {
    case 1:
        printf("Número 1");
        break;
    case 2:
        printf("Número 2");
        break;
    default:
        printf("\nNúmero diferente de 1 e de 2");
    }
    getchar();
    return 0;
}