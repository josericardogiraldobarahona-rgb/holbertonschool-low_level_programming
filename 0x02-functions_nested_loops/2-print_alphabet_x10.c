#include <stdio.h>
#include "main.h"
/**
* print_alphabet- imprime el
* alfabeto en minusculas seguido de una nueva linea
* Return: sempre 0 (exito)
 */
void print_alphabet_x10(void)
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
