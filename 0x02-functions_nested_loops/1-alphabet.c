#include <stdio.h>
#include "main.h"
/**
* print alphabet- imprime el
* alfabeto en minusculas seguido de una nueva linea
* Return: sempre 0 (exito)
*/

void print_alphabet(void)
{
char letra = 'a';
while (letra <= 'z')
{
_putchar(letra);
letra++;
}
_putchar('\n');
return;
}
