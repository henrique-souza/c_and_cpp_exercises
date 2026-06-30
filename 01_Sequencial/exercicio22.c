/*
    Faça um programa que receba o número de lados de um polígono convexo,
    calcule e mostre o número de diagonais desse polígono.
    Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do polígono

    Cap 4 - Exercicio 22 - Livro Fundamentos da Programação de Computação
    Página 93
 */
#include <stdio.h>

int main() {
    long long N;
    printf("Digite o número de lados de um polígono: ");
    if (scanf("%lld", &N) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (N < 3) {
        printf("Um polígono deve ter pelo menos 3 lados.\n");
        return 0;
    }

    long long diagonais = N * (N - 3) / 2;
    printf("O polígono com %lld lados possui %lld diagonais.\n", N, diagonais);
    return 0;
}
