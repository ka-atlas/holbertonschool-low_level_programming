#include "main.h"

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
					_putchar('#');

				else
					_putchar(' ');
			}
			_putchar('\n');
			counter +=1;
		}
	}
	else
		_putchar('\n');
}
