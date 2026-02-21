#include <stdio.h>
/** main inprime los 98 numeros de fibonacci
 * sin usar long long ni punteros
 */
int main(void)
{
 unsigned long f1_bajo = 1, f1_alto = 0, f2_bajo = 2, f2_alto = 0;
 unsigned long sig_bajo, sig_alto, limite = 1000000000;
 int i;
 printf("%lu, %lu", f1_bajo, f2_bajo);
 for(i = 3; i <= 98; i++)
 {
    sig_bajo = f1_bajo + f2_bajo;
    sig_alto = f1_alto + f2_alto + (sig_bajo / limite);
    sig_bajo %= limite;
    
    printf(", ");
    if (sig_alto > 0)
    {
        printf("%lu%09lu", sig_bajo, sig_bajo);
    }
    else
    {
        printf("%lu", sig_bajo);
    }
    f1_bajo = f2_bajo;
    f1_alto = f2_alto;
    f2_bajo = sig_bajo;
    f2_alto = sig_alto;
 }
 printf("\n");
 return(0);
}