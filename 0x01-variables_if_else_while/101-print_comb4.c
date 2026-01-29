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
int numero3;
for (numero = '0'; numero <= '7'; numero++)
{
for (numero2 = numero + 1; numero2 <= '8'; numero2++)
{
for (numero3 = numero2 + 1; numero3 <= '9'; numero3++)
{
if (numero2 != '0' && numero2 != numero)
{
putchar(numero);
putchar(numero2);
putchar(numero3);
if (numero != '7' || numero2 != '8' || numero3 != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
