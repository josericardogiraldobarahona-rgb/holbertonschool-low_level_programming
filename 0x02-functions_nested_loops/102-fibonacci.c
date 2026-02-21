#include <stdio.h>
/**imprime los primeros 50 numeros de fibonacci
 * empezando con 1 y 2
 */
int main (void)
{
    long fi = 1, f2 = 2, sig;
    int i;
    printf("%ld, %ld", fi, f2);

    for(i = 3; i <= 50; i++)
    {
        sig = fi +f2;
        printf(", %ld", sig);
        fi = f2;
        f2 = sig;
    }
    printf("\n");
    return(0);
}