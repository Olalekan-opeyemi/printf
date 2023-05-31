#include "main.h"

/**
* custombinary - converts to binary
* @bin: number to be converted.
* Return: nothing.
*/
void custombinary(unsigned int bin)
{
	if (bin > 1)
	{
		custombinary(bin / 2);
	}
	put_cha(bin % 2 + '0');
}
