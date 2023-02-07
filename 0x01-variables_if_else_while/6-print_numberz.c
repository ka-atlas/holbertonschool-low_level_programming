#include <stdio.h>

int main()
{
	int x;
	

	for (x = 0; x<=9; x++){
		putchar((x % 10) + '0');
	}
	
	printf("\n");

	return (0);

}
