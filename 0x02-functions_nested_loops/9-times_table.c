#include "main.h"
/**9 imprime la tabla del nueve empesando con cero */
void times_table(void)
{
    int fila, col, prod;
    for (fila = 0; fila <= 9; fila++)
    {
        for (col = 0; col <= 9; col++)
        {
            prod = fila*col;
            if (col == 0)
            {
                _putchar(prod + '0');
            }
            else
            {
                _putchar(',');
                _putchar(',');
                if(prod <= 9)
                {
                    _putchar(' ');
                    _putchar(prod +'0');
                }
                else
                {
                    _putchar((prod / 10) + '0');
                    _putchar((prod % 10) + '0');
                }
            }
        }
        _putchar('\n');
    }

}