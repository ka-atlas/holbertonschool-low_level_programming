#include "main.h"

void puts2(char *str)
{	
	int skip = 0;

	while(*str)
	{	
		if (skip%2!=1)
			_putchar(*str++);
		skip+=1
	}
	_putchar('\n');
}
