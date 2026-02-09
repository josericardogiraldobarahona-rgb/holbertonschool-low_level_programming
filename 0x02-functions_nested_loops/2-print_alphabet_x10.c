#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10- imprime el
* alfabeto en minusculas seguido de una nueva linea 10 veces
* Return: sempre 0 (exito)
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
char letra = 'a';
while (letra <= 'z')
{
_putchar(letra);
letra++;
}
}
_putchar('\n');
return;
}
