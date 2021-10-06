/*
1.	- Média de idade do público.
2.	- A quantidade de pessoas que possuem mais de 8 anos de tempo de serviço
3.	- Média de pessoas do sexo feminino com faixa salarial acima de 5000.
4.	- % de pessoas com idade acima de 40 anos que começaram a trabalhar recentemente (tempo de serviço menor que 2 anos.
5.	- Quem tem a média salarial mais alta? Os homens ou as mulheres?
*/
#include <stdio.h>
 #include <stdlib.h>

 int main()
 {
 int idade, sexo, tempo, somaIdade=0, cont=0, tempoAcima=0;
 float salario;
 printf("Idade..: ");
 scanf("%d", &idade);
while (idade >0)
 {
 printf("\nSexo: 1-Masculino 2-Feminino..: ");
 scanf("%d", &sexo);
 printf("Salario..: ");
 scanf("%f", &salario);
 printf("Tempo de servico..: ");
 scanf("%d", &tempo);
 // Média de idade do grupo
 somaIdade = somaIdade + idade;
 cont++;
 // A quantidade de pessoas que possuem mais de 8 anos de tempo de serviço
 if (tempo > 8)
 {
 tempoAcima++;
 }
 printf("\nIdade..: ");
 scanf("%d", &idade); // conceito do incremento
 } // fim enquanto
// Apresentação dos Resultados
 printf("\n------------------------ Resultados ---------------------------");
 printf("\nMedia de idade do grupo..: %d anos", somaIdade/cont);
 printf("\nA quantidade de pessoas que possuem mais de 8 anos de tempo de serviço..: %d", tempoAcima);
 return 0;
 }