#include <stdio.h>
#include "main.h"
/**
* 3-islower verifica si es mayuscula 
* o minuscula con un cero o un uno 
* Return: sempre 0 minuscula o 1 mayuscula  (exito)
 */

int _islower(int c)
{
    if (c >= 'a' && c<= 'z')
    {
       return (1); 
    }
    else{
return (0);
    }
}
