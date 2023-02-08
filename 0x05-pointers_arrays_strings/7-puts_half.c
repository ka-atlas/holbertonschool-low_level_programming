#include "main.h"

void puts_half(char *str)
{
	int len = 0;

	while (s[len]!='\0')
		len++;

	if ((len%2)==1)
		index = (len - 1) / 2;
	else
		index = len/2;
	
	for (i = index; i<len; i++)
		_putchar(s[i]);

	_putchar('\n');
}
