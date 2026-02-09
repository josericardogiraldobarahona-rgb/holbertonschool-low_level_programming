#include <stdio.h>
#include "main.h"
/**
* print alphabet- imprime el
* alfabeto en minusculas seguido de una nueva linea
* Return: sempre 0 (exito)
*/

void print_alphabet(void)
{
char letra;
int i = 0;
for (letra = 'a'; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
return (0);
}
