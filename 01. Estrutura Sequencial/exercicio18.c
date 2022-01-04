//pagina 30 e 51
//fazer um programa que receba a temperatura em celsius e converta para fahrenheit
//a fórmula é: Fahrenheit = 180* (Celsius + 32)/100
#include <stdio.h>

int main()
{
    float temperaturaEmCelsius, temperaturaEmFahrenheit;

    printf("\nQual a temperatura em Celsius? ");
    scanf("%f", &temperaturaEmCelsius);

    temperaturaEmFahrenheit = (1.8 * temperaturaEmCelsius) + 32;
    
    printf("A temperatura em Fahrenheit e de: %.0f F.", ceil(temperaturaEmFahrenheit));
    return 0;
}