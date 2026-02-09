#include <stdio.h>
#include "main.h"
/**
* print_alphabet- imprime el
* alfabeto en minusculas seguido de una nueva linea
* Return: sempre 0 (exito)
 */
int i;
void print_alphabet_x10(void)
{
char letra = 'a';
for (i=0 ; i<10 ; i++){
while (letra <= 'z')
{
_putchar(letra);
letra++;
}
}
_putchar('\n');
return;
}
