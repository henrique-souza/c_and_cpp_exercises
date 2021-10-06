#include <stdio.h>

main()
{
   int numero_digitado, valor_da_variavel, *ponteiro;

   numero_digitado = 70;
   // recebe o endereco de numero_digitado
   ponteiro = &numero_digitado;
   // valor_da_variavel recebe o mesmo conteudo de numero_digitado
   valor_da_variavel = *ponteiro;

   printf("Valor armazenado: %d \n\n", valor_da_variavel);
   printf("Mostrando o Endereco do Ponteiro: %p \n", ponteiro);
   printf("Valor da variavel apontada: %d \n", *ponteiro);
   printf("Numero digitado nao modificado: %d \n", numero_digitado);

   // modifica o conteudo da variavel numero_digitado indiretamente
   *ponteiro = 100;

   printf("\nValor da variavel modificada por um Ponteiro de valor 100: %d \n", *ponteiro);
   printf("Valor da variavel modificada (que inicalmente valia 70): %d \n", numero_digitado);
   printf("Valor armazenado nao modificado: %d \n", valor_da_variavel);
   //printf("Mostrando o Endereco do Ponteiro (quando seu valor é 100): %p \n", ponteiro);
}
