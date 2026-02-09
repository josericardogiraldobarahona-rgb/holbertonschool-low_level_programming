#include <stdio.h>
#include "main.h"
/**
* _islower verifica si es mayuscula
* o minuscula con un cero o un uno int _islower(int c);
* Return: sempre 0 minuscula o 1 mayuscula  (exito)
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
