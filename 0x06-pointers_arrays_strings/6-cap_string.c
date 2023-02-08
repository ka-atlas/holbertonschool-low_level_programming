#include "main.h"

char *cap_string(char *str)
{
	int index = 0;

	while (str[index]!='\0')
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (index>0)
		{	
			if (str[index - 1] == ' ' ||
			    str[index - 1] == '\t' ||
			    str[index - 1] == '\n' ||
			    str[index - 1] == ',' ||
			    str[index - 1] == ';' ||
			    str[index - 1] == '.' ||
			    str[index - 1] == '!' ||
			    str[index - 1] == '?' ||
			    str[index - 1] == '"' ||
			    str[index - 1] == '(' ||
			    str[index - 1] == ')' ||
			    str[index - 1] == '{' ||
			    str[index - 1] == '}')
				str[index] -= 32;
		}
		
		else if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
