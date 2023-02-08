#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index]!='\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
