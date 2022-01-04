//pagina 30 e 51
#include <stdio.h>
#include <math.h>

int main()
{
    float raio, comprimentoDaEsfera, areaDaEsfera, valorDePi = 3.1415;
    int volumeDaEsfera = 3 / 2;

    printf("\nDigite o valor do Raio: ");
    scanf("%f", &raio);

    comprimentoDaEsfera = 2 * (valorDePi * raio);
    areaDaEsfera = valorDePi * (pow(raio, 2));
    volumeDaEsfera = volumeDaEsfera * (valorDePi * (pow(raio, 3)));
    
    printf("\n\nO comprimento da esfera e de: %.2f metros.", comprimentoDaEsfera);
    printf("\nA area da esfera e de: %.2f metros.", areaDaEsfera);
    printf("\nO volume da esfera e de: %.2d m.", volumeDaEsfera);
    return 0;
}