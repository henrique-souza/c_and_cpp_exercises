    //receber dois numeros. objetivo: mostrar o menor
    #include <stdio.h>

    int main()
    {
    float num1, num2;
    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);
    if (num1 < num2)
    {
        printf("O primeiro numero e o menor numero");
    }
        else if (num2 < num1)
        {
           printf("O segundo numero e o menor numero");
        }
        
    return 0;
    }