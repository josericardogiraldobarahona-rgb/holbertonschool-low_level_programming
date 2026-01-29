#include <stdio.h>

/**
* main - entry point
* description prinfs the alphabet in lowercase using putchar
* Return: sempre 0 (exito)
*/

int main(void)
{
int numero;
int numero2;
for (numero = '0'; numero <= '8'; numero++)
{
for (numero2 = '0'; numero2 <= '9'; numero2++)
{
if (numero2 != '0' && numero2 != numero)
{
putchar(numero);
putchar(numero2);
if (numero != '8' || numero2 != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
