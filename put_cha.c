#include "main.h"
#include <unistd.h>

/**
* put_cha - prints character to std out put.
* @p: character to be printed
* Return: write
*/
int put_cha(char p)
{
	return (write(1, &p, 1));
}