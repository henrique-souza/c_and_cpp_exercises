#include <stdio.h>
void Mensagem (void);
int main ()
{
	Mensagem();
	printf ("\tDiga de novo:\n");
	Mensagem();
	return 0;
}
void Mensagem (void)
{
	printf ("Ola! Eu estou vivo.\n");
}