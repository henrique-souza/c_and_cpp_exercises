/* fazer uma entrevista para as pessoas (n números e pessoas)
várias perguntas aos entrevistados
quem responde? entrevistado (usuário)
toda vez que terminar para uma pessoa, retornar para as perguntas - estrututa e repetição (presumindo que a pessoa está passando por uma fila)
Por quantos dias?
Realizou algum tipo de teste?
Qual o resultado do Teste?*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i, id, se, sin, d, test, res;
    int qtdCovid =0, qtdTest =0, qtdCM = 0;
    for (i = 1; i<=2; i++)
    {
    printf("Entrevistado %d\n\n", i);
    printf("Sua idade: ");  
    scanf("%d", &id);
    printf("Sexo: 1 - para Masculino | 2 - para Feminino:  ");
    scanf("%d", &se);
    printf("Voce apresentou sintomas de COVID-19? 1 - para Sim |  2 - para Nao:  ");
    scanf("%d", &sin);
    if (sin ==1) //"se apresentou sintomas"
        {
    printf("Por quantos dias?  ");
    scanf("%d", &d);
        } //fim de se
    printf("Realizou algum tipo de teste? 1 - para Sim | 2 - para Nao:   ");
    scanf("%d", &test);
        if (test == 1) // "se realizou o teste" OU confirmação de que teve a doença
            {    
        qtdTest++; //é um contador. Vou pegar definição mais tarde
    printf("Qual foi o Resultado? 1 - para Positivo | 2 - para Negativo:   ");
    scanf("%d", &res);
             if (res ==1)
                {
        qtdCovid++;
        if (se ==1)
                    {
            qtdCM++;
                    }
                } //fim de se
            }

    }
printf ("\n\n                    Resultado da Pesquisa\n\n");
 printf("Quantidade de pessoas que tiveram Covid..: %d\n\n", qtdCovid);
 printf("Quantidade de pessoas que realizaram algum tipo de Teste..: %d\n\n", qtdTest);
 printf("Quantidade de pessoas do sexo masculino que tiveram Covid.: %d\n\n\n", qtdCM);
return 0;
}/* adicionar
4) - Qual o percentual de pessoas que 
realizaram testes e o resultado foi positivo?"
6) - " " " " " "" apresentaram sintomas 
mas o resultado do teste deu Negativo?
*/