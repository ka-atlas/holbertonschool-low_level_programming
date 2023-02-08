#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[dest_len]!='\0')
		dest_len++;

	while (index<n)
        {
                dest[(dest_len+index)] = src[index];
                index++;
        }

	dest[(dest_len+index)] = '\0';

	return (dest);
}
