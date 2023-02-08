#include "main.h"

void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		*str +=1;
	}
	_putchar('\n');
}
