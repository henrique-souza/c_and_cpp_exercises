#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ float nr;
printf("Numero..: ");
scanf("%f", &nr);
printf("\nNumero arredondado para cima..: %.2f", ceil(nr));
printf("\nNumero arredondado para baixo..: %.2f", floor(nr));
return 0;
}