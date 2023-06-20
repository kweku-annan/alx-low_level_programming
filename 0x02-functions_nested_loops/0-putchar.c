#include <unistd.h>
/**#include "main.h"*/

int _putchar(char c)
{
  return (write(1, &c, 1));
}


int main(void)
{
  char message[] = "_putchar\n";
  int i;
  for (i=0; message[i] != '\0'; i++)
    {
      _putchar(message[i]);
    }
  return (0);
}
