#include "main.h"

void puts_half(char *str)
{
	int len = 0, i, index;

	while (str[len]!='\0')
		len++;

	if ((len%2)==1)
		index = (len - 1) / 2;
	else
		index = len/2;
	
	for (i = index; i<len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
