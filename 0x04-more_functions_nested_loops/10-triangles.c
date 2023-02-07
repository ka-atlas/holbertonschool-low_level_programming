#include <stdio.h>

void print_triangle(int size)
{	
	if (size>0)
	{
		int i,j;
		int counter = 1;

		for (j=0; j<size; j++)
		{
			for (i=0; i<size; i++)
			{
				if (i>=size-counter)
					putchar('#');

				else
					putchar(' ');
			}
			putchar('\n');
			counter +=1;
		}
	}
	else
		putchar('\n');
}

int main(void)
{
	print_triangle(2);
        print_triangle(10);
        print_triangle(1);
        print_triangle(0);
	return (0);
}
