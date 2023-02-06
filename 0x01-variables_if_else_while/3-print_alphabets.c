#include <stdio.h>

int main()
{	
    char x;

    for(x = 'a'; x <= 'z'; x++)
    {
        putchar(x);
    }

    for(x = 'A'; x <= 'Z'; x++)
    {
        putchar(x);
    }

    putchar('\n');

    return 0;
}
