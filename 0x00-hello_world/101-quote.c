#include <unistd.h>
/**
*main - Entry point
*Description: prints "\"Programming is like building a multilingual puzzle
*Return: 0
*/
int main(void)
{
string message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, 59);
return (1);
}
