#include <stdio.h>

/**
* main - entry point
* description prinfs the alphabet in lowercase using putchar
* Return: sempre 0 (exito)
*/

int main(void)
{
int n;
int n2;
for (n = 0; n <= 98; n++)
{
  for (n2 = n+ 1; n2 <= 99; n2++)
  {
    putchar((n / 10) + '0');
    putchar((n % 10) + '0');
    putchar(' ');
    putchar((n2 / 10) + '0');
    putchar((n2 % 10) + '0');
     if (n != 98 || n2 != 99)
     {
       putchar(',');
       putchar(' ');
     }
    }
 }
putchar('\n');
return (0);
}
