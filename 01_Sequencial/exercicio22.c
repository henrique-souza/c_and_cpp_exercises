/*
    Faça um programa que receba o número de lados de um polígono convexo,
    calcule e mostre o número de diagonais desse polígono.
    Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono
 */
#include "stdio.h"
int main()
{
    int num_lados;
    printf("Digite o número de lados de um polígono: \n");
    scanf("%d", &num_lados);

    // Calcula o número de diagonais usando a fórmula ND = N * (N - 3) / 2
    int num_diagonais = num_lados * (num_lados - 3) / 2;

    printf("O polígono com %d lados possui %d diagonais.\n", num_lados,
           num_diagonais);

    return 0;
}
