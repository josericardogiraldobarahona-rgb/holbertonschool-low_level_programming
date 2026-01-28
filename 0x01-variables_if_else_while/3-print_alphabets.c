#include <stdio.h>

/**
* main - entry point
* description prinfs the alphabet in lowercase using putchar y mayusculas
*y mayusculas
* Return: sempre 0 (exito)
*/

int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);
}
for (letra = 'A'; letra <= 'Z'; letra++)
{
putchar(letra);
}
putchar('\n');
return (0);
}
