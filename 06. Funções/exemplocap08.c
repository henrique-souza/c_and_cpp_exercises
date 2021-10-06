#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raiz (int num);

int main()
{
    int nr;
//float rq;
printf("Numero..: ");
scanf("%d", &nr);
//rq = raiz(nr);
//printf ("Raiz Quadrada..: %.2f", rq);
printf("Raiz Quadrada..: %.2f", raiz(nr));
return 0;
}

float raiz (int num)
{
return sqrt(num);

}