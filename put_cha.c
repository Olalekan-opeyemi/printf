
#include <unistd.h>

/**
* put_cha - prints character to std out put.
* @c: character to be printed
* Return: write
*/

int put_cha(char c)
{
	return (write(1, &c, 1));
}
