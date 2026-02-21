#include <stdio.h>
/** calcula he imprime la suma de los numeros 
 * pares de fibonacci has los 4 millones */
int main (void)
{
    unsigned long f1 = 1, f2 = 2, sig = 0;
    unsigned long suma = 2;
    while (sig <= 4000000)
    {
        sig = f1 + f2;
        if (sig > 4000000)
        {
            break;
        }
        if ((sig % 2) == 0)
        {
            suma += sig;
        }
       f1 = f2;
       f2 = sig; 
    }
   printf("%lu\n", suma);
   return(0); 
}