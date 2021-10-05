#include <stdio.h>
#include <stdlib.h>

void verNum (int num);
int main()
{ 
    int nr;
printf("Numero..: ");
scanf("%d", &nr);
verNum(nr);
return 0;
}
void verNum (int num)
{
if (num < 0)
{ 
    printf("\nNegativo"); 
}
else
{ 
    printf("\nPositivo");   
}
}