#include <stdio.h>
#include <stdlib.h>

float calcIMC (float p, float h); //declarando função float
void classificacao(float imc); //declarando função void
int main() //começo do programa
{
float peso, altura, imc; //declarando variaveis dos valores a serem recebidos pelo usuario
printf("Qual sua Altura?  ");
scanf("%f", &altura);
printf("Quanto voce pesa?  ");
scanf("%f", &peso);
imc = calcIMC(peso,altura);
printf("Valor seu IMC:  %.2f", imc);
classificacao(imc);
 return 0;
}

float calcIMC (float p, float h)
{ 
    float imc;
imc = p / (h* h);
return imc;
}

// função de classificação
void classificacao(float imc)
{
    if (imc <=18.6)
    { 
    printf("\nAbaixo do Peso"); 
    }
    else if (imc <25)
    { 
    printf("\nPeso Ideal"); 
    }
    else if (imc <30)
    { 
    printf("\nLevemente acima do peso"); 
    }
    else if (imc <35)
    {
    printf("\nObseidade Grau I - Procure um medico"); 
    }
else if (imc <40)
{ printf("\nObsedade Grau II - Procure um medico"); }
else
{ printf("\nObsedade Grau III - Procure um medico"); }
}