#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Return: sempre 0 (exito)
*/

int main(void)
{
int n;
int last_d;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_d = n % 10;
printf("last digit of %d is %d ", n, last_d);
if (last_d > 5)
{
printf("and is grater than 5\n");
}
else if (last_d == 0)
{
printf("is zero 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
	return (0);
}
