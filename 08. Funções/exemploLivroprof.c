#include <stdio.h>
float calculaArea(float a, float b)
{ return a*b;
}
float calculaPerimetro(float a, float b)
{ return 2*a + 2*b;
}
void mostraMensagem(char *msg, float vlr)
{ printf("%s %5.2f", msg, vlr);
}
int main()
{ 
    float altura, largura, area, perimetro;
    printf("Digite o valor da altura do retângulo: ");
    scanf("%f%*c", &altura);
    printf("Digite o valor da largura do retângulo: ");
    scanf("%f%*c", &largura);
    area = calculaArea(altura, largura);
    perimetro = calculaPerimetro(altura, largura);
    mostraMensagem("O valor da área é ", area);
    mostraMensagem("\nO valor do perímetro é ", perimetro);
    return 0;
}