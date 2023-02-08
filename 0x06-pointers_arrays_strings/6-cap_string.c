#include "main.h"

char *cap_string(char *)
{
	int index = 0;

	while (str[index]!='\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
