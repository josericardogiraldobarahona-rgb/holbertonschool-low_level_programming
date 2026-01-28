#include <stdio.h>

/**
* main - entry point
* description prinfs the alphabet in lowercase using putchar
* Return: sempre 0 (exito)
*/

int main(void)
{
int numero;
char letra;
for (numero = '0'; numero <= '9'; numero++)
{
putchar(numero);
}
for (letra = 'a'; letra <= 'f'; letra++)
{
putchar(letra);
}
putchar('\n');
return (0);
}
