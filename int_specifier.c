#include "main.h"

void int_specifier(int num)
{
	int s;

	if (num == 0)
	{
		return;
	}
	int_specifier(num / 10);
	s = num % 10;
	put_cha(s + '0');
}
