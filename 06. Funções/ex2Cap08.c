#include <stdio.h>
#include <stdlib.h>

int calcQtdSeg (int h, int m, int s);

int main()
{
int hs, min, seg, total;
printf("Horas..: ");
scanf("%d", &hs);
printf("Minutos..: ");
scanf("%d", &min);
printf("Segundos..: ");
scanf("%d", &seg);
total = calcQtdSeg(hs, min, seg);
printf("\nHora: %d:%d:%d", hs, min, seg);
printf("\nTotal de Segundos..: %d segundos", total);
return 0;
}

int calcQtdSeg (int h, int m, int s)
{
return h * 3600 + m * 60 + s;
}