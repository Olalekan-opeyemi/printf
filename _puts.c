#include "main.h"

/**
* _puts - prints spring to the std out put.
* @str: string
* Return: v_prints.
*/
int _puts(const char *str)
{
	int v, v_prints = 0;

	for (v = 0; str[v] != '\0'; v++)
	{
		put_cha(str[v]);
		v_prints += 1;
	}
return (v_prints);
}
