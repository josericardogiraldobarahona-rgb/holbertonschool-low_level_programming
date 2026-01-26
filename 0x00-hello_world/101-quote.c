#include <unistd.h>

/**
* main - Print an exact quote in the standard error output
*
* Return: sempre 1 (exito)
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
