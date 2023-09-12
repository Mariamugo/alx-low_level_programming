#include <unistd.h>

/**
 * main - declares _putchar function
 *
 * Return: On sucess 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
