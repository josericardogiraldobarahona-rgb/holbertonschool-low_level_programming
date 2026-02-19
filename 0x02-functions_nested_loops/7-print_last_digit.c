#include <stdio.h>
#include "main.h"
/**
* print_last_digit devielve el ultumo digito de cualquier numero
* ya sea negativo o positivo  int print_last_digit(int c);
* Return: devuelve el ultimo digito siempre positivo (exito)
*/

int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last =-last;
}
_putchar(last + '0');
return (last);
}
