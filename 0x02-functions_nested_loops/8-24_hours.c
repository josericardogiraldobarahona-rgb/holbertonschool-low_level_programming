#include <stdio.h>
#include "main.h"
/**
* las combinacines posibles de horas 
* ya sea negativo o positivo  int print_last_digit(int c);
* Return: devuelve el ultimo digito siempre positivo (exito)
*/
void jack_bauer(void)
{
int hora, minuto;
for (hora = 0; hora <= 23; hora++)
{
    for (minuto = 0; minuto <= 59; minuto++)
    {
       _putchar((hora/10)+'0');
     _putchar((hora%10)+'0');
     _putchar(':');
     _putchar((minuto/10)+'0');
     _putchar((minuto%10)+'0');
     _putchar('\n');
    }
}
}
