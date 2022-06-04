/*
Receber o número de horas trabalhadas
Receber o valor do salário minimo
Receber o número de horas extras trabalhadas
Calcular e mostrar o salário a receber

Valor da Hora trabalhada = 1 oitavos do salário mínimo
Valor da Hora extra = 1 quarto do salário minimo

Salário Bruto = Número de Horas trabalhas * Valor da Hora Trabalhada
Quantia de Hora Extra = Hora Extra * Valor da Hora Extra

Salário a receber = Salário Bruto + Quantia de Hora Extra
*/
#include <stdio.h>

int main()
{
    float salarioMinimo, salarioAReceber, salarioBruto, valorDaHoraTrabalhada,
    valordaHoraExtra, quantiaAReceber, horasTrabalhadas, horasExtrasTrabalhadas;

    printf("Digite por quantas horas voce trabalhou: ");
    // O " %*c " faz com que o buffer seja limpo após a leitura do scanf
    scanf("%f%*c", &horasTrabalhadas);

    printf("Digite o valor do salario mínimo atual: ");
    scanf("%f%*c", &salarioMinimo);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%f%*c", &horasExtrasTrabalhadas);

    valorDaHoraTrabalhada = salarioMinimo / 8;
    printf("\n\t\tValores");
    printf("\nValor da hora trabalhada: R$ %.2f", valorDaHoraTrabalhada);

    valordaHoraExtra = salarioMinimo / 4;

    printf("\nValor da hora extra: R$ %.2f", valordaHoraExtra);

    salarioBruto = horasTrabalhadas * valorDaHoraTrabalhada;

    printf("\n\n\t\tCalculos");
    printf("\nCaculo do Salario Bruto: R$ %.2f", salarioBruto);

    quantiaAReceber = horasExtrasTrabalhadas * valordaHoraExtra;

    printf("\nQuantia a receber: R$ %.2f", quantiaAReceber);

    salarioAReceber = salarioBruto + quantiaAReceber;

    printf("\n\n\t\tResultado");
    printf("\nSalario total a receber: R$ %.2f", salarioAReceber);

    return 0;
}
