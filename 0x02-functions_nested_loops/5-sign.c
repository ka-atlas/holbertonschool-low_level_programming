#include "main.h"
#include <stdio.h>

int print_sign(int n)
{
	if (n>0){
		printf("+1");
	}
	else if (n<0){
		printf("-1");
	}
	else{
		printf("0");
	}
}
