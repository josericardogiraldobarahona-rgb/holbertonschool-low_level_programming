#include <stdio.h>

/**
* main - entry point
* description prinfs the alphabet in lowercase using putchar
* Return: sempre 0 (exito)
*/

int main(void)
{
char letra;
for (letra = 'z'; letra >= 'a'; letra--)
{
putchar(letra);
}
putchar('\n');
return (0);
}
