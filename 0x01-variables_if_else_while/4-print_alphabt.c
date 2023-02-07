#include <stdio.h>

int main()
{	
    char x;

    for(x = 'a'; x <= 'z'; x++)
    {
	if (x != 'e' && x != 'q')
            putchar(x);
    }

    putchar('\n');

    return 0;
}
