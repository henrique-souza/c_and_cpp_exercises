#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dar uma olhada no erro na includePath assim q possível
    ​​int i, idade, sexo, sintomas, dias, teste, resultado;
    int qtdCovid = 0, qtdTeste = 0, qtdCovidMasc = 0, qtdNegSin = 0, somaIdoso = 0, qtdIdoso = 0;

    for (i = 1; i <= 4; i++)
    {
        ​​
        printf("\n---------------------- Entrevistado Nr: %d ---------------------\n", i);
        printf("Idade..: ");
        scanf("%d", &idade);
        printf("Sexo 1-Masculino 2-Feminino..: ");
        scanf("%d", &sexo);
        printf("Apresentou sintomas de Covid 1-Sim 2-Nao..: ");
        scanf("%d", &sintomas);

        // Se apresentou sintomas
        if (sintomas == 1)
        {
            ​​
            printf("Por quantos dias apresentou Sintoma..: ");
            scanf("%d", &dias);
        }
        ​​
        printf("Realizou algum tipo de teste 1-Sim 2-Nao ? ");
        scanf("%d", &teste);
        if (teste == 1) // realizou o teste
        {
            ​​
            // Pergunta 2
            qtdTeste++;
            printf("Qual foi o Resultado 1-Positivo 2-Negativo? ");
            scanf("%d", &resultado);
            // Verificando se teve Covid (Pergunta 1)
            if (resultado == 1) // Teve covid
            {
                ​​
                qtdCovid++; // Pessoas que realizaram Testes e Positivo.
                // Pergunta 3
                if (sexo == 1) // Sexo Masculino
                {
                    ​​
                    qtdCovidMasc++;
                }
                ​​
                // Pergunta 5
                if (idade >= 60)
                {
                    ​​
                    somaIdoso = somaIdoso + idade;
                    qtdIdoso++;
                }
                ​​
            }
            ​​
            else // resultado negativo
            {
                ​​
                if (sintomas == 1) // Teve sintomas
                {
                    ​​
                    qtdNegSin++;
                }
                ​​
            }
            ​​
        }
        ​​
    }
    ​​ // fim for
        printf("\n\n------------------ Resultado da Pesquisa ----------------------");
    printf("\n Quantidade de pessoas que tiveram Covid..: %d", qtdCovid);
    printf("\n Quantidade de pessoas que realizaram algum tipo de Teste..: %d", qtdTeste);
    printf("\n Quantidade de pessoas do sexo masculino que tiveram Covid.: %d", qtdCovidMasc);
    printf("\n Percentual de Pessoas que Tiveram Covid.: %d%% ", qtdCovid * 100 / (i - 1));
    printf("\n Percentual de Pessoas que Não Tiveram Sintomas, mas estavam com Covid.: %d%% ", qtdNegSin * 100 / (i - 1));
    printf("\n Media de idade dos idosos que tiveram Covid..: %d anos", somaIdoso / qtdIdoso);
    printf("\n\n-----------------------------------------------------------------");
    return 0;
}
​​