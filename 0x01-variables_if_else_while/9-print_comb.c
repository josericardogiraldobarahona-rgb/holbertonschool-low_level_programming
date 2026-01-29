#include <stdio.h>

/**
* main - entry point
* description prinfs the alphabet in lowercase using putchar
* Return: sempre 0 (exito)
*/

int main(void)
{
int numero;
for (numero = '0'; numero <= '9'; numero++)
{
putchar(numero);
if (numero != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
