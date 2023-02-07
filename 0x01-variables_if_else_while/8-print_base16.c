#include <stdio.h>

int main()
{
	int x;

	char alpha;

	for (x = 0; x<=9; x++){
		putchar((x % 10) + '0');
	}

	for (alpha = 'a'; alpha<='f'; alpha++){
		putchar(alpha);
	}
	
	printf("\n");

	return (0);

}
