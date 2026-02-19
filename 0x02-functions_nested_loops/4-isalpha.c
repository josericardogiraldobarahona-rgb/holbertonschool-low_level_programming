#include <stdio.h>
#include "main.h"
/**
* _isalpha comprueba si el caracter es  una letra 
*ya sea mayuscula o minuscula _isalpha(int c);
* Return: 1 si es letra 0 si no es el caso  (exito)
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
