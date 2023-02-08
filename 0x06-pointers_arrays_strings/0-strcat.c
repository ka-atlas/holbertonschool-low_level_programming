#include "main.h"

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[dest_len]!='\0')
		dest_len++;

	while (src[index]!='\0')
        {
                dest[(dest_len+index)] = src[index];
                index++;
        }

	dest[(dest_len+index)] = '\0';

	return (dest);
}
