/*ALGORITMO
INICIO
declare peso, novoPengordar, novoPemagrecer
escreva Qual o peso da pessoa?
leia peso
novoPengordar = peso + (peso*15)/100;
novoPemagrecer = peso - (peso*20)/100;
escreva Resultado do novo Peso Engordando
escreva Resultado do novo Peso Emagrecendo
FIM
*/
#include <stdio.h>

int main()
{
    float peso, novoPesoEngordando, novoPesoEmagrecendo;

    printf("Qual o peso da pessoa? ");
    scanf("%f", &peso);

    novoPesoEngordando = peso + (peso * 0.15);
    novoPesoEmagrecendo = peso - (peso * 0.20);
    
    printf("\nResultado do novo Peso Engordando = %.2f", novoPesoEngordando);
    printf("\nResultado do novo Peso Emagrecendo = %.2f", novoPesoEmagrecendo);
    return 0;
}