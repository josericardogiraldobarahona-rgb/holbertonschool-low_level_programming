#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
/**
* main - imprimir putchar
* description putchar
* Return: sempre 0 (exito)
*/

int main(void){
char *texto = "_putchar";
int i = 0;
 while (texto[i] != '\0')
 {
  _putchar(texto[i]);
  i++;
 }
_putchar('\n');
return (0);
}
