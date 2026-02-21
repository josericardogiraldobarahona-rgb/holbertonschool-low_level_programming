#include "main.h"
/**imprime la tabla de miltiplicar de n
 * n es el numero de la tabla
 */
void print_times_table(int n)
{
int fila, col, mult;
if (n >= 0 && n <= 15)
   {
     for (fila = 0; fila <=n; fila++)
     {
        for (col = 0; col <=n; col++)
        {
            mult = fila * col;
            if (col==0)
            {
                _putchar(mult + '0');
            }
            else if(mult < 10)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar(' ');
                _putchar(mult + '0');
            }
            else if (mult < 100)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar((mult / 10) + '0');
                _putchar((mult % 10) + '0');
            }
            else
            {
              _putchar(',');
                _putchar(' ');
                _putchar((mult / 100) + '0');
                _putchar(((mult % 10) % 10) + '0');  
                _putchar((mult % 10) + '0'); 
            }
        }
        _putchar('\n');
     }
     
   }
}