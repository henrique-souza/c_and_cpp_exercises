/*
Cap 3 - Exercicio 07 - Livro Fundamentos da Programação de Computação
; é um sinal para "fechar comando"
\n é para o programa dar "quebra de linha"
%.2f, o ".0, .1 ou .2" é para exibir apenas zero, uma ou duas casas decimais no resultado
*/
/*ALGORITMO
INICIO
declare areadoTrapezio, baseMaior, baseMenor, altura
escreva Valor da Base Maior
leia baseMaior
escreva Valor da Base Menor
leia baseMenor
escreva Valor da Altura
leia altura
areadoTrapezio <-- ((baseMaior + baseMenor) * altura)/2
leia areadoTrapezio
FIM
*/
#include <stdio.h>

int main()
{
    float areaDoTrapezio, baseMaior, baseMenor, altura;
    printf("Valor da Base Maior: ");
    scanf("%f", &baseMaior);
    printf("Valor da Base Menor: ");
    scanf("%f", &baseMenor);
    printf("Valor da Altura: ");
    scanf("%f", &altura);
    areaDoTrapezio = ((baseMaior + baseMenor) * altura) / 2;
    printf("\nResultados abaixo:\n");
    printf("\nArea do Trapezio = %.2f", areaDoTrapezio);
    return 0;
}
