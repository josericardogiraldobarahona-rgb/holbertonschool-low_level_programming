#include <stdio.h>
/**calcula e imprime la suma de todos los multiplos
 * de 3 o 5 menores a 1024
 */
int main(void)
{
    int i;
    int suma = 0;
    for (i = 0; i < 1024; i++)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            suma += i;
        }
        
    }
    printf("%d\n", suma);
    return(0);
}