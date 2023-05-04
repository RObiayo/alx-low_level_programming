#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints chat to Standard output
 * @c: char to be printed
 * Return: Successful 1.
 * If err show -1 and errno set accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
