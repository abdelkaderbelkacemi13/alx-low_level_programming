#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print without using prinyf or put.
 *
 * Return: 1 (fail)
*/
int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, text, 59);
return (1);
}
