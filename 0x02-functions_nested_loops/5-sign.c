#include <stdio.h>
#include "main.h"
/**
* _print_sign verifica si es negativo o positivo
* ya sea negativo o positivo  int _isalpha(int c);
* Return: 1 si es positivo -1 si es negativo y cero si es cero (exito)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if ( n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
